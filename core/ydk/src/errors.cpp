/// YANG Development Kit
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


#include "path/path_private.hpp"

namespace ydk
{
static std::string get_libyang_error()
{
    return std::string(ly_errmsg()) + ". Path: " + std::string(ly_errpath());
}
}

/////////////////////////////////////////////////////////////////////////
/// YError
/////////////////////////////////////////////////////////////////////////
ydk::YError::YError(const std::string& msg) : err_msg{msg}
{
    what();
}

const char* ydk::YError::what() const noexcept
{
    return err_msg.c_str();
}

std::ostream & ydk::operator<<(std::ostream &stream, const ydk::YError & e)
{
    stream << e.what();
    return stream;
}

std::ostream & ydk::operator<<(std::ostream &stream, ydk::YError & e)
{
    stream << e.what();
    return stream;
}

/////////////////////////////////////////////////////////////////////////
/// YClientError
/////////////////////////////////////////////////////////////////////////
ydk::YClientError::YClientError(const std::string& msg)
    : YError{"YClientError: " + msg}
{

}

/////////////////////////////////////////////////////////////////////////
/// YServiceProviderError
/////////////////////////////////////////////////////////////////////////
ydk::YServiceProviderError::YServiceProviderError(const std::string& msg)
    : YError{"YServiceProviderError: " + msg}
{

}

/////////////////////////////////////////////////////////////////////////
/// YServiceError
/////////////////////////////////////////////////////////////////////////
ydk::YServiceError::YServiceError(const std::string& msg)
    : YError{"YServiceError: " + msg}
{

}

/////////////////////////////////////////////////////////////////////////
/// YCoreError
/////////////////////////////////////////////////////////////////////////
ydk::path::YCoreError::YCoreError(const std::string& msg) : ydk::YError{"YCoreError: " + msg}
{

}

//////////////////////////////////////////////////////////////////////////
/// YIllegalStateError
//////////////////////////////////////////////////////////////////////////
ydk::YIllegalStateError::YIllegalStateError(const std::string& msg) : ydk::YError{"YIllegalStateError: " + msg}
{

}

//////////////////////////////////////////////////////////////////////////
/// YInvalidArgumentError
//////////////////////////////////////////////////////////////////////////
ydk::YInvalidArgumentError::YInvalidArgumentError(const std::string& msg) : ydk::YError{"YInvalidArgumentError: " + msg}
{

}

//////////////////////////////////////////////////////////////////////////
/// YOperationNotSupportedError
//////////////////////////////////////////////////////////////////////////
ydk::YOperationNotSupportedError::YOperationNotSupportedError(const std::string& msg) : ydk::YError{"YOperationNotSupportedError: " + msg}
{

}

//////////////////////////////////////////////////////////////////////////
/// YDataValidationError
//////////////////////////////////////////////////////////////////////////
ydk::path::YDataValidationError::YDataValidationError() : ydk::path::YCoreError{"YDataValidationError:" + get_libyang_error()}
{

}

//////////////////////////////////////////////////////////////////////////
/// YPathError
//////////////////////////////////////////////////////////////////////////
ydk::path::YPathError::YPathError(ydk::path::YPathError::Error error_code) : ydk::path::YCoreError{"Data Validation Error"}, err{error_code}
{

}



/////////////////////////////////////////////////////////////////////////
/// YCodecError
/////////////////////////////////////////////////////////////////////////
ydk::path::YCodecError::YCodecError(YCodecError::Error ec) : YCoreError("YCodecError:" + get_libyang_error()), err{ec}
{

}


/////////////////////////////////////////////////////////////////////////
/// YModelError
/////////////////////////////////////////////////////////////////////////
ydk::YModelError::YModelError() : ydk::YError{"YModelError: " + std::string(ly_errmsg()) + " Path: " + std::string(ly_errpath())}
{

}

ydk::YModelError::YModelError(const std::string& msg) : ydk::YError{"YModelError: " + msg+" : " + get_libyang_error()}
{

}
