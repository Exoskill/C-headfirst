#include<stdio.h>

int main(){
    char masked_raider[] = "Alive"; 
    char *jimmy = masked_raider;
    printf("Masked raider is %s, Jimmy is %s\n", masked_raider, jimmy);
    masked_raider[0] = 'D'; 
    masked_raider[1] = 'E'; 
    masked_raider[2] = 'A';
    masked_raider[3] = 'D'; 
    masked_raider[4] = '!'; 
    printf("Masked raider is %s, Jimmy is %s\n", masked_raider, jimmy);
    return 0;
}


