#include <stdio.h>
int main(){
double USD=300;
int x;
//1 USD is bought at shs.300;
printf("Welcome to Isbat Forex Bureau\n");
printf("Be Advised that the Exchange Rate is 1USD = UGX\n",USD);
printf("Please enter the shillings amounts\n");
scanf("%d",&x);
double EXCH=x/USD;
printf("\nDear customer your exchange rate is USD %.2lf\n",EXCH);


return 0;
}
