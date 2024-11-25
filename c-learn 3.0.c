#include <stdio.h>

int main(){
    char name [50];
    //int vote;
    int age;
    printf("Please enter your name \n");
    scanf("%s",name);
    printf("Please enter your age below\n",age);
    scanf("%d",&age);

    if(age >=18) {
        printf("%s Eligible to vote\n",name);
    }
    else {
        printf("%s Not Eligible to vote\n",name);
    }

return 0;
}

