cmake_minimum_required(VERSION 3.19)
project(lab_09 CXX)

set(CMAKE_CXX_STANDARD 14)


enable_testing()
add_subdirectory(googletest)
add_subdirectory(test)




set(SOURCE_FILES
        #sources/main.cpp
        sources/DoubleObject.cpp
        sources/StringObject.cpp
        sources/IntObject.cpp
        sources/ReadInput.cpp
        sources/ComplexObject.cpp
        )

set(HEADER_FILES
        headers/StringObject.h
        headers/DoubleObject.h
        headers/Object.h
        headers/IntObject.h
        headers/ComplexObject.h
        )

add_library(lab_09 STATIC ${SOURCE_FILES} ${HEADER_FILES})


#add_executable(${PROJECT_NAME} ${SOURCE_FILES} )
#target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
