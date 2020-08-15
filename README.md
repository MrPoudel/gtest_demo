# gtest_demo

[![Build Status](https://travis-ci.org/MrPoudel/gtest_demo.svg?branch=master)](https://travis-ci.org/MrPoudel/gtest_demo)
<!--![Discourse topics](https://img.shields.io/discourse/https/meta.discourse.org/topics.svg)-->

Integration of the google test framework(gtest) with existing project using cmake build system

## Method 1
To run the google test successfully, install the google test on you system.
For example on ubuntu machine it can be done as follows:

`$sudo apt-get install libgtest-dev`

However, this won't install the needed libraries. It only copies the source files that needs to be build. So navigae to /usr/src/gtest:

`$cd /usr/src/gtest`

Create and build directory and compile the source:

`$mkdir build && cd build && cmake ..`

Then run the make file:

`$sudo make`

Finally, copy the recently built static libraries to the /usr/lib so that the application finds it easily:

`sudo cp *.a /usr/lib`

## Makefile integration
Then provide the include and link path as follows in your `Makefile`:


`GTEST_INCLUDES=-I/usr/include/gtest`


`GTEST_LIBS=-pthread -lgtest`


`LIBRARY_INCLUDES=-L/usr/lib`



Then link the libraries:


`$ g++ $(GTEST_INCLUDES) $(LIBRARY_INCLUDES) test.cpp $(GTEST_LIBS) -o tester


## CMake integration
See the CMakeLists.txt in project's root.

## Method 2

In this method, you don't need to install the gtest library on your system. You can include the gtest into your project using git submodule. 
`TODO:`
More flexible integration of gtest into existing system.


# Results of Test

```bash
$ ./friends_lib_test 
Execution of tests started using gtest framework.
[==========] Running 4 tests from 2 test cases.
[----------] Global test environment set-up.
[----------] 2 tests from AddCentsTest
[ RUN      ] AddCentsTest.CoversPositiveResults
[       OK ] AddCentsTest.CoversPositiveResults (0 ms)
[ RUN      ] AddCentsTest.CoversNegativeResults
[       OK ] AddCentsTest.CoversNegativeResults (0 ms)
[----------] 2 tests from AddCentsTest (0 ms total)

[----------] 2 tests from SubtractionCentsTest
[ RUN      ] SubtractionCentsTest.CoversPositiveResults
[       OK ] SubtractionCentsTest.CoversPositiveResults (0 ms)
[ RUN      ] SubtractionCentsTest.CoversNegativeResults
[       OK ] SubtractionCentsTest.CoversNegativeResults (0 ms)
[----------] 2 tests from SubtractionCentsTest (0 ms total)

[----------] Global test environment tear-down
[==========] 4 tests from 2 test cases ran. (1 ms total)
[  PASSED  ] 4 tests.

```
