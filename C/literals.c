#include <stdio.h>

int main()
{

    // Define constants:
    const int LENGTH = 10;
    const int WIDTH = 5;
    const int NEWLINE = '\n';
    int area;

    area = LENGTH * WIDTH;
    printf("value of area: %d", area);
    printf("%c", NEWLINE);

    return 0;
}