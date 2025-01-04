# LeetCode TestBed

This repository aims to create a LeetCode Testbed to simplify the implementation of leetcode challenges using C++ language and test the solution based on GTests performed on test cases.

## Dependencies

- GTest
- CMake 3.14

# Repository Structure

```
.
├── src/
│   ├── "Here go solutions classes implementations"
│   └── SolutionBase.cc
├── include/
│   ├── "Here go solutions classes headers"
│   └── SolutionBase.h
└── tests/
    ├── "Here go tests in different folders (each with their own CMakeLists.txt)"
    ├── ChallengeExample1/
    │   ├── CMakeLists.txt
    │   └── test_challenge_example1.cc
    └── ChallengeExample2/
        └── ...
```

# Building the Repository

On the root directory of the repository, run the following command:

``` bash
cmake -B build .
```

Wheter it should be compiled in `Release` or `Debug` is up to the user of this repository. [More information...](https://blog.feabhas.com/2021/07/cmake-part-2-release-and-debug-builds/)

# Testing

The tests can be executed either using the `ctest` command or running the generated executable to run individually each test file implementation.
The commands should be run in the `build` repository (or whichever name chosen in the build step).