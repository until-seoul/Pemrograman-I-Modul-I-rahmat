#include <stdio.h>
int main()
{
    int side1 = 4;
    int side2 = 5;
    int side3 = 7;
    int Circumference = side1 + side2 + side3;
    int price_per_meter = 85000;
    int total_price = Circumference * price_per_meter;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", side1, side2, side3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", Circumference);
    printf("Harga tanah Per Meter adalah %d\n", price_per_meter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", total_price);
    return 0;
}
