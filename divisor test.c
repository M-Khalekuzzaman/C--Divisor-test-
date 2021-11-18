#include<stdio.h>
int main()
{
    int number;
    printf("Enter your integer number:");
    scanf("%d",&number);
    printf("All the divisor of %d are : \n",number);
    for(int i=1;i<=number;i++)
    {
        if(number%i ==0)
        {
            printf(" %d\n",i);
        }
    }
    getch();
}
