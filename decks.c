/*
 * Program to calculate the number of cards in the shoe.
 * This code is released unde the Vegas Public License
 * (c) The Sad Little Developer.
 */

#include <stdio.h>

int main(){
    int decks;
    puts("Enter a number of decks");
    scanf("%i", &decks);
    if(decks < 1){
        puts("That is not a valid number of decks");
        return 1;
    }
    printf("There are %i cards\n", (decks * 52));
    return 0;
}
