cmake_minimum_required (VERSION 3.16.3)
project (hamutils)
set(CMAKE_CXX_STANDARD 17)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_C_FLAGS "")
set(CMAKE_C_FLAGS_DEBUG "")
set(CMAKE_C_FLAGS_RELEASE "")
set(CMAKE_CXX_FLAGS "")
set(CMAKE_CXX_FLAGS_DEBUG "")
set(CMAKE_CXX_FLAGS_RELEASE "")

set(SOURCES
  src/main.cpp
)

add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})

find_package(fmt REQUIRED)
target_link_libraries(${CMAKE_PROJECT_NAME}
			PRIVATE
			fmt::fmt
)