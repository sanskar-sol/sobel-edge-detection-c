#include <file_handling.h>

FILE* open_argument_file(int argc, char* argv[], const char* mode)
{
    FILE* fp;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        return NULL;
    }

    fp = fopen(argv[1], mode);

    if (fp == NULL)
    {
        fprintf(stderr, "Error: %s cannot be accessed.\n", argv[1]);
    }

    return fp;
}

FILE* open_file(const char * filename, const char* mode)
{
    FILE* fp;
    fp = fopen(filename, mode);

    if (fp == NULL)
    {
        fprintf(stderr, "Error: %s cannot be accessed.\n", filename);
    }

    return fp;
}