#include <stdio.h>

#include "my_library.h"

void my_library_function()
{
#ifndef ANOTHER_HELLO
    printf("Hello from my library!\n");
#else
    printf("Another hello from my library!\n");
#endif
}