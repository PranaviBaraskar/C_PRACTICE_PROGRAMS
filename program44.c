#include<stdio.h>                  


void DisplayF(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    iCnt = iNo;
    while(iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayF(iValue);
   
    return 0;
}