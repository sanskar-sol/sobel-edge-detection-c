#ifndef FILE_HANDLING
#define FILE_HANDLING
#include <stdio.h>

FILE* open_argument_file(int argc, char* argv[], const char* mode);
FILE* open_file(const char * filename, const char* mode);
#endif

