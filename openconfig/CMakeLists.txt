cmake_minimum_required(VERSION 2.8.9)
cmake_policy(SET CMP0048 NEW)
project(ydk_openconfig VERSION 0.5.2)



set(YDK_OPENCONFIG_DESCRIPTION "openconfig ydk bundle")

# set version
set(YDK_OPENCONFIG_MAJOR_VERSION 0)
set(YDK_OPENCONFIG_MINOR_VERSION 5)
set(YDK_OPENCONFIG_SERVICE_VERSION 2)
set(YDK_OPENCONFIG_VERSION ${YDK_OPENCONFIG_MAJOR_VERSION}.${YDK_OPENCONFIG_MINOR_VERSION}.${YDK_OPENCONFIG_SERVICE_VERSION})
set(YDK_OPENCONFIG_CORE_SOVERSION ${YDK_OPENCONFIG_MAJOR_VERSION}.${YDK_OPENCONFIG_MINOR_VERSION})

# include custom Modules
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules/")

if(NOT LIB_INSTALL_DIR)
	set(LIB_INSTALL_DIR lib)
endif()

if(NOT INCLUDE_INSTALL_DIR)
	set(INCLUDE_INSTALL_DIR include/ydk_openconfig)
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


set(libydk_openconfig_src ydk/models/generated_entity_lookup.cpp ydk/models/openconfig_bgp_policy.cpp ydk/models/openconfig_bgp_types.cpp ydk/models/openconfig_bgp.cpp ydk/models/openconfig_policy_types.cpp ydk/models/openconfig_routing_policy.cpp ydk/models/openconfig_vlan.cpp ydk/models/openconfig_if_aggregate.cpp ydk/models/openconfig_if_ethernet.cpp ydk/models/openconfig_if_ip.cpp ydk/models/openconfig_interfaces.cpp ydk/models/openconfig_mpls_types.cpp ydk/models/openconfig_mpls.cpp ydk/models/openconfig_telemetry.cpp ydk/models/openconfig_platform_types.cpp ydk/models/openconfig_platform.cpp ydk/models/openconfig_transport_types.cpp ydk/models/openconfig_types.cpp)
set(libydk_openconfig_headers ydk/models/openconfig_bgp_policy.hpp ydk/models/openconfig_bgp_types.hpp ydk/models/openconfig_bgp.hpp ydk/models/openconfig_policy_types.hpp ydk/models/openconfig_routing_policy.hpp ydk/models/openconfig_vlan.hpp ydk/models/openconfig_if_aggregate.hpp ydk/models/openconfig_if_ethernet.hpp ydk/models/openconfig_if_ip.hpp ydk/models/openconfig_interfaces.hpp ydk/models/openconfig_mpls_types.hpp ydk/models/openconfig_mpls.hpp ydk/models/openconfig_telemetry.hpp ydk/models/openconfig_platform_types.hpp ydk/models/openconfig_platform.hpp ydk/models/openconfig_transport_types.hpp ydk/models/openconfig_types.hpp)

find_package(LibYDK REQUIRED)

include_directories(
	${Boost_INCLUDE_DIRS}
    ${LIBYDK_INCLUDE_DIRS}
)

add_library(ydk_openconfig STATIC ${libydk_openconfig_src})

target_link_libraries(ydk_openconfig
    ${LIBYDK_LIBRARIES}
)

set_property(TARGET ydk_openconfig PROPERTY CXX_STANDARD 14)
set_property(TARGET ydk_openconfig PROPERTY CXX_STANDARD_REQUIRED ON)

# find YDK library

install(TARGETS ydk_openconfig DESTINATION ${LIB_INSTALL_DIR})
install(FILES ${libydk_openconfig_headers} DESTINATION ${INCLUDE_INSTALL_DIR})


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


