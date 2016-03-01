#include<stdio.h>
#include<string.h>

void print_reverse(char *s){
    size_t len = strlen(s);
    char *t = s + len - 1;

    printf("s value is the address of s[0] first char of the string :%i\n", s);
    printf("t value is the address of s[(s+len-1)] the last actual char of the string :%i\n", t);
    
    while(t >= s){
        printf("address of t:%i", t);
        printf(" - value of t %c\n", *t);
        t = t - 1;
    }
    puts("");
}

int main(){
    char *test = "people";
    print_reverse(test);
    return 0;
}
