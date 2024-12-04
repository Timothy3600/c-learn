#include <stdio.h>
void student();
void calculate();
//This is the main function
int main() {
    student("BWIRE TIMOTHY",20, 5.7);
    calculate(23,25);
return 0;
}
void student(char name[], int x,double h) {
    printf("My name is %s age is %d and my height is %.2lf",name,x,h);
}
void calculate(int a, int b) {
    int sum=a+b;
    printf("The sum of %d and %d is %d",a,b,sum);
}
