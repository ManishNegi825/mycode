#include<stdio.h>
int main()
{
    int day,month,year;
    printf("enter the value in this format only DD/MM/YYYY ");
    scanf("%d %d %d",&day,&month,&year);
 printf("%d/%d/%d",day,month,year);
 printf("\n""Day-%hd , Month - %hd , Year - %d",day,month,year);
    return 0;
}
