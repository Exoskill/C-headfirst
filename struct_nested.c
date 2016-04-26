#include<stdio.h>

struct preferences{
    const char *food;
    float exercice_hours;
};

struct fish {
    const char *name;
    const char *species;   
    int teeth;
    int age;
    struct preferences care;
};

void catalog (struct fish f){
    printf("%s is a %s with %i teeth. He is %i\n", f.name, f.species, f.teeth, f.age);
    printf("Snappy likes to eat %s\n", f.care.food); 
    printf("Snappy likes to exercice for %f hours", f.care.exercice_hours);
}

int main(){

    struct fish snappy = {"Snappy", "Piranha", 69, 4, {"meat", 7.5}};
    catalog(snappy);

    return 0;
}
