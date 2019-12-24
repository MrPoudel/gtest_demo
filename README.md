# gtest_demo
Integration of the google test framework(gtest) with existing project using cmake build system

## Method 1
To run the google test successfully, install the google test on you system.
For example on ubuntu machine it can be done as follows:

`$sudo apt-get install libgtest-dev`

After that navigae to /usr/src/gtest:

`$cd /usr/src/gtest`

Create and build directory and compile the source:

`$mkdir build && cd build && cmake ..`

Then run the make file:

`$sudo make`

Finally, copy the recently built static libraries to the /usr/lib so that the application finds it easily:
`sudo cp *.a /usr/lib`

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
