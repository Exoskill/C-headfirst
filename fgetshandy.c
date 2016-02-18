#include<stdio.h>

int main(){
    char food[5];
    printf("Enter favorite food: ");
    fgets(food, sizeof(food), stdin);
    printf("I like to eat %s\n", food); 

    return 0;
}
