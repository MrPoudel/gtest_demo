cmake_minimum_required(VERSION 2.6)

set (CMAKE_CXX_STANDARD 11)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link main with what we want to test and the GTest and pthread library
add_executable(main main.cpp)

# Create your library to link against your test/app
add_library(friends_lib SHARED ${CMAKE_CURRENT_SOURCE_DIR}/lib/friends_lib.cpp)
target_include_directories(friends_lib
	PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}/include"
)

target_link_libraries(main friends_lib ${GTEST_LIBRARIES} pthread)

# Link friends_lib_test with what we want to test and the GTest and pthread library
add_executable(friends_lib_test ${CMAKE_CURRENT_SOURCE_DIR}/test/friends_lib_test.cpp)
target_link_libraries(friends_lib_test friends_lib ${GTEST_LIBRARIES} pthread)

# Exception example
add_executable(exception_demo exception_demo.cpp)
