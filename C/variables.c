#include <stdio.h>

// Vairable declaration:
extern int a, b;
extern int c;
extern float f;

// Function declaration:
int func();

int main() {

    // Function call:
    int ret = func();
}

int func() {

    // Variable definition:
    int a, b;
    int c;
    float f;

    // Actual initialization:
    a = 10;
    b = 20;

    c = a + b;
    printf("value of c: %d\n", c);

    f = 70.0/3.0;
    printf("value of f: %f\n", f);

    return 0;
}