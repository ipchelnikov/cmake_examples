#include <stdio.h>
#include <memory>

#include "semple_config.h"

#include "my_library.h"

int main(int argc, char* argv[])
{
    printf("%s(%d.%d)\n", argv[0], Semple_VERSION_MAJOR, Semple_VERSION_MINOR);

    int a = 0;
    auto addr = std::to_address(&a); // Use c++20 feature, to check it is available
    printf("Addr: %p\n", addr);

    my_library_function();
}