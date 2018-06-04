Quick example how to use cmake based on https://tuannguyen68.gitbooks.io/learning-cmake-a-beginner-s-guide/content/chap1/chap1.html

#Usage

$ cmake -H. -Bbuild
$ cmake --build build -- -j3

The first command will creates CMake configuration files inside folder build and the second one will generate the output program hello in bin folder. You should test your output:

$ ./bin/hello
Hello World



