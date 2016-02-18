#include <stdio.h> 

int main(){
    
    int age; 
    char first_name[20];
    char last_name[20];
    
    printf("Enter your age: ");
    scanf("%i", &age);

    printf("\nEnter first and last name: ");
    scanf("%19s %19s", first_name, last_name);
    printf("\nFirst: %s | Last: %s | Age:%i\n", first_name, last_name, age);
    
    return 0;
}
