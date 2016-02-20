#include <stdio.h>

int main (){
    char s[] = "How big is it ? ";
    char *t = s;
    printf("size of 's' is %lu bytes \n", sizeof(s));
    printf("size of 't' is %lu bytes \n", sizeof(t));
}
