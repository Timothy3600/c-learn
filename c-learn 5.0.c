#include <stdio.h>
int main() {
    //program to add two numbers
    //and display the sum
    /*int sum, num1, num2, i;

    i=1;
    num1=o,num2=2;
    while(i<5) {
        sum =num1+num2;
        printf("The sum of %d and %d is %d\n",num1,num2,sum);
        num1=num1+2;
        i++;
    }*/
    int i=1;// multiples of 3^1
    //power-^
    int power,num1,num2;

    i=1;
    num1=1;
    power=1, num2=3;
    while(i<=5) {
            power=power*3;
        printf("3^%d is %d\n",num1,power);
        num2=num2+2;
        num1++;
        i++;
    }





return 0;
}
