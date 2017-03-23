cmake_minimum_required(VERSION 2.8.9)
cmake_policy(SET CMP0048 NEW)
project(ydk_openconfig VERSION 0.1.2 LANGUAGES C CXX)

# include custom Modules
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules/")

set(YDK_YANG_ARCHIVE openconfig\@0.1.2)

if(NOT LIB_INSTALL_DIR)
	set(LIB_INSTALL_DIR lib)
endif()

if(NOT INCLUDE_INSTALL_DIR)
	set(INCLUDE_INSTALL_DIR include/ydk_openconfig)
endif()

if(NOT YANG_INSTALL_DIR)
    set(YANG_INSTALL_DIR share/openconfig\@0.1.2)
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


set(libydk_openconfig_src ydk/models/openconfig/generated_entity_lookup.cpp ydk/models/openconfig/openconfig_types.cpp ydk/models/openconfig/openconfig_if_aggregate.cpp ydk/models/openconfig/fragmented/openconfig_bgp_0.cpp ydk/models/openconfig/fragmented/openconfig_bgp_1.cpp ydk/models/openconfig/fragmented/openconfig_bgp_2.cpp ydk/models/openconfig/openconfig_if_ip.cpp ydk/models/openconfig/openconfig_rib_bgp.cpp ydk/models/openconfig/openconfig_rib_bgp_types.cpp ydk/models/openconfig/openconfig_mpls.cpp ydk/models/openconfig/cisco_xr_openconfig_bgp_types.cpp ydk/models/openconfig/openconfig_terminal_device.cpp ydk/models/openconfig/openconfig_routing_policy.cpp ydk/models/openconfig/openconfig_bgp_policy.cpp ydk/models/openconfig/openconfig_bgp_types.cpp ydk/models/openconfig/openconfig_local_routing.cpp ydk/models/openconfig/openconfig_platform_types.cpp ydk/models/openconfig/openconfig_if_ethernet.cpp ydk/models/openconfig/openconfig_telemetry.cpp ydk/models/openconfig/openconfig_transport_types.cpp ydk/models/openconfig/openconfig_mpls_types.cpp ydk/models/openconfig/openconfig_platform.cpp ydk/models/openconfig/openconfig_policy_types.cpp ydk/models/openconfig/openconfig_interfaces.cpp ydk/models/openconfig/openconfig_vlan.cpp)

set(libydk_openconfig_headers ydk/models/openconfig/bundle_info.hpp ydk/models/openconfig/openconfig_types.hpp ydk/models/openconfig/openconfig_if_aggregate.hpp ydk/models/openconfig/openconfig_bgp.hpp ydk/models/openconfig/openconfig_if_ip.hpp ydk/models/openconfig/openconfig_rib_bgp.hpp ydk/models/openconfig/openconfig_rib_bgp_types.hpp ydk/models/openconfig/openconfig_mpls.hpp ydk/models/openconfig/cisco_xr_openconfig_bgp_types.hpp ydk/models/openconfig/openconfig_terminal_device.hpp ydk/models/openconfig/openconfig_routing_policy.hpp ydk/models/openconfig/openconfig_bgp_policy.hpp ydk/models/openconfig/openconfig_bgp_types.hpp ydk/models/openconfig/openconfig_local_routing.hpp ydk/models/openconfig/openconfig_platform_types.hpp ydk/models/openconfig/openconfig_if_ethernet.hpp ydk/models/openconfig/openconfig_telemetry.hpp ydk/models/openconfig/openconfig_transport_types.hpp ydk/models/openconfig/openconfig_mpls_types.hpp ydk/models/openconfig/openconfig_platform.hpp ydk/models/openconfig/openconfig_policy_types.hpp ydk/models/openconfig/openconfig_interfaces.hpp ydk/models/openconfig/openconfig_vlan.hpp)

set(libydk_openconfig_yang openconfig-telemetry.yang openconfig-terminal-device.yang openconfig-if-ip.yang openconfig-bgp-multiprotocol.yang openconfig-mpls-rsvp.yang openconfig-routing-policy.yang openconfig-mpls-types.yang openconfig-transport-types.yang openconfig-types.yang openconfig-mpls-static.yang openconfig-bgp.yang openconfig-rib-bgp.yang openconfig-rib-bgp-types.yang cisco-xr-openconfig-bgp-types.yang openconfig-mpls-ldp.yang openconfig-platform-types.yang openconfig-platform-transceiver.yang openconfig-interfaces.yang openconfig-mpls-igp.yang openconfig-extensions.yang openconfig-vlan.yang openconfig-mpls.yang openconfig-mpls-sr.yang ydk@2016-02-26.yang openconfig-platform.yang openconfig-bgp-types.yang openconfig-mpls-te.yang openconfig-policy-types.yang cisco-xr-openconfig-interfaces-types.yang openconfig-bgp-operational.yang openconfig-if-aggregate.yang openconfig-bgp-policy.yang openconfig-local-routing.yang openconfig-if-ethernet.yang)

set (libydk_yang_dir ${CMAKE_CURRENT_BINARY_DIR}/openconfig\@0.1.2)

list(APPEND libydk_YANG_FILES "")
foreach(yang_file IN LISTS libydk_openconfig_yang)
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
    ${CMAKE_SOURCE_DIR}/ydk/models/openconfig
)

configure_file("${CMAKE_SOURCE_DIR}/bundle_info.hpp.in" "${CMAKE_SOURCE_DIR}/ydk/models/openconfig/bundle_info.hpp" ESCAPE_QUOTES @ONLY)
configure_file("${CMAKE_SOURCE_DIR}/tests/catch.hpp" "${CMAKE_SOURCE_DIR}/ydk/models/openconfig/test/catch.hpp" COPYONLY)

add_library(ydk_openconfig STATIC ${libydk_openconfig_src})

target_link_libraries(ydk_openconfig
    ${LIBYDK_LIBRARIES}
)

set_property(TARGET ydk_openconfig PROPERTY CXX_STANDARD 11)
set_property(TARGET ydk_openconfig PROPERTY CXX_STANDARD_REQUIRED ON)

install(TARGETS ydk_openconfig DESTINATION ${LIB_INSTALL_DIR})
install(FILES ${libydk_openconfig_headers} DESTINATION ${INCLUDE_INSTALL_DIR})
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


