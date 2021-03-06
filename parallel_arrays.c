#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int players[5]={58, 66, 68, 71, 87};
    int goals[5]={26, 39, 25, 29, 31};
    int gamesPlayed[5]={30, 30, 28, 30, 26};
    float ppg[10];
    float bestPPG = 0.0;
    int bestPlayer;

    for(int i=0; i<5; i++){
        ppg[i] = (float)goals[i] / (float)gamesPlayed[i];
        printf("%d\t %d\t %d\t %.2f\n", players[i], goals[i], gamesPlayed[i], ppg[i]);

        if(ppg[i] > bestPPG){
            bestPPG = ppg[i];
            bestPlayer = players[i];
        }
    }

    printf("\nThe best player is %d \n", bestPlayer);


    return 0;
}