#include <stdio.h>
#include <math.h>

int main()
{
    int base = 5;
    int height = 12;

    float b_side = sqrt(pow(base, 2) + pow(height, 2));
    float perimeter = base + height + b_side;
    float area = (base * height) / 2.0;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", base);
    printf("Tinggi = %d cm\n", height);
    printf("\nJawab :\n");
    printf("Sisi A = %d cm\n", height);
    printf("Sisi B = %.0f cm\n", b_side);
    printf("Sisi C = %d cm\n", base);
    printf("Keliling = %.0f cm\n", perimeter);
    printf("Luas = %.0f cm\n", area);
    return 0;
}
