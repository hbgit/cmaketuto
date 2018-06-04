Based on https://cmake.org/cmake-tutorial/

#Usage

$ cmake -H. -Bbuild
$ cmake --build build -- -j3

The first command will creates CMake configuration files inside folder build and the second one will generate the output program hello in bin folder. You should test your output:

$ ./bin/Version
1
./bin/Version



