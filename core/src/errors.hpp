//
// @file exception.hpp
// @brief The ydk exception header.
//
// YANG Development Kit
// Copyright 2016 Cisco Systems. All rights reserved
//
////////////////////////////////////////////////////////////////
// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
//////////////////////////////////////////////////////////////////

#ifndef _EXCEPTION_HPP_
#define _EXCEPTION_HPP_

#include <exception>
#include <string>


namespace ydk {
///
/// @brief Base class for Y Errors
///
/// The subclasses give a specialized view of the error that has occurred.
///
struct YError : public std::exception
{
    YError(const std::string& msg);

    const char* what() const noexcept;

    std::string err_msg;
};

struct YClientError : public YError
{
    YClientError(const std::string& msg);
};

struct YServiceProviderError : public YError
{
    YServiceProviderError(const std::string& msg);
};

struct YServiceError : public YError
{
    YServiceError(const std::string& msg);
};

///
/// @brief Illegal State Error.
///
///
/// Thrown when an operation/service is invoked
/// on an object that is not in the right state. Use the err_msg for the error.
///
struct YIllegalStateError : public YError
{
     YIllegalStateError(const std::string& msg);
};

///
/// @brief Invalid Argument
///
/// Use the err_msg for the error.
///
struct YInvalidArgumentError : public YError
{
     YInvalidArgumentError(const std::string& msg);
};

///
/// @brief Operation Not Supported Error
///
/// Thrown when an yfilter is not supported.
///
struct YOperationNotSupportedError : public YError
{
    YOperationNotSupportedError(const std::string& msg);
};

///
/// @brief Model Error
///
/// Thrown when a model constraint is violated.
///
struct YModelError : public YError
{
    YModelError();
    YModelError(const std::string& msg);
};

std::ostream & operator<<(std::ostream& o, const ydk::YError& e);
std::ostream & operator<<(std::ostream& o, ydk::YError& e);
}

#endif /* _EXCEPTION_HPP_ */
