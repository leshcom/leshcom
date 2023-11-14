cmake_minimum_required(VERSION 3.0)
project(Coursework)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES 
    Database.cpp 
    Employee.cpp 
    UserInterface.cpp 
    Position.cpp
)

add_library(Lib STATIC ${SOURCE_FILES})

add_executable(test.bin UserInterface.cpp)

target_link_libraries(test.bin Lib)
