#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(){
    printf("The value of INT_MAX is %i\n", INT_MAX);
    printf("The value of INT_MIN is %i\n", INT_MIN);
    printf("An int takes %zu bytes\n", sizeof(int));

    printf("The value of FLT_MAX is %f\n", FLT_MAX);
    printf("The value of FLT_MAX is %.50f\n", FLT_MIN);
    printf("A float takes %zu bytes\n", sizeof(float));

    return 0;
}
