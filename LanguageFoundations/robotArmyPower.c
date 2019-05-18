#include <stdio.h>
//calculate the power of all robots using the given formula
int main (void){
    int numberRobots = 0;
    int height = 0;
    int weight = 0;
    int powerEngine = 0;
    int resistance = 0; //1,2,or 3
    int robotPower = 0;
    int totalPower = 0;
    int i = 0;
    
    printf("Number of robots:\n");
    scanf("%d\n", &numberRobots);
    for (i = 0; i<numberRobots; i++){
        scanf("%d%d%d%d\n", &height, &weight, &powerEngine, &resistance);
        //given formula
        robotPower = (powerEngine + resistance)*(weight-height);
        totalPower = totalPower+robotPower;
        printf("Total power: %d\n", totalPower);
    }
}
