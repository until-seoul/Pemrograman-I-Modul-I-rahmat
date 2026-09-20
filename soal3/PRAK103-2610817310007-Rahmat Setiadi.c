#include <stdio.h>
#include <math.h>

int main()
{
    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;
    double result = ((double)(a + b) * x) / y;
    printf("variabel a bernilai %d\n", a);
    printf("variabel b bernilai %d\n", b);
    printf("variabel x bernilai %d\n", x);
    printf("variabel y bernilai %d\n", y);
    printf("hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", result);
    return 0;
}
