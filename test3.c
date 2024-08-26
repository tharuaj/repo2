#include <stdio.h>
#define OS Mac
#ifdef OS == Linux
    #define Buffer_Size 100
#elif OS == Windows
    #define Buffer_Size 200
#elif OS == Mac
    #define Buffer_Size 300
#else
    #define Buffer_Size 0
#endif
#define Debug_Mode

int main()
{
    #ifdef Debug_Mode
        printf("Debug Mode is ON\n");
    #else
        printf("Debug Mode is OFF\n");
    #endif
    printf("Buffer Size: %d\n", Buffer_Size);

    return 0;
}