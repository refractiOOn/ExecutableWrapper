cmake_minimum_required(VERSION 3.0.0)
project(ExecutableWrapper VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED On)

include(CTest)
enable_testing()

add_executable(${PROJECT_NAME}
    main.cpp
    Executable.hpp
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
