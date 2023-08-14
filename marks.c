#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int marks[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&marks[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (marks[i]<35)
        {
            printf("%d",i);
        }
        
    }
    
    return 0;

}