#include<stdio.h>                  

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    iCnt = 1;
    while(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Result is : %d \n",iRet);
   
    return 0;
}