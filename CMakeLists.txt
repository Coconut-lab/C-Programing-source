cmake_minimum_required(VERSION 3.29)
project(C_Study C)

set(CMAKE_C_STANDARD 99)

add_executable(C_Study main.c
        midterm/CH04/4-1.c
        midterm/CH05/5-1.c
        midterm/CH05/5-11.c
        midterm/CH05/5-12.c
        midterm/CH06/6-2.c
        midterm/CH06/6-3.c
        midterm/CH06/6-1.c
        midterm/CH06/6-4.c
        exam/02.c
        exam/03.c
        exam/04.c
        exam/05.c
        midterm/CH06/6-13.c
        midterm/CH06/6-13-1.c
        midterm/CH07/7-1.c
        midterm/CH07/7-2.c
        과제/5/1-5-1.c
        과제/5/1-5-2.c
        과제/5/1-5-3.c
        과제/5/1-5-4.c
        과제/5/1-5-5.c
        과제/5/1-5-6.c
        과제/5/1-5-7.c
        과제/5/1-5-8.c
        과제/5/1-5-9.c
        과제/5/1-5-10.c
        과제/6/1-6-1.c
        과제/6/1-6-2.c
        과제/6/1-6-3.c
        과제/6/1-6-4.c
        과제/6/1-6-5.c
        과제/6/1-6-6.c
        과제/6/1-6-7.c
        과제/6/1-6-8.c
        과제/6/1-6-9.c
        과제/6/1-6-10.c
        과제/6/1-6-11.c
        과제/6/1-6-12.c
        exam/4-1-exam.c
        exam/06.c
        exam/07.c
        exam/08.c
        exam/09.c
        midterm/CH07/7-3.c
        midterm/CH07/7-3-1.c
        midterm/CH07/7-4.c
        midterm/CH07/7-4-1.c
        midterm/CH07/7-5.c
        midterm/CH07/7-6.c
        midterm/CH07/7-11.c
        midterm/CH07/7-12.c
        midterm/CH07/7-10.c
        midterm/CH08/8-1.c
        midterm/CH08/8-2.c
        midterm/CH08/8-3.c
        midterm/CH08/8-4.c
        midterm/CH08/8-5.c
        midterm/CH08/8-6.c
        midterm/CH08/8-9.c
        midterm/CH08/8-8.c
        midterm/CH08/8-10.c
        midterm/CH08/8-11.c
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
        exam/2-1-exam.c
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
        midterm/CH09/9-1.c
        midterm/CH09/9-2.c
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
        midterm/CH09/9-8.c
        midterm/CH09/9-9.c
        midterm/CH09/9-10.c
        midterm/CH09/9-11.c
        midterm/CH09/9-12.c
        midterm/CH09/9-13.c
        midterm/CH09/9-14.c
        midterm/CH09/9-3.c
        과제/2/1.c
        과제/2/2.c
        과제/2/3.c
        과제/2/4.c
        과제/2/5.c
        과제/2/6.c
        과제/2/7.c
        과제/2/8.c
        과제/2/9.c
        과제/2/10.c
        과제/2/11.c
        과제/2/12.c
        과제/3/1-3-1.c
        과제/3/1-3-2.c
        과제/3/1-3-3.c
        과제/3/1-3-4.c
        Ready_to_exam/store.c
        midterm/CH08/8-12.c
        과제/3/1-3-5.c
        과제/3/1-3-6.c
        과제/3/1-3-7.c
        과제/3/1-3-8.c
        과제/3/1-3-9.c
        과제/3/1-3-10.c
        과제/3/1-3-11.c
        과제/4/1-4-1.c
        과제/4/1-4-2.c
        과제/4/1-4-3.c
        과제/4/1-4-4.c
        과제/4/1-4-5.c
        과제/4/1-4-6.c
        과제/4/1-4-7.c
        과제/4/1-4-8.c
        과제/4/1-4-9.c
        과제/4/1-4-10.c
        Ready_to_exam/DiffiHellman_function.c
        midterm/CH01/1-1.c
        midterm/CH02/2-1.c
        midterm/CH02/2-2.c
        midterm/CH02/2-3.c
        midterm/CH02/2-4.c
        midterm/CH02/2-5.c
        midterm/CH02/2-6.c
        midterm/CH02/2-7.c
        midterm/CH02/2-8.c
        midterm/CH02/2-9.c
        midterm/CH02/2-10.c
        midterm/CH02/2-11.c
        midterm/CH02/2-12.c
        midterm/CH02/2-13.c
        midterm/CH03/3-1.c
        midterm/CH03/3-2.c
        midterm/CH03/3-3.c
        midterm/CH03/3-4.c
        midterm/CH03/3-5.c
        midterm/CH03/3-6.c
        midterm/CH03/3-7.c
        midterm/CH03/3-8.c
        midterm/CH03/3-9.c
        midterm/CH04/4-2.c
        midterm/CH04/4-3.c
        midterm/CH04/4-4.c
        midterm/CH04/4-5.c
        midterm/CH04/4-6.c
        midterm/CH04/4-7.c
        midterm/CH05/5-2.c
        midterm/CH05/5-3.c
        midterm/CH05/5-4.c
        midterm/CH05/5-5.c
        midterm/CH05/5-6.c
        midterm/CH05/5-7.c
        midterm/CH05/5-8.c
        midterm/CH05/5-9.c
        midterm/CH05/5-10.c
        midterm/CH05/5-13.c
        midterm/CH05/5-14.c
        midterm/CH05/5-15.c
        midterm/CH05/5-16.c
        midterm/CH05/5-17.c
        midterm/CH05/5-18.c
        midterm/CH06/6-5.c
        midterm/CH06/6-6.c
        midterm/CH06/6-7.c
        midterm/CH06/6-8.c
        midterm/CH06/6-9.c
        midterm/CH06/6-10.c
        midterm/CH06/6-11.c
        midterm/CH06/6-12.c
        midterm/CH06/6-14.c
        midterm/CH07/7-7.c
        midterm/CH07/7-8.c
        midterm/CH07/7-9.c
        midterm/CH07/7-13.c
        midterm/CH07/7-14.c
        midterm/CH07/7-15.c
        midterm/CH08/8-13.c
        midterm/CH09/9-5.c
        midterm/CH09/9-6.c
        midterm/CH09/9-7.c
        Ready_to_exam/DiffiHellman_modul.c
        Ready_to_exam/answer1.c
        Ready_to_exam/answer1.h
        Ready_to_exam/MID_TEST/CHJ-MID.h
        Ready_to_exam/answer2.c
        Ready_to_exam/answer2.h
        Ready_to_exam/answer3.c
        Ready_to_exam/factorial.c
        Ready_to_exam/fibonachi.c
        Ready_to_exam/reverse_word.c
        Ready_to_exam/GCD.c
        Ready_to_exam/answer4.c
        Ready_to_exam/test.c
        Ready_to_exam/file-record.c
        final/CH10/10-1.c
        final/CH10/10-2.c
        final/CH10/10-3.c
        final/CH10/10-4.c
        final/CH10/10-5.c
        final/CH10/10-6.c
        final/CH10/10-7.c
        final/CH10/10-8.c
        final/CH10/10-9.c
        final/CH10/10-mine01.c
        과제/10/2-10-5.c
        과제/10/2-10-6.c
        과제/10/2-10-7.c
        과제/10/2-10-1.c
        과제/10/2-10-2.c
        과제/10/2-10-3.c
        과제/10/2-10-4.c
        final/CH11/11-1.c
        과제/11/2-11-4.c
        과제/11/2-11-5.c
        과제/11/2-11-6.c
        과제/11/2-11-7.c
        final/CH12/12-1.c
        final/CH12/12-5.c
        final/CH12/12-11.c
        final/CH12/12-13.c
        과제/13/2-13-1.c
        과제/13/2-13-2.c
        과제/13/2-13-3.c
        과제/13/2-13-4.c
        과제/13/2-13-5.c
        과제/13/2-13-6.c
        과제/13/2-13-8.c
        과제/13/2-13-9.c
        과제/12/2-12-1.c
        과제/12/2-12-2.c
        과제/12/2-12-3.c
        과제/12/2-12-4.c
        과제/12/2-12-5.c
        과제/12/2-12-6.c
        과제/12/2-12-7.c
        final/CH12/12-7.c
        final/CH13/13-1.c
        final/CH13/13-2.c
        final/CH13/13-3.c
        final/CH13/13-3-1.c
        final/CH13/13-4.c
        final/CH13/13-5.c
        final/CH13/13-6.c
        final/CH13/13-7.c
        final/CH13/13-8.c
        final/CH13/13-9.c
        final/CH13/13-10.c
        과제/14/2-14-1.c
        final/CH13/13-11.c
        final/CH13/13-16.c
        final/CH14/14-1.c
        과제/14/2-14-2.c
        과제/14/2-14-3.c
        과제/14/2-14-4.c
        과제/14/2-14-5.c
        과제/14/2-14-6.c
        과제/14/2-14-7.c
        과제/14/2-14-8.c
        final/CH14/14-2.c
        final/CH14/14-3.c
        final/CH14/14-4.c
        final/CH14/14-5.c
        final/CH14/14-6.c
        final/CH14/14-8.c
        final/CH14/14-9.c
        final/CH14/14-11.c
        final/CH14/14-11.c
        final/CH14/14-18.c
        final/CH14/14-19.c
)

add_executable(4-1 midterm/CH04/4-1.c)
add_executable(CH04_4-1 midterm/CH04/4-1.c)
add_executable(CH05_5-11 midterm/CH05/5-11.c)
add_executable(5-11 midterm/CH05/5-11.c)
add_executable(CH05_5-12 midterm/CH05/5-12.c)
add_executable(5-12 midterm/CH05/5-12.c)
add_executable(main main.c)
add_executable(test Ready_to_exam/test.c)
add_executable(6-2 midterm/CH06/6-2.c)
add_executable(6-3 midterm/CH06/6-3.c)
add_executable(6-1 midterm/CH06/6-1.c)
add_executable(6-4 midterm/CH06/6-4.c)
add_executable(02 exam/02.c)
add_executable(03 exam/03.c)
add_executable(04 exam/04.c)
add_executable(6-13 midterm/CH06/6-13.c)
add_executable(6-13-1 midterm/CH06/6-13-1.c)
add_executable(7-1 midterm/CH07/7-1.c)
add_executable(7-2 midterm/CH07/7-2.c)
add_executable(1-5-1 과제/5/1-5-1.c)
add_executable(1-5-2 과제/5/1-5-2.c)
add_executable(1-5-3 과제/5/1-5-3.c)
add_executable(1-5-4 과제/5/1-5-4.c)
add_executable(1-5-5 과제/5/1-5-5.c)
add_executable(1-5-6 과제/5/1-5-6.c)
add_executable(1-5-7 과제/5/1-5-7.c)
add_executable(1-5-8 과제/5/1-5-8.c)
add_executable(1-5-9 과제/5/1-5-9.c)
add_executable(1-5-10 과제/5/1-5-10.c)
add_executable(1-6-1 과제/6/1-6-1.c)
add_executable(1-6-2 과제/6/1-6-2.c)
add_executable(1-6-3 과제/6/1-6-3.c)
add_executable(1-6-4 과제/6/1-6-4.c)
add_executable(1-6-5 과제/6/1-6-5.c)
add_executable(1-6-6 과제/6/1-6-6.c)
add_executable(1-6-7 과제/6/1-6-7.c)
add_executable(1-6-8 과제/6/1-6-8.c)
add_executable(1-6-9 과제/6/1-6-9.c)
add_executable(1-6-10 과제/6/1-6-10.c)
add_executable(1-6-11 과제/6/1-6-11.c)
add_executable(1-6-12 과제/6/1-6-12.c)
add_executable(05 exam/05.c)
add_executable(06 exam/06.c)
add_executable(07 exam/07.c)
add_executable(08 exam/08.c)
add_executable(09 exam/09.c)
add_executable(7-3 midterm/CH07/7-3.c)
add_executable(7-3-1 midterm/CH07/7-3-1.c)
add_executable(7-4 midterm/CH07/7-4.c)
add_executable(7-4-1 midterm/CH07/7-4-1.c)
add_executable(7-5 midterm/CH07/7-5.c)
add_executable(7-6 midterm/CH07/7-6.c)
add_executable(7-11 midterm/CH07/7-11.c)
add_executable(7-10 midterm/CH07/7-10.c)
add_executable(8-1 midterm/CH08/8-1.c)
add_executable(8-2 midterm/CH08/8-2.c)
add_executable(8-3 midterm/CH08/8-3.c)
add_executable(8-4 midterm/CH08/8-4.c)
add_executable(8-5 midterm/CH08/8-5.c)
add_executable(8-6 midterm/CH08/8-6.c)
add_executable(8-9 midterm/CH08/8-9.c)
add_executable(8-8 midterm/CH08/8-8.c)
add_executable(8-10 midterm/CH08/8-10.c)
add_executable(8-11 midterm/CH08/8-11.c)
add_executable(mine03 Ready_to_exam/mine03.c)
add_executable(DiffiHellman Ready_to_exam/DiffiHellman.c)
add_executable(1-7-1 과제/7/1-7-1.c)
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
add_executable(2-1 midterm/CH02/2-1.c)
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
add_executable(9-1 midterm/CH09/9-1.c)
add_executable(1-9-6 과제/9/1-9-6.c)
add_executable(9-2 midterm/CH09/9-2.c)
add_executable(1-9-7 과제/9/1-9-7.c)
add_executable(1-9-8 과제/9/1-9-8.c)
add_executable(1-9-9 과제/9/1-9-9.c)
add_executable(1-9-11 과제/9/1-9-11.c)
add_executable(menu 과제/9/menu.c)
add_executable(9-8 midterm/CH09/9-8.c)
add_executable(9-10 midterm/CH09/9-10.c)
add_executable(9-13 midterm/CH09/9-13.c)
add_executable(9-12 midterm/CH09/9-12.c)
add_executable(9-11 midterm/CH09/9-11.c)
add_executable(9-14 midterm/CH09/9-14.c)
add_executable(1 과제/2/1.c)
add_executable(2 과제/2/2.c)
add_executable(3 과제/2/3.c)
add_executable(4 과제/2/4.c)
add_executable(5 과제/2/5.c)
add_executable(6 과제/2/6.c)
add_executable(7 과제/2/7.c)
add_executable(8 과제/2/8.c)
add_executable(9 과제/2/9.c)
add_executable(10 과제/2/10.c)
add_executable(11 과제/2/11.c)
add_executable(12 과제/2/12.c)
add_executable(1-3-1 과제/3/1-3-1.c)
add_executable(1-3-2 과제/3/1-3-2.c)
add_executable(1-3-3 과제/3/1-3-3.c)
add_executable(store Ready_to_exam/store.c)
add_executable(8-12 midterm/CH08/8-12.c)
add_executable(1-3-4 과제/3/1-3-4.c)
add_executable(1-3-5 과제/3/1-3-5.c)
add_executable(1-3-7 과제/3/1-3-7.c)
add_executable(1-3-8 과제/3/1-3-8.c)
add_executable(1-3-9 과제/3/1-3-9.c)
add_executable(1-3-10 과제/3/1-3-10.c)
add_executable(1-3-11 과제/3/1-3-11.c)
add_executable(1-4-1 과제/4/1-4-1.c)
add_executable(1-4-2 과제/4/1-4-2.c)
add_executable(1-4-3 과제/4/1-4-3.c)
add_executable(1-4-4 과제/4/1-4-4.c)
add_executable(1-4-5 과제/4/1-4-5.c)
add_executable(1-4-6 과제/4/1-4-6.c)
add_executable(1-4-7 과제/4/1-4-7.c)
add_executable(1-4-8 과제/4/1-4-8.c)
add_executable(1-4-9 과제/4/1-4-9.c)
add_executable(DiffiHellman_function Ready_to_exam/DiffiHellman_function.c)
add_executable(1-1 midterm/CH01/1-1.c)
add_executable(4-1-exam exam/4-1-exam.c)
add_executable(2-1-exam exam/2-1-exam.c)
add_executable(2-2 midterm/CH02/2-2.c)
add_executable(2-3 midterm/CH02/2-3.c)
add_executable(2-4 midterm/CH02/2-4.c)
add_executable(2-5 midterm/CH02/2-5.c)
add_executable(2-6 midterm/CH02/2-6.c)
add_executable(2-7 midterm/CH02/2-7.c)
add_executable(2-8 midterm/CH02/2-8.c)
add_executable(2-9 midterm/CH02/2-9.c)
add_executable(2-10 midterm/CH02/2-10.c)
add_executable(2-11 midterm/CH02/2-11.c)
add_executable(2-12 midterm/CH02/2-12.c)
add_executable(2-13 midterm/CH02/2-13.c)
add_executable(3-1 midterm/CH03/3-1.c)
add_executable(3-2 midterm/CH03/3-2.c)
add_executable(3-4 midterm/CH03/3-4.c)
add_executable(3-5 midterm/CH03/3-5.c)
add_executable(3-6 midterm/CH03/3-6.c)
add_executable(3-7 midterm/CH03/3-7.c)
add_executable(3-8 midterm/CH03/3-8.c)
add_executable(3-9 midterm/CH03/3-9.c)
add_executable(4-2 midterm/CH04/4-2.c)
add_executable(4-3 midterm/CH04/4-3.c)
add_executable(4-4 midterm/CH04/4-4.c)
add_executable(4-5 midterm/CH04/4-5.c)
add_executable(4-7 midterm/CH04/4-7.c)
add_executable(5-2 midterm/CH05/5-2.c)
add_executable(5-1 midterm/CH05/5-1.c)
add_executable(5-3 midterm/CH05/5-3.c)
add_executable(5-4 midterm/CH05/5-4.c)
add_executable(5-5 midterm/CH05/5-5.c)
add_executable(5-6 midterm/CH05/5-6.c)
add_executable(5-7 midterm/CH05/5-7.c)
add_executable(5-8 midterm/CH05/5-8.c)
add_executable(5-9 midterm/CH05/5-9.c)
add_executable(5-10 midterm/CH05/5-10.c)
add_executable(5-13 midterm/CH05/5-13.c)
add_executable(5-15 midterm/CH05/5-15.c)
add_executable(5-16 midterm/CH05/5-16.c)
add_executable(5-17 midterm/CH05/5-17.c)
add_executable(5-18 midterm/CH05/5-18.c)
add_executable(6-5 midterm/CH06/6-5.c)
add_executable(6-6 midterm/CH06/6-6.c)
add_executable(6-7 midterm/CH06/6-7.c)
add_executable(6-9 midterm/CH06/6-9.c)
add_executable(6-10 midterm/CH06/6-10.c)
add_executable(6-11 midterm/CH06/6-11.c)
add_executable(6-12 midterm/CH06/6-12.c)
add_executable(6-14 midterm/CH06/6-14.c)
add_executable(7-7 midterm/CH07/7-7.c)
add_executable(7-8 midterm/CH07/7-8.c)
add_executable(7-14 midterm/CH07/7-14.c)
add_executable(7-15 midterm/CH07/7-15.c)
add_executable(8-13 midterm/CH08/8-13.c)
add_executable(9-5 midterm/CH09/9-5.c)
add_executable(DiffiHellman_modul Ready_to_exam/DiffiHellman_modul.c)
add_executable(answer1 Ready_to_exam/answer1.c)
add_executable(answer2 Ready_to_exam/answer2.c)
add_executable(answer3 Ready_to_exam/answer3.c)
add_executable(factorial Ready_to_exam/factorial.c)
add_executable(fibonachi Ready_to_exam/fibonachi.c)
add_executable(reverse_word Ready_to_exam/reverse_word.c)
add_executable(file-record Ready_to_exam/file-record.c)
add_executable(10-1 final/CH10/10-1.c)
add_executable(10-2 final/CH10/10-2.c)
add_executable(10-3 final/CH10/10-3.c)
add_executable(10-4 final/CH10/10-4.c)
add_executable(10-5 final/CH10/10-5.c)
add_executable(10-mine01 final/CH10/10-mine01.c)
add_executable(2-10-5 과제/10/2-10-5.c)
add_executable(2-10-6 과제/10/2-10-6.c)
add_executable(2-10-7 과제/10/2-10-7.c)
add_executable(2-10-1 과제/10/2-10-1.c)
add_executable(2-10-2 과제/10/2-10-2.c)
add_executable(2-10-3 과제/10/2-10-3.c)
add_executable(2-10-4 과제/10/2-10-4.c)
add_executable(11-4 과제/11/2-11-4.c)
add_executable(11-5 과제/11/2-11-5.c)
add_executable(11-6 과제/11/2-11-6.c)
add_executable(11-7 과제/11/2-11-7.c)
add_executable(12-1 final/CH12/12-1.c)
add_executable(2-12-1 과제/12/2-12-1.c)
add_executable(2-13-1 과제/13/2-13-1.c)
add_executable(2-13-2 과제/13/2-13-2.c)
add_executable(2-13-3 과제/13/2-13-3.c)
add_executable(2-13-4 과제/13/2-13-4.c)
add_executable(2-13-5 과제/13/2-13-5.c)
add_executable(2-13-6 과제/13/2-13-6.c)
add_executable(2-13-8 과제/13/2-13-8.c)
add_executable(2-13-9 과제/13/2-13-9.c)
add_executable(2-12-2 과제/12/2-12-2.c)
add_executable(2-12-3 과제/12/2-12-3.c)
add_executable(2-12-4 과제/12/2-12-4.c)
add_executable(2-12-5 과제/12/2-12-5.c)
add_executable(2-12-6 과제/12/2-12-6.c)
add_executable(2-12-7 과제/12/2-12-7.c)
add_executable(12-7 final/CH12/12-7.c)
add_executable(13-1 final/CH13/13-1.c)
add_executable(13-2 final/CH13/13-2.c)
add_executable(13-3 final/CH13/13-3.c)
add_executable(13-6 final/CH13/13-6.c)
add_executable(13-7 final/CH13/13-7.c)
add_executable(13-8 final/CH13/13-8.c)
add_executable(13-9 final/CH13/13-9.c)
add_executable(13-10 final/CH13/13-10.c)
add_executable(2-14-1 과제/14/2-14-1.c)
add_executable(13-11 final/CH13/13-11.c)
add_executable(14-1 final/CH14/14-1.c)
add_executable(2-14-2 과제/14/2-14-2.c)
add_executable(2-14-3 과제/14/2-14-3.c)
add_executable(2-14-4 과제/14/2-14-4.c)
add_executable(2-14-5 과제/14/2-14-5.c)
add_executable(2-14-6 과제/14/2-14-6.c)
add_executable(2-14-7 과제/14/2-14-7.c)
add_executable(2-14-8 과제/14/2-14-8.c)
add_executable(14-2 final/CH14/14-2.c)
add_executable(14-5 final/CH14/14-5.c)
add_executable(14-11 final/CH14/14-11.c)