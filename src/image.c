#include <image.h>


int isSignature(const uint8_t* a, const uint8_t* b, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

int isPNG(const char* filename)
{
    FILE* fp = open_file(filename, "rb");

    if (fp == NULL) return 0;
   
    uint8_t buffer[PNG_HEADER_SIZE];

    if (fread(buffer, sizeof(uint8_t), PNG_HEADER_SIZE, fp) == PNG_HEADER_SIZE)
    {
        if (memcmp(buffer, PNG_HEADER, PNG_HEADER_SIZE) == 0)
        {
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);
    return 0;
}