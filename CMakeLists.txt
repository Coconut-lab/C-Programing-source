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
        CH06/6-13-1.c
        CH07/7-1.c
        CH07/7-2.c
        과제/1-5-1.c
        과제/1-5-2.c
        과제/1-5-3.c
        과제/1-5-4.c
        과제/1-5-5.c
        과제/1-5-6.c
        과제/1-5-7.c
        과제/1-5-8.c
        과제/1-5-9.c
        과제/1-5-10.c
        과제/1-6-1.c
        과제/1-6-2.c
        과제/1-6-3.c
        과제/1-6-4.c
        과제/1-6-5.c
        과제/1-6-6.c
        과제/1-6-7.c
        과제/1-6-8.c
        과제/1-6-9.c
        과제/1-6-10.c
        과제/1-6-11.c
        과제/1-6-12.c
        exam/4-1.c
        exam/06.c
        exam/07.c
        exam/08.c
        exam/09.c
        CH07/7-3.c
        CH07/7-3-1.c
        CH07/7-4.c
        CH07/7-4-1.c
        CH07/7-5.c
        CH07/7-6.c
        CH07/7-11.c
        CH07/7-12.c
        CH07/7-10.c
        CH08/8-1.c
        CH08/8-2.c
        CH08/8-3.c
        CH08/8-4.c
        CH08/8-5.c
        CH08/8-6.c
        CH08/8-9.c
        CH08/8-8.c
        CH08/8-10.c
        CH08/8-11.c
        Ready_to_exam/mine03.c
        Ready_to_exam/DiffiHellman.c
        과제/7/1-7-1.c
        과제/7/1-7-2.c
        과제/7/1-7-3.c
        과제/7/1-7-4.c
        과제/7/1-7-5.c
        과제/7/1-7-6.c
        과제/7/1-7-7.c
        과제/7/1-7-8.c
        과제/7/1-7-9.c
        과제/7/1-7-10.c
        과제/7/1-7-11.c
        과제/7/1-7-12.c
        과제/8/1-8-1.c
        과제/8/1-8-2.c
        과제/8/1-8-3.c
        과제/8/1-8-4.c
        과제/8/1-8-5.c
        과제/8/1-8-6.c
        exam/2-1.c
        과제/8/1-8-7.c
        과제/8/1-8-7-1.c
        과제/8/1-8-8.c
        과제/8/1-8-9.c
        과제/8/1-8-10.c
        과제/9/1-9-1.c
        과제/9/1-9-2.c
        과제/9/1-9-3.c
        과제/9/1-9-4.c
        과제/9/1-9-5.c
        과제/9/1-9-6.c
        CH09/9-1.c
        CH09/9-1.h
        CH09/9-2.c
        과제/9/1-9-7.c
        과제/9/1-9-8.c
        과제/9/1-9-9.c
        과제/9/cal.c
        과제/9/CHJ.h
        과제/9/function.c
        과제/9/1-9-11.c
        과제/9/menu.c
        과제/9/menufunc.c
        과제/9/CHJ2.h
        CH09/9-8.c
        CH09/9-9.c
        CH09/9-10.c
        CH09/9-11.c
        CH09/9-12.c
        CH09/9-13.c
        CH09/9-14.c
)

add_executable(4-1 exam/4-1.c)
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
add_executable(6-13-1 CH06/6-13-1.c)
add_executable(7-1 CH07/7-1.c)
add_executable(7-2 CH07/7-2.c)
add_executable(1-5-1 과제/1-5-1.c)
add_executable(1-5-2 과제/1-5-2.c)
add_executable(1-5-3 과제/1-5-3.c)
add_executable(1-5-4 과제/1-5-4.c)
add_executable(1-5-5 과제/1-5-5.c)
add_executable(1-5-6 과제/1-5-6.c)
add_executable(1-5-7 과제/1-5-7.c)
add_executable(1-5-8 과제/1-5-8.c)
add_executable(1-5-9 과제/1-5-9.c)
add_executable(1-5-10 과제/1-5-10.c)
add_executable(1-6-1 과제/1-6-1.c)
add_executable(1-6-2 과제/1-6-2.c)
add_executable(1-6-3 과제/1-6-3.c)
add_executable(1-6-4 과제/1-6-4.c)
add_executable(1-6-5 과제/1-6-5.c)
add_executable(1-6-6 과제/1-6-6.c)
add_executable(1-6-7 과제/1-6-7.c)
add_executable(1-6-8 과제/1-6-8.c)
add_executable(1-6-9 과제/1-6-9.c)
add_executable(1-6-10 과제/1-6-10.c)
add_executable(1-6-11 과제/1-6-11.c)
add_executable(1-6-12 과제/1-6-12.c)
add_executable(05 exam/05.c)

add_executable(06 exam/06.c)
add_executable(07 exam/07.c)
add_executable(08 exam/08.c)
add_executable(09 exam/09.c)
add_executable(7-3 CH07/7-3.c)
add_executable(7-3-1 CH07/7-3-1.c)
add_executable(7-4 CH07/7-4.c)
add_executable(7-4-1 CH07/7-4-1.c)
add_executable(7-5 CH07/7-5.c)
add_executable(7-6 CH07/7-6.c)
add_executable(7-11 CH07/7-11.c)
add_executable(7-10 CH07/7-10.c)
add_executable(8-1 CH08/8-1.c)
add_executable(8-2 CH08/8-2.c)
add_executable(8-3 CH08/8-3.c)
add_executable(8-4 CH08/8-4.c)
add_executable(8-5 CH08/8-5.c)
add_executable(8-6 CH08/8-6.c)
add_executable(8-9 CH08/8-9.c)
add_executable(8-8 CH08/8-8.c)
add_executable(8-10 CH08/8-10.c)
add_executable(8-11 CH08/8-11.c)
add_executable(mine03 Ready_to_exam/mine03.c)
add_executable(DiffiHellman Ready_to_exam/DiffiHellman.c)
add_executable(1-7-1 과제/7/1-7-1.c
)
add_executable(1-7-2 과제/7/1-7-2.c)
add_executable(1-7-3 과제/7/1-7-3.c)
add_executable(1-7-4 과제/7/1-7-4.c)
add_executable(1-7-5 과제/7/1-7-5.c)
add_executable(1-7-6 과제/7/1-7-6.c)
add_executable(1-7-7 과제/7/1-7-7.c)
add_executable(1-7-8 과제/7/1-7-8.c)
add_executable(1-7-9 과제/7/1-7-9.c)
add_executable(1-7-10 과제/7/1-7-10.c)
add_executable(1-7-11 과제/7/1-7-11.c)
add_executable(1-7-12 과제/7/1-7-12.c)
add_executable(1-8-1 과제/8/1-8-1.c)
add_executable(1-8-2 과제/8/1-8-2.c)
add_executable(1-8-3 과제/8/1-8-3.c)
add_executable(1-8-4 과제/8/1-8-4.c)
add_executable(1-8-5 과제/8/1-8-5.c)
add_executable(1-8-6 과제/8/1-8-6.c)
add_executable(2-1 exam/2-1.c)
add_executable(1-8-7 과제/8/1-8-7.c)
add_executable(1-8-7-1 과제/8/1-8-7-1.c)
add_executable(1-8-8 과제/8/1-8-8.c)
add_executable(1-8-9 과제/8/1-8-9.c)
add_executable(1-8-10 과제/8/1-8-10.c)
add_executable(1-9-1 과제/9/1-9-1.c)
add_executable(1-9-2 과제/9/1-9-2.c)
add_executable(1-9-3 과제/9/1-9-3.c)
add_executable(1-9-4 과제/9/1-9-4.c)
add_executable(1-9-5 과제/9/1-9-5.c)
add_executable(9-1 CH09/9-1.c)
add_executable(1-9-6 과제/9/1-9-6.c)
add_executable(9-2 CH09/9-2.c)
add_executable(1-9-7 과제/9/1-9-7.c)
add_executable(1-9-8 과제/9/1-9-8.c)
add_executable(1-9-9 과제/9/1-9-9.c)
add_executable(1-9-11 과제/9/1-9-11.c)
add_executable(menu 과제/9/menu.c)

add_executable(9-2-exam Ready_to_exam/9-2-exam.c)
add_executable(9-8 CH09/9-8.c)
add_executable(9-10 CH09/9-10.c)
add_executable(9-13 CH09/9-13.c)
add_executable(9-12 CH09/9-12.c)
add_executable(9-11 CH09/9-11.c)
add_executable(9-14 CH09/9-14.c)