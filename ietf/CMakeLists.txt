cmake_minimum_required(VERSION 2.8.9)
cmake_policy(SET CMP0048 NEW)
project(ydk_ietf VERSION 0.1.4 LANGUAGES C CXX)

# CPack Dynamic Settings
set (CPACK_PACKAGE_NAME "libydk-ietf")
set (CPACK_PACKAGE_VERSION "${PROJECT_VERSION}")
set (CPACK_PACKAGE_RELEASE "1")
set (CPACK_PACKAGE_DESCRIPTION_SUMMARY "YDK Bundle Library")
# set (CPACK_PACKAGE_DESCRIPTION_SUMMARY ${YDK_DESCRIPTION})

# CPack Static Settings
set (CPACK_PACKAGE_DESCRIPTION "An SDK that provides API's that are modeled in YANG.
The main goal of YDK is to reduce the learning curve of YANG data
models by expressing the model semantics in an API and abstracting
protocol/encoding details. YDK is composed of a core package that
defines services and providers, plus one or more module bundles that
are based on YANG models. Each module bundle is generated using a
bundle profile and the ydk-gen tool.")

set (CPACK_PACKAGE_CONTACT "ydk-admin@cisco.com")
set (CPACK_PACKAGE_VENDOR "Cisco")
set (CPACK_PACKAGE_INSTALL_DIRECTORY "/usr/local")

# MAC OS -- not working
if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    message("CMake System: MacOS")
    # set(CPACK_GENERATOR "productbuild")
    # set(CPACK_COMMAND_PKGBUILD "/usr/bin/pkgbuild")

elseif (${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    find_program(LSB_RELEASE lsb_release)
    execute_process(COMMAND ${LSB_RELEASE} -is
        OUTPUT_VARIABLE LSB_RELEASE_ID_SHORT
        OUTPUT_STRIP_TRAILING_WHITESPACE
    )

    set (CMAKE_BUILD_TYPE "Release")

    # Linux Debian
    if (${LSB_RELEASE_ID_SHORT} MATCHES "Ubuntu")
        message("CMake System: Ubuntu")
        set (CPACK_GENERATOR "DEB")

        set (CPACK_DEBIAN_PACKAGE_NAME ${CPACK_PACKAGE_NAME})
        set (CPACK_DEBIAN_PACKAGE_VERSION ${CPACK_PACKAGE_VERSION})
        set (CPACK_DEBIAN_PACKAGE_ARCHITECTURE "amd64")
        set (CPACK_DEBIAN_PACKAGE_DEPENDS 
            "libcurl4-openssl-dev, 
            libpcre3-dev, 
            libssh-dev, 
            libxml2-dev, 
            libxslt1-dev, 
            libtool-bin, 
            cmake (>=3), 
            git, 
            pkg-config")
        set (CPACK_DEBIAN_PACKAGE_MAINTAINER ${CPACK_PACKAGE_CONTACT})
        set (CPACK_DEBIAN_PACKAGE_DESCRIPTION ${CPACK_PACKAGE_DESCRIPTION_SUMMARY})
        set (CPACK_DEBIAN_PACKAGE_SECTION "devel")
        set (CPACK_DEBIAN_PACKAGE_PRIORITY "optional")
        set (CPACK_DEBIAN_PACKAGE_HOMEPAGE "https://github.com/CiscoDevNet/ydk-cpp")

        # <foo>_<VersionNumber>-<DebianRevisionNumber>_<DebianArchitecture>.deb
        # libydk_0.6.0-0.1.alpha_amd64.deb   // Debian
        set (CPACK_PACKAGE_FILE_NAME 
            "${CPACK_PACKAGE_NAME}_${CPACK_PACKAGE_VERSION}-${CPACK_PACKAGE_RELEASE}_${CPACK_DEBIAN_PACKAGE_ARCHITECTURE}")

    # Linux Fedora
    elseif(${LSB_RELEASE_ID_SHORT} MATCHES "CentOS")
        message("CMake System: CentOS")

        set (CPACK_GENERATOR "RPM")

        set (CPACK_RPM_PACKAGE_NAME ${CPACK_PACKAGE_NAME})
        set (CPACK_RPM_PACKAGE_VERSION ${CPACK_PACKAGE_VERSION})
        set (CPACK_RPM_PACKAGE_RELEASE ${CPACK_PACKAGE_RELEASE})
        set (CPACK_RPM_PACKAGE_ARCHITECTURE "x86_64")
        set (CPACK_RPM_PACKAGE_SUMMARY ${CPACK_PACKAGE_DESCRIPTION_SUMMARY})
        set (CPACK_RPM_PACKAGE_DESCRIPTION ${CPACK_PACKAGE_DESCRIPTION})

        set (CPACK_RPM_PACKAGE_LICENSE "Apache 2.0")
        set (CPACK_RPM_PACKAGE_GROUP "Development/Libraries")
        set (CPACK_RPM_PACKAGE_VENDOR ${CPACK_PACKAGE_VENDOR})
        set (CPACK_RPM_PACKAGE_URL "https://github.com/CiscoDevNet/ydk-cpp")
        set (CPACK_RPM_PACKAGE_REQUIRES "epel-release, python-pip, python-devel, libxml2-devel, libxslt-devel, libssh-devel, libcurl-devel, libtool, clang, cmake3, pcre-devel")

        # <name>-<version>-<release>.<architecture>.(src).rpm
        # libydk-0.6.0-0.1.alpha.x86_64.rpm  // RPM
        set (CPACK_PACKAGE_FILE_NAME 
            "${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}-${CPACK_PACKAGE_RELEASE}.${CPACK_RPM_PACKAGE_ARCHITECTURE}")
    endif()
endif()

include(CPack)

# include custom Modules
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules/")

set(YDK_YANG_ARCHIVE ietf\@0.1.4)

if(NOT LIB_INSTALL_DIR)
    set(LIB_INSTALL_DIR lib)
endif()

if(NOT INCLUDE_INSTALL_DIR)
    set(INCLUDE_INSTALL_DIR include/ydk_ietf)
endif()

if(NOT YANG_INSTALL_DIR)
    set(YANG_INSTALL_DIR share/ietf\@0.1.4)
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


set(libydk_ietf_src ydk/models/ietf/generated_entity_lookup.cpp ydk/models/ietf/iana_if_type.cpp ydk/models/ietf/ietf_diffserv_action.cpp ydk/models/ietf/ietf_diffserv_classifier.cpp ydk/models/ietf/ietf_diffserv_policy.cpp ydk/models/ietf/ietf_diffserv_target.cpp ydk/models/ietf/ietf_event_notifications.cpp ydk/models/ietf/ietf_inet_types.cpp ydk/models/ietf/ietf_interfaces.cpp ydk/models/ietf/ietf_ip.cpp ydk/models/ietf/ietf_ipv4_unicast_routing.cpp ydk/models/ietf/ietf_ipv6_unicast_routing.cpp ydk/models/ietf/ietf_key_chain.cpp ydk/models/ietf/ietf_netconf.cpp ydk/models/ietf/ietf_netconf_monitoring.cpp ydk/models/ietf/ietf_netconf_with_defaults.cpp ydk/models/ietf/ietf_ospf.cpp ydk/models/ietf/ietf_restconf_monitoring.cpp ydk/models/ietf/ietf_routing.cpp ydk/models/ietf/ietf_syslog_types.cpp ydk/models/ietf/ietf_yang_library.cpp ydk/models/ietf/ietf_yang_push.cpp ydk/models/ietf/ietf_yang_smiv2.cpp ydk/models/ietf/policy_types.cpp)

set(libydk_ietf_headers ydk/models/ietf/bundle_info.hpp ydk/models/ietf/iana_if_type.hpp ydk/models/ietf/ietf_diffserv_action.hpp ydk/models/ietf/ietf_diffserv_classifier.hpp ydk/models/ietf/ietf_diffserv_policy.hpp ydk/models/ietf/ietf_diffserv_target.hpp ydk/models/ietf/ietf_event_notifications.hpp ydk/models/ietf/ietf_inet_types.hpp ydk/models/ietf/ietf_interfaces.hpp ydk/models/ietf/ietf_ip.hpp ydk/models/ietf/ietf_ipv4_unicast_routing.hpp ydk/models/ietf/ietf_ipv6_unicast_routing.hpp ydk/models/ietf/ietf_key_chain.hpp ydk/models/ietf/ietf_netconf.hpp ydk/models/ietf/ietf_netconf_monitoring.hpp ydk/models/ietf/ietf_netconf_with_defaults.hpp ydk/models/ietf/ietf_ospf.hpp ydk/models/ietf/ietf_restconf_monitoring.hpp ydk/models/ietf/ietf_routing.hpp ydk/models/ietf/ietf_syslog_types.hpp ydk/models/ietf/ietf_yang_library.hpp ydk/models/ietf/ietf_yang_push.hpp ydk/models/ietf/ietf_yang_smiv2.hpp ydk/models/ietf/policy_types.hpp)

set(libydk_ietf_yang iana-crypt-hash.yang iana-if-type.yang ietf-diffserv-action.yang ietf-diffserv-classifier.yang ietf-diffserv-policy.yang ietf-diffserv-target.yang ietf-event-notifications.yang ietf-inet-types.yang ietf-interfaces-ext.yang ietf-interfaces.yang ietf-ip.yang ietf-ipv4-unicast-routing.yang ietf-ipv6-unicast-routing.yang ietf-key-chain.yang ietf-netconf-monitoring.yang ietf-netconf-notifications.yang ietf-netconf-with-defaults.yang ietf-netconf.yang ietf-ospf.yang ietf-restconf-monitoring.yang ietf-routing.yang ietf-syslog-types.yang ietf-yang-library.yang ietf-yang-push.yang ietf-yang-smiv2.yang ietf-yang-types.yang policy-types.yang ydk@2016-02-26.yang)

set (libydk_yang_dir ${CMAKE_CURRENT_BINARY_DIR}/ietf\@0.1.4)

list(APPEND libydk_YANG_FILES "")
foreach(yang_file IN LISTS libydk_ietf_yang)
    list(APPEND libydk_YANG_FILES ${libydk_yang_dir}/${yang_file})
endforeach(yang_file)

file(MAKE_DIRECTORY ${libydk_yang_dir})

add_custom_command(OUTPUT ${libydk_YANG_FILES}  
  COMMAND ${CMAKE_COMMAND} -E tar xzf "${CMAKE_SOURCE_DIR}/${YDK_YANG_ARCHIVE}.tar.gz"
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


