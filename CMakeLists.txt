cmake_minimum_required(VERSION 3.29)
project(C_Study C)

set(CMAKE_C_STANDARD 99)

add_executable(C_Study main.c
        CH04/4-1.c
        CH05/5-1.c
        CH05/5-11.c
        CH05/5-12.c
        test.c
        CH06/6-2.c
        CH06/6-3.c
        CH06/6-1.c
        CH06/6-4.c
        exam/02.c
        exam/03.c
        exam/04.c
        exam/05.c
        CH06/6-13.c
)

add_executable(4-1 CH04/4-1.c)
add_executable(CH04_4-1 CH04/4-1.c)
add_executable(CH05_5-11 CH05/5-11.c)
add_executable(5-11 CH05/5-11.c)
add_executable(CH05_5-12 CH05/5-12.c)
add_executable(5-12 CH05/5-12.c)
add_executable(main main.c)
add_executable(test test.c)
add_executable(6-2 CH06/6-2.c)
add_executable(6-3 CH06/6-3.c)
add_executable(6-1 CH06/6-1.c)
add_executable(6-4 CH06/6-4.c)
add_executable(02 exam/02.c)
add_executable(03 exam/03.c)
add_executable(04 exam/04.c)
add_executable(6-13 CH06/6-13.c)