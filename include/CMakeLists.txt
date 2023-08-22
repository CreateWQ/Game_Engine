cmake_minimum_required(VERSION 3.0.0)

set(INC_NAME Banana)
set(INC_DIR ${${INC_NAME}_SOURCE_DIR})
set(BANANA_DIR ${INC_DIR}/Banana)
set(EVENTS_DIR ${BANANA_DIR}/Events)
set(PLATFORM_DIR ${INC_DIR}/Platform)

# add_definitions("-DBN_PLATFORM_WINDOWS")
# add_definitions("-DBN_BUILD_DLL")

include_directories(${${INC_NAME}_SOURCE_DIR})
include_directories(${BANANA_DIR})

file(GLOB SOURCES 
    "${BANANA_DIR}/*.cpp" 
    "${EVENTS_DIR}/*.cpp" 
    "/*.cpp" 
    "${PLATFORM_DIR}/Windows/*.cpp"
)

project(${INC_NAME} VERSION 0.0.1)

find_package(spdlog REQUIRED)
find_package(glm REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glad CONFIG REQUIRED)


add_library(${INC_NAME} SHARED ${SOURCES})

add_library(PCH bnpch.cpp)

target_precompile_headers(PCH PRIVATE bnpch.h)
target_link_libraries(${INC_NAME} PUBLIC PCH)
target_precompile_headers(${INC_NAME} REUSE_FROM PCH)
get_target_property(var ${INC_NAME} PRECOMPILE_HEADERS_REUSE_FROM)
message("var: ${var}")

target_link_libraries(${INC_NAME} PUBLIC spdlog::spdlog)
target_link_libraries(${INC_NAME} PUBLIC glm::glm)
target_link_libraries(${INC_NAME} PUBLIC GLEW::GLEW)
target_link_libraries(${INC_NAME} PUBLIC glfw)
target_link_libraries(${INC_NAME} PUBLIC glad::glad)