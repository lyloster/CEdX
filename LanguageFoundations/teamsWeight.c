#include <stdio.h>

/*You decide to bet on the final match
of the Tug of War National Championship.

Prior to the match the names and weights 
of the players are presented, alternating
by team (team 1 player 1, team 2 player 1,
team 1 player 2, and so on). There is the 
same number of players on each side. You 
record the player weights as they are 
presented and calculate a total weight 
for each time to inform your bet. You 
write a C program to assist with this.

Your program should first read an integer 
indicating the number of members per team. 
Then, the program should read the player 
weights (integers representing kilograms) 
alternating by team. 

After calculating the total weight of each team,
the program should display the text "Team X has 
an advantage" (replacing X with 1 or 2 depending 
on which team has a greater total weight).

You will then display the text "Total weight for 
team 1:" followed by the weight of team 1, then 
"Total weight for team 2:" followed by the weight 
of team 2 (see example below).

You are guaranteed that the two teams will not 
have the same total weight.*/

int main (void){
    int playersPerTeam;
    scanf("%d", &playersPerTeam);
    int playerWeight =0;
    int weightTeam1 = 0;
    int weightTeam2 = 0; 
    int placeInInput = 1;
    int loopTimes = playersPerTeam * 2;
    for (placeInInput = 1; placeInInput<=loopTimes; placeInInput++){
        if((placeInInput%2) == 1){
            playerWeight = 0;
         scanf("%d", &playerWeight);
            weightTeam1 = weightTeam1 + playerWeight;
        }else{
         playerWeight = 0;
            scanf("%d", &playerWeight);
            weightTeam2 = weightTeam2 + playerWeight;
        }
}
    if (weightTeam1>weightTeam2){
        printf("Team 1 has an advantage.\n");
    }else{
        printf("Team 2 has an advantage.\n");
    }
    printf("Total weight for team 1: %d\n", weightTeam1);
    printf("Total weight for team 2: %d\n", weightTeam2);
    return 0;
}