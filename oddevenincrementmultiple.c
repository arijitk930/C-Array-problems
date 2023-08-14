#include<stdio.h>
int main()
{
    int n;
    printf("Enter the range of array: ");
    scanf("%d",&n);
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]=arr[i]+10;
        }
        else
        {
            arr[i]=arr[i]*2;
        }
    }
    printf("The after effect is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n ",arr[i]);
    }
    return 0;
    
    

}