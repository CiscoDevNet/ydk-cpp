cmake_minimum_required(VERSION 2.8.9)
cmake_policy(SET CMP0048 NEW)
project(ydk_ietf VERSION 0.1.1 LANGUAGES C CXX)

# include custom Modules
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules/")

set(YDK_YANG_ARCHIVE ietf\@0.1.1)

if(NOT LIB_INSTALL_DIR)
	set(LIB_INSTALL_DIR lib)
endif()

if(NOT INCLUDE_INSTALL_DIR)
	set(INCLUDE_INSTALL_DIR include/ydk_ietf)
endif()

if(NOT YANG_INSTALL_DIR)
    set(YANG_INSTALL_DIR share/ietf\@0.1.1)
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


set(libydk_ietf_src ydk/models/ietf/generated_entity_lookup.cpp ydk/models/ietf/ietf_system.cpp ydk/models/ietf/iana_if_type.cpp ydk/models/ietf/ietf_syslog_types.cpp ydk/models/ietf/ietf_interfaces.cpp ydk/models/ietf/ietf_inet_types.cpp ydk/models/ietf/ietf_yang_smiv2.cpp ydk/models/ietf/ietf_netconf_monitoring.cpp ydk/models/ietf/ietf_netconf_with_defaults.cpp ydk/models/ietf/ietf_netconf_acm.cpp ydk/models/ietf/ietf_netconf.cpp)

set(libydk_ietf_headers ydk/models/ietf/bundle_info.hpp ydk/models/ietf/ietf_system.hpp ydk/models/ietf/iana_if_type.hpp ydk/models/ietf/ietf_syslog_types.hpp ydk/models/ietf/ietf_interfaces.hpp ydk/models/ietf/ietf_inet_types.hpp ydk/models/ietf/ietf_yang_smiv2.hpp ydk/models/ietf/ietf_netconf_monitoring.hpp ydk/models/ietf/ietf_netconf_with_defaults.hpp ydk/models/ietf/ietf_netconf_acm.hpp ydk/models/ietf/ietf_netconf.hpp)

set(libydk_ietf_yang ietf-netconf-monitoring@2010-10-04.yang ietf-syslog-types.yang ietf-netconf.yang iana-crypt-hash.yang ietf-inet-types.yang ietf-system@2014-08-06.yang ietf-interfaces.yang ietf-yang-smiv2.yang ietf-interfaces-ext.yang ydk@2016-02-26.yang ietf-netconf-with-defaults.yang iana-if-type.yang ietf-netconf-acm.yang ietf-yang-types.yang)

set (libydk_yang_dir ${CMAKE_CURRENT_BINARY_DIR}/ietf\@0.1.1)

list(APPEND libydk_YANG_FILES "")
foreach(yang_file IN LISTS libydk_ietf_yang)
    list(APPEND libydk_YANG_FILES ${libydk_yang_dir}/${yang_file})
endforeach(yang_file)

file(MAKE_DIRECTORY ${libydk_yang_dir})

add_custom_command(OUTPUT ${libydk_YANG_FILES}  
  COMMAND ${CMAKE_COMMAND} -E tar xzf "${CMAKE_SOURCE_DIR}/${YDK_YANG_ARCHIVE}.tar.gz"
  #COMMAND ${CMAKE_COMMAND} -E touch ${libydk_YANG_FILES}
  WORKING_DIRECTORY ${libydk_yang_dir}
  DEPENDS ${CMAKE_SOURCE_DIR}/${YDK_YANG_ARCHIVE}.tar.gz
  COMMENT "Unpacking ${YDK_YANG_ARCHIVE}.tar.gz"
  VERBATIM
)

add_custom_target(libydk_yang_untar ALL DEPENDS ${libydk_YANG_FILES})

find_package(LibYDK REQUIRED)

include_directories(
    ${LIBYDK_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}/ydk/models/ietf
)

configure_file("${CMAKE_SOURCE_DIR}/bundle_info.hpp.in" "${CMAKE_SOURCE_DIR}/ydk/models/ietf/bundle_info.hpp" ESCAPE_QUOTES @ONLY)
configure_file("${CMAKE_SOURCE_DIR}/tests/catch.hpp" "${CMAKE_SOURCE_DIR}/ydk/models/ietf/test/catch.hpp" COPYONLY)

add_library(ydk_ietf STATIC ${libydk_ietf_src})

target_link_libraries(ydk_ietf
    ${LIBYDK_LIBRARIES}
)

set_property(TARGET ydk_ietf PROPERTY CXX_STANDARD 11)
set_property(TARGET ydk_ietf PROPERTY CXX_STANDARD_REQUIRED ON)

install(TARGETS ydk_ietf DESTINATION ${LIB_INSTALL_DIR})
install(FILES ${libydk_ietf_headers} DESTINATION ${INCLUDE_INSTALL_DIR})
install(FILES ${libydk_YANG_FILES} DESTINATION ${YANG_INSTALL_DIR})


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


