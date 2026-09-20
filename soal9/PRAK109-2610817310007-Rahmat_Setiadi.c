#include <stdio.h>
int main()
{
    int total_enemy = 958730;
    int total_heroes = 5;
    int enemy_per_hero = total_enemy / total_heroes;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", total_enemy);
    printf("Jumlah pahlawan = %d\n", total_heroes);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", enemy_per_hero);
    return 0;
}
