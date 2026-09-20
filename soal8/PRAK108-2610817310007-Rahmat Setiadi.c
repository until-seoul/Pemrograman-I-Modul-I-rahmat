#include <stdio.h>
#include <math.h>

int main()
{
    int lap = 5;
    float distance = 14;
    float circumference = distance / lap;
    float radius = circumference / (2 * M_PI);
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", lap);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", distance);
    printf("\nJawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", radius);
    return 0;
}
