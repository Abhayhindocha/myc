#include<stdio.h>

void main()

{
    char credit;
int stock,order;


printf("Enter Your Credit:");
scanf("%c",&credit);

printf("Enter Order:");
scanf("%d",&order);

printf("Availabe Stock:");
scanf("%d",&stock);

if(credit=='Y'|| credit == 'y'&& stock>=order)
    printf("your order is placed");

else if(credit=='y'||credit=='Y'&& stock<order)
    printf("out of stock your balance will be refunded");

else if(credit=='n'||credit=='N')
    printf("please fullfil your credit first");

printf("\n This Program Is Prepared By Nitya Halani 22CE037");
}
