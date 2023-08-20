cmake_minimum_required(VERSION 3.0.0)

set(INC_NAME include)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/Debug)
file(GLOB SOURCES "Banana/*.cpp")

project(${INC_NAME} VERSION 0.0.1)

find_package(spdlog REQUIRED)
find_package(glm REQUIRED)
find_package(GLEW REQUIRED)

add_library(${INC_NAME} SHARED ${SOURCES})

target_link_libraries(${INC_NAME} PUBLIC spdlog::spdlog)
target_link_libraries(${INC_NAME} PUBLIC glm::glm)
target_link_libraries(${INC_NAME} PUBLIC GLEW::GLEW)

