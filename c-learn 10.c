#include <stdio.h>
void name();
double calculate();
double x=20.0, y=70.0,sum;
int main() {
    name();
    printf("The sum of %f and %f is %.2lf\n",x,y,calculate(20.0,70.0));
return 0;
}
void name (int TIMOTHY){
    printf("My name is TIMOTHY\n",name);
}
double calculate (double x,double y){
    double sum=x+y;
return sum;
}
