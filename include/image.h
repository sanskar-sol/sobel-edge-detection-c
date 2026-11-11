#ifndef IMAGE
#define IMAGE
#define PNG_HEADER_SIZE 16
#define IHDR_SIZE 13 // BYTES


#include <stdint.h>
#include <file_handling.h>
#include <string.h>

static const uint8_t PNG_HEADER[PNG_HEADER_SIZE] = {0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A,
                                                          0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52}; 

int isSignature(const uint8_t* a, const uint8_t* b, int n);

int isPNG(const char* filename);

#endif