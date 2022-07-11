#include<stdio.h>
int main ()
{
    int hours,minutes;
    printf("enter the hours and time in this format only- HH:MM ");
    scanf("%d %d",&hours,&minutes);
    printf("%d:%d",hours,minutes);
    printf("\n""%d hour and %d minute", hours,minutes);
        return 0;
}