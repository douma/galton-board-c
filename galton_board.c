#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

bool randomBool()
{
  return rand() % 2 == 1;
}

int main()
{
    int trays [10] = {0,0,0,0,0,0,0,0,0,0};
    int bullets = 250;
    int numberOfDrops = 10 - 1;
    double middle = 10 / 2;

    for(int bullet = 0; bullet < bullets; bullet = bullet + 1)
    {
        double position = 0;
        for(int drop = 0; drop < numberOfDrops; drop = drop + 1)
        {
            bool random = randomBool();
            if(random)
            {
                position += 0.5;
            }
            else 
            {
                position -= 0.5;
            }
        }
        int trayNumber = floor(position + middle);
        trays[trayNumber] = trays[trayNumber] + 1;
    }

    for (int display = 0; display < numberOfDrops; display = display + 1)
    {
        int numberOfBullets = trays[display];

        for(int bullet=0; bullet < numberOfBullets; bullet = bullet + 1)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}
