#include <stdio.h>

int main() {
    int var = 20;
    int *ptr = &var;

    printf("Gia tri cua var: %d\n", var);
    printf("Dia chi cua var: %p\n", (void*)&var);
    printf("Gia tri cua var thong qua con tro: %d\n", *ptr);
    printf("Dia chi cua var thong qua con tro: %p\n", (void*)ptr);

    return 0;
}
