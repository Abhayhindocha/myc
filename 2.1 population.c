#include<stdio.h>

int main()

{
float TP,LM,TL,M,W,IW,LW,IM;

printf("Total Population: ");
scanf("%f",&TP);

M=TP*.52;
TL=TP*.48;
LM=TP*.35;
IM=M-LM;
LW=TL-LM;
IW=W-LW;
W=TP-M;
printf("\nNumber of Literate(Men+Women) %.2f",TL);
printf("\nNumber of Men %.2f",M);
printf("\nNumber of Literate Men %.2f",LM);
printf("\nNumber of Illetrate Men %.2f",IM);
printf("\nNumber of Women %.2f",W);
printf("\nNumber of Literate Women %.2f",LW);
printf("\nNumber of Illetrate Women %.2f",IW);

printf("This program is made By Abhay_22TCE123 ");

return 0;
}
