#include<stdio.h>
int main()
{
    int n,max=-1;
    printf("Enter the range of array: ");
    scanf("%d",&n);
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    printf("Max : %d",max);
    return 0;
    
    
}