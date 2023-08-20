cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS off)
set(PROJ_NAME GameEngine)
file(GLOB src_SOURCES "src/*.cpp")
project(${PROJ_NAME} VERSION 0.0.1)

message("${PROJECT_BINARY_DIR}")

include_directories(${${PROJ_NAME}_SOURCE_DIR}/include)

add_subdirectory(include)

add_executable(${PROJ_NAME} ${src_SOURCES})

target_link_libraries(${PROJ_NAME} PRIVATE include)


include(CPack)