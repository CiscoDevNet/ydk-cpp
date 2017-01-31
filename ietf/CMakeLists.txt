cmake_minimum_required(VERSION 2.8.9)
cmake_policy(SET CMP0048 NEW)
project(ydk_ietf VERSION 0.5.3)



set(YDK_IETF_DESCRIPTION "openconfig ydk bundle")

# set version
set(YDK_IETF_MAJOR_VERSION 0)
set(YDK_IETF_MINOR_VERSION 5)
set(YDK_IETF_SERVICE_VERSION 3)
set(YDK_IETF_VERSION ${YDK_IETF_MAJOR_VERSION}.${YDK_IETF_MINOR_VERSION}.${YDK_IETF_SERVICE_VERSION})
set(YDK_IETF_CORE_SOVERSION ${YDK_IETF_MAJOR_VERSION}.${YDK_IETF_MINOR_VERSION})

# include custom Modules
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules/")

if(NOT LIB_INSTALL_DIR)
	set(LIB_INSTALL_DIR lib)
endif()

if(NOT INCLUDE_INSTALL_DIR)
	set(INCLUDE_INSTALL_DIR include/ydk_ietf)
endif()

# set default build type if not specified by user
if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE release)
endif()

if(SHOW_WARNINGS)
  set(CMAKE_CXX_FLAGS         "${CMAKE_CXX_FLAGS} -Wall -Wextra")
else(SHOW_WARNINGS)
  set(CMAKE_CXX_FLAGS         "${CMAKE_CXX_FLAGS} -w")
endif(SHOW_WARNINGS)

set(CMAKE_CXX_FLAGS_RELEASE "-Os -DNDEBUG")
set(CMAKE_CXX_FLAGS_DEBUG   "-g -O0")


set(libydk_ietf_src ydk/models/generated_entity_lookup.cpp ydk/models/ietf_syslog_types.cpp ydk/models/ietf_inet_types.cpp ydk/models/ietf_interfaces.cpp ydk/models/ietf_netconf_acm.cpp ydk/models/ietf_yang_smiv2.cpp ydk/models/iana_if_type.cpp ydk/models/ietf_netconf.cpp ydk/models/ietf_netconf_with_defaults.cpp ydk/models/ietf_system.cpp ydk/models/ietf_netconf_monitoring.cpp)
set(libydk_ietf_headers ydk/models/ietf_syslog_types.hpp ydk/models/ietf_inet_types.hpp ydk/models/ietf_interfaces.hpp ydk/models/ietf_netconf_acm.hpp ydk/models/ietf_yang_smiv2.hpp ydk/models/iana_if_type.hpp ydk/models/ietf_netconf.hpp ydk/models/ietf_netconf_with_defaults.hpp ydk/models/ietf_system.hpp ydk/models/ietf_netconf_monitoring.hpp)

find_package(LibYDK REQUIRED)

include_directories(
	${Boost_INCLUDE_DIRS}
    ${LIBYDK_INCLUDE_DIRS}
)

add_library(ydk_ietf STATIC ${libydk_ietf_src})

target_link_libraries(ydk_ietf
    ${LIBYDK_LIBRARIES}
)

set_property(TARGET ydk_ietf PROPERTY CXX_STANDARD 11)
set_property(TARGET ydk_ietf PROPERTY CXX_STANDARD_REQUIRED ON)

# find YDK library

install(TARGETS ydk_ietf DESTINATION ${LIB_INSTALL_DIR})
install(FILES ${libydk_ietf_headers} DESTINATION ${INCLUDE_INSTALL_DIR})


# generate doxygen documentation for ydk_core API
find_package(Doxygen)
if(DOXYGEN_FOUND)
	set(DOXYGEN_SKIP_DOT TRUE)
	add_custom_target(doc
			COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_BINARY_DIR}/Doxyfile
			WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
	configure_file(Doxyfile.in Doxyfile)
endif()


# clean cmake cache
add_custom_target(cclean
		COMMAND make clean
		COMMAND find . -iname '*cmake*' -not -name CMakeLists.txt -not -path './CMakeModules*' -exec rm -rf {} +
		COMMAND rm -rf Makefile Doxyfile
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})


