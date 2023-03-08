#include <stdio.h>

int main()
{
    int numbers_of_gamers[4];
    numbers_of_gamers[0] = 4;
    numbers_of_gamers[1] = 12;
    numbers_of_gamers[2] = 422;
    numbers_of_gamers[3] = 321;
    
    printf("the numbers of gamers %d\n", numbers_of_gamers[3]);
    printf("the numbers of gamers %d\n", numbers_of_gamers[2]);
    printf("the numbers of gamers %d\n", numbers_of_gamers[0]);
    return 0;
}