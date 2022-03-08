// Support logging in SeeStructure
// Author: Yuting Xie
// 2022.3.8

//TODO: (yuting) GLOG

#ifndef LOGGING_H
#define LOGGING_H

#include <cstdio>
#include <iostream>

#define IS_LOGGING
#ifdef IS_LOGGING
#define LOG_INFO(...) fprintf(std::cout, "[Info] ", __VA_ARGS__, "\n");
#define LOG_ERRPR(...) fprintf(std::cerr, "[Error] ", __VA_ARGS__, "\n");
#else
#define LOG_INFO(...) ;
#define LOG_ERRPR(...) ;
#endif

#endif