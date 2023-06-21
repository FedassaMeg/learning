#include <stdio.h>

// Function declaration:
void func(void);

static int count = 5; // Global variable

int main()
{

    while (count--)
    {
        func();
    }

    return 0;
}

void func()
{

    static int i = 5; // Local static variable
    i++;

    printf("i is %d and count is %d\n", i, count);
}