#include<stdio.h>
int main()
{
    int n,sumev=0,sumodd=0,sum;
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
            sumev+=arr[i];
        }
        else
        {
            sumodd+=arr[i];
        }
    }
    sum=sumev-sumodd;
    printf("The Sum is: %d ",sum);
    return 0;
    
    

}