#include <stdio.h>

int main()
{
    int a = 4;
    int b = 8;
    int c = 3;
    float result = (float)a * b / c;

    printf("variabel a bernilai %d\n", a);
    printf("variabel b bernilai %d\n", b);
    printf("variabel c bernilai %d\n", c);
    printf("hasil dari a dikali b dibagi c adalah %.6f\n", result);
    return 0;
}
