cmake_minimum_required(VERSION 3.10)

set(target trafficlight)

file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")


add_executable(${target} ${srcs} ${hdrs})

target_include_directories(${target} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    "C:/Users/Sergey/Documents/GitHub/mp2-lab1-set/include"
)


target_link_libraries(${target} PUBLIC set)

set_target_properties(${target} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)

