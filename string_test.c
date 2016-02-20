#include <stdio.h>

//Lorsque la array est passe a la fonction c'est en fait le pointeur de cette array qui est passe, c'est a dire plus precisement le pointeur du premier byte de cette array qui est passe.
//

void fortune_cookie(char msg[]){
    printf("Message reads : %s\n", msg);
    printf("msg occupies %lu bytes\n", sizeof(msg));
    printf("space available for the int type on this computer is %lu bytes", sizeof(int));
}

int main(){
   char quote[] = " Oh yes ! Cookies make you fat";
   printf("mais si c'est ici : %lu bytes\n", sizeof(quote));
   fortune_cookie(quote); 

}
