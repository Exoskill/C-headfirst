#include <stdio.h>

typedef struct{
    float tank_capacity;
    int   tank_psi;
    const char *suit_materials;
} equipement;

typedef struct scuba{
    const char *name;
    equipement kit;
} diver;

void badge(diver d){
    printf("Name: %s Tank: %2.2f(%i) Suit: %s\n",
            d.name, d.kit.tank_capacity, d.kit.tank_psi, d.kit.suit_material);
}

int main(){
    diver randy = {"Randy", {5.5, 3500, "Neoprene"}};
    badge(randy);
    return 0;
}
