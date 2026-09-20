#include <stdio.h>
#include <math.h>

int main()
{
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;
    int total_remain = (a % b) + (x % y);
    printf("variabel a bernilai %d\n", a);
    printf("variabel b bernilai %d\n", b);
    printf("variabel x bernilai %d\n", x);
    printf("variabel y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", total_remain);
    return 0;
}
