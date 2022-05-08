cmake_minimum_required(VERSION 3.19)

set(SOURCES
        testing.cpp
        ../sources/ReadInput.cpp
        ../sources/ComplexObject.cpp
        ../sources/DoubleObject.cpp
        ../sources/IntObject.cpp
        ../sources/StringObject.cpp
        )

add_executable(testing ${SOURCES})

target_link_libraries(testing PUBLIC
        gtest_main
        lab_09
        )

add_test(
        NAME testing
        COMMAND testing
)
