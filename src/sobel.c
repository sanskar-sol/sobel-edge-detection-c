#include <stdio.h>
#include <image.h>
#include <file_handling.h>
#define TEST_IMAGE "images/input/test.png"

int main()
{
    if (isPNG(TEST_IMAGE))
    {
        printf("%s is a PNG\n", TEST_IMAGE);
    }
    else
    {
        printf("%s is not a PNG\n", TEST_IMAGE);
    }
    return 0;
}