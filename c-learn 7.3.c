#include <stdio.h>

int main() {
    char name [50];
    printf("Please enter your full name\n");
    //scanf("%s",name);
    //syntaxfgets(str,size,stdin);
    fgets(name,50,stdin);
    printf("Your name is %s",name);






}
