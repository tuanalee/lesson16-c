#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    int temp;

    printf("Truoc khi doi: x = %d, y = %d\n", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("Sau khi doi: x = %d, y = %d\n", x, y);

    return 0;
}
