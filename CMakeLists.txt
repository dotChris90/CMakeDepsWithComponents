cmake_minimum_required(VERSION 3.15)
project(cde CXX)

add_library(cde src/cde.cpp)
add_library(fgh src/cde.cpp)

set_target_properties(cde PROPERTIES PUBLIC_HEADER "src/cde.h")
set_target_properties(fgh PROPERTIES PUBLIC_HEADER "src/cde.h")

install(TARGETS cde 
                fgh
        DESTINATION "."
        PUBLIC_HEADER DESTINATION include
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
