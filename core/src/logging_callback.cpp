/*  ----------------------------------------------------------------
 Copyright 2017 Cisco Systems

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
------------------------------------------------------------------*/
#include <libyang/libyang.h>

#include "spdlog/spdlog.h"
#include "logging_callback.hpp"
#include "logger.hpp"
#include "errors.hpp"

namespace ydk
{
static logging_callback ydk_logging_trace_function = nullptr;
static logging_callback ydk_logging_debug_function = nullptr;
static logging_callback ydk_logging_info_function = nullptr;
static logging_callback ydk_logging_warn_function = nullptr;
static logging_callback ydk_logging_error_function = nullptr;
static logging_callback ydk_logging_critical_function = nullptr;

void libyang_log_callback(LY_LOG_LEVEL level, const char *msg, const char *path)
{
    std::ostringstream error_message{};
    error_message <<msg;
    if(path)
    {
        error_message << " " << "Path: '" << path<<"'";
    }
    switch(level)
    {
        case LY_LLERR:
            if(error_message.str().find("Invalid value")!= std::string::npos
                    || error_message.str().find("Failed to resolve")!= std::string::npos
                    || error_message.str().find("Unexpected character")!= std::string::npos
                    || error_message.str().find("does not satisfy the constraint")!= std::string::npos)
            {
                YLOG_ERROR("Data is invalid according to the yang model. Libyang error: {}", error_message.str());
                throw(YModelError{});
            }
            YLOG_ERROR("Data is invalid according to the yang model. Libyang error: {}", error_message.str());
            break;
        case LY_LLSILENT:
        case LY_LLWRN:
        case LY_LLVRB:
        case LY_LLDBG:
            YLOG_DEBUG("[libyang] {}", error_message.str());
            break;
    }
}

void set_libyang_logging_callback()
{
	ly_set_log_clb(libyang_log_callback, 1);
}

void set_logging_callback(const char* level, logging_callback func)
{
    if(!strcmp(level, trace)) { ydk_logging_trace_function = func; }
    if(!strcmp(level, debug)) { ydk_logging_debug_function = func; }
    if(!strcmp(level, info)) { ydk_logging_info_function = func; }
    if(!strcmp(level, warn)) { ydk_logging_warn_function = func; }
    if(!strcmp(level, error)) { ydk_logging_error_function = func; }
    if(!strcmp(level, critical)) { ydk_logging_critical_function = func; }
}

logging_callback get_logging_callback(const char* level)
{
    if(!strcmp(level, trace)) { return ydk_logging_trace_function; }
    if(!strcmp(level, debug)) { return ydk_logging_debug_function; }
    if(!strcmp(level, info)) { return ydk_logging_info_function; }
    if(!strcmp(level, warn)) { return ydk_logging_warn_function; }
    if(!strcmp(level, error)) { return ydk_logging_error_function; }
    if(!strcmp(level, critical)) { return ydk_logging_critical_function; }
    return nullptr;
}

}	// namespace ydk
