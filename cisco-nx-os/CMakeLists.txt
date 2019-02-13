cmake_minimum_required(VERSION 3.0.0)
cmake_policy(SET CMP0048 NEW)
project(ydk_cisco_nx_os VERSION 9.2.2 LANGUAGES C CXX)

# CPack Dynamic Settings
set (CPACK_PACKAGE_NAME "libydk-cisco-nx-os")
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
        set (CPACK_RPM_PACKAGE_REQUIRES "python-pip, python-devel, libxml2-devel, libxslt-devel, libssh-devel, libcurl-devel, libtool, clang, cmake3, pcre-devel")

        # <name>-<version>-<release>.<architecture>.(src).rpm
        # libydk-0.6.0-0.1.alpha.x86_64.rpm  // RPM
        set (CPACK_PACKAGE_FILE_NAME 
            "${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}-${CPACK_PACKAGE_RELEASE}.${CPACK_RPM_PACKAGE_ARCHITECTURE}")
    endif()
endif()

include(CPack)

# include custom Modules
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules/")

set(YDK_YANG_ARCHIVE cisco_nx_os\@9.2.2)

if(NOT LIB_INSTALL_DIR)
    set(LIB_INSTALL_DIR lib)
endif()

if(NOT INCLUDE_INSTALL_DIR)
    set(INCLUDE_INSTALL_DIR include/ydk_cisco_nx_os)
endif()

if(NOT YANG_INSTALL_DIR)
    set(YANG_INSTALL_DIR share/cisco_nx_os\@9.2.2)
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


set(libydk_cisco_nx_os_src ydk/models/cisco_nx_os/generated_entity_lookup.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_0.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_1.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_2.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_3.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_4.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_5.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_6.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_7.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_8.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_9.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_10.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_11.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_12.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_13.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_14.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_15.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_16.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_17.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_18.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_19.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_20.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_21.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_22.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_23.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_24.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_25.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_26.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_27.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_28.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_29.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_30.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_31.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_32.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_33.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_34.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_35.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_36.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_37.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_38.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_39.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_40.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_41.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_42.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_43.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_44.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_45.cpp ydk/models/cisco_nx_os/fragmented/Cisco_NX_OS_device_46.cpp)

set(libydk_cisco_nx_os_headers ydk/models/cisco_nx_os/bundle_info.hpp ydk/models/cisco_nx_os/Cisco_NX_OS_device.hpp)

set(libydk_cisco_nx_os_yang ietf-key-chain.yang ietf-yang-smiv2.yang ietf-ip.yang ietf-syslog-types.yang ietf-inet-types.yang ietf-routing.yang ietf-restconf-monitoring.yang ietf-ospf.yang ietf-netconf-acm.yang ietf-interfaces-ext.yang ietf-diffserv-policy.yang iana-crypt-hash.yang ietf-yang-types.yang ietf-diffserv-target.yang iana-if-type.yang ietf-interfaces.yang ietf-netconf-monitoring.yang policy-types.yang ietf-ipv6-unicast-routing.yang ietf-netconf-with-defaults.yang ietf-yang-library.yang ietf-netconf.yang ietf-diffserv-classifier.yang ietf-diffserv-action.yang ietf-netconf-notifications.yang ietf-ipv4-unicast-routing.yang ietf-yang-push.yang ietf-event-notifications.yang ydk@2016-02-26.yang Cisco-NX-OS-device.yang)

set (libydk_yang_dir ${CMAKE_CURRENT_BINARY_DIR}/cisco_nx_os\@9.2.2)

list(APPEND libydk_YANG_FILES "")
foreach(yang_file IN LISTS libydk_cisco_nx_os_yang)
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
    ${CMAKE_SOURCE_DIR}/ydk/models/cisco_nx_os
)

configure_file("${CMAKE_SOURCE_DIR}/bundle_info.hpp.in" "${CMAKE_SOURCE_DIR}/ydk/models/cisco_nx_os/bundle_info.hpp" ESCAPE_QUOTES @ONLY)
configure_file("${CMAKE_SOURCE_DIR}/tests/catch.hpp" "${CMAKE_SOURCE_DIR}/ydk/models/cisco_nx_os/test/catch.hpp" COPYONLY)

add_library(ydk_cisco_nx_os STATIC ${libydk_cisco_nx_os_src})

target_link_libraries(ydk_cisco_nx_os
    ${LIBYDK_LIBRARIES}
)

set_property(TARGET ydk_cisco_nx_os PROPERTY CXX_STANDARD 11)
set_property(TARGET ydk_cisco_nx_os PROPERTY CXX_STANDARD_REQUIRED ON)

install(TARGETS ydk_cisco_nx_os DESTINATION ${LIB_INSTALL_DIR})
install(FILES ${libydk_cisco_nx_os_headers} DESTINATION ${INCLUDE_INSTALL_DIR})
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


