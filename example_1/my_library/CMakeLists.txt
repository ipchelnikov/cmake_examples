add_library(MyLibrary my_library.cpp)

option(ANOTHER_HELLO "Say another hello" OFF)

if (ANOTHER_HELLO)
    target_compile_definitions(MyLibrary PRIVATE ANOTHER_HELLO)
endif()