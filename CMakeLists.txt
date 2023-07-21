cmake_minimum_required(VERSION 3.0.0)

set(PROJ_NAME GameEngine)

project(${PROJ_NAME} VERSION 0.0.1)

include_directories(${${PROJ_NAME}_SOURCE_DIR}/include)
add_subdirectory(include)

add_executable(${PROJ_NAME} src/SandBoxApp.cpp)

target_link_libraries(${PROJ_NAME} PRIVATE include)


include(CPack)