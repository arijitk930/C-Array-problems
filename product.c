#include<stdio.h>
int main()
{
    int n,prd=1,sum;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int prdct[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&prdct[i]);
    }
    for (int i = 0; i <n; i++)
    {
        sum=(prd*prdct[i]);
    }
    printf("%d",sum);
    return 0;
    
    
}