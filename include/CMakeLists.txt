cmake_minimum_required(VERSION 3.0.0)

set(INC_NAME include)

project(${INC_NAME} VERSION 0.0.1)

add_library(${INC_NAME} SHARED Banana/Application.cpp)


install(TARGETS ${INC_NAME} DESTINATION bin)
install(FILES Test.h DESTINATION inc)
find_package(glm REQUIRED)
find_package(GLEW REQUIRED)
target_link_libraries(${INC_NAME} PUBLIC glm::glm)
target_link_libraries(${INC_NAME} PUBLIC GLEW::GLEW)