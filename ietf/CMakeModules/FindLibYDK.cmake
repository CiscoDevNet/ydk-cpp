# - Try to find LibYDK
# Once done this will define
#
#  LIBYDK_FOUND - system has LibYDK
#  LIBYDK_INCLUDE_DIRS - the LibYDK include directory
#  LIBYDK_LIBRARIES - Link these to use LibYANG LibPCRE Lib
#
# ####################################################################
# Licensed to the Apache Software Foundation (ASF) under one
# or more contributor license agreements.  See the NOTICE file
# distributed with this work for additional information
# regarding copyright ownership.  The ASF licenses this file
# to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance
# with the License.  You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing,
# software distributed under the License is distributed on an
# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
# KIND, either express or implied.  See the License for the
# specific language governing permissions and limitations
# under the License.
#
######################################################################

if (LIBYDK_LIBRARIES AND LIBYDK_INCLUDE_DIRS)
  # in cache already
  set(LIBYDK_FOUND TRUE)
else (LIBYDK_LIBRARIES AND LIBYDK_INCLUDE_DIRS)

  find_path(LIBYDK_INCLUDE_DIR
    NAMES
      ydk/netconf_provider.hpp
      ydk/netconf_client.hpp
      ydk/core.hpp
      ydk/value.hpp
      ydk/entity_data_node_walker.hpp
      ydk/crud_service.hpp
      ydk/top_entity_lookup.hpp
    PATHS
      /usr/include
      /usr/local/include
      /opt/local/include
      /sw/include
      ${CMAKE_INCLUDE_PATH}
      ${CMAKE_INSTALL_PREFIX}/include
  )
  
  find_library(LIBYDK_LIBRARY
    NAMES
      ydk
      libydk
    PATHS
      /usr/lib
      /usr/lib64
      /usr/local/lib
      /usr/local/lib64
      /opt/local/lib
      /sw/lib
      ${CMAKE_LIBRARY_PATH}
      ${CMAKE_INSTALL_PREFIX}/lib
  )

  if (LIBYDK_INCLUDE_DIR AND LIBYDK_LIBRARY)
    set(LIBYDK_FOUND TRUE)
  else (LIBYDK_INCLUDE_DIR AND LIBYDK_LIBRARY)
    set(LIBYDK_FOUND FALSE)
  endif (LIBYDK_INCLUDE_DIR AND LIBYDK_LIBRARY)

  set(LIBYDK_INCLUDE_DIRS ${LIBYDK_INCLUDE_DIR})
  set(LIBYDK_LIBRARIES ${LIBYDK_LIBRARY})

  # show the LIBYDK_INCLUDE_DIRS and LIBYDK_LIBRARIES variables only in the advanced view
  mark_as_advanced(LIBYDK_INCLUDE_DIRS LIBYDK_LIBRARIES)

endif (LIBYDK_LIBRARIES AND LIBYDK_INCLUDE_DIRS)

