cmake_minimum_required(VERSION 3.2.1)
project (cards)

# Add project cmake modules to path.
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 14)
set(NAME_SRC app/main.cpp app/Cards.cpp)
set(NAME_HEADERS include/Cards.hpp)

# Add project directories

include(CMakeToolsHelpers OPTIONAL)
include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(app)

add_executable(cards ${NAME_SRC} ${NAME_HEADERS})
