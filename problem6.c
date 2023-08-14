/*Find the total numbers of pairs in the array whose sum is equal to the given value x*/
#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i <=n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    int x=12;
    for (int i = 0; i <=n-1; i++)
    {
        for (int j = i+1; j <=n-1; j++)
        {
            if (a[i]+a[j]==12)
            {
                count++;
            }
            
        }
        
    }
    printf("Total numbers of pairs are: %d",count);
    return 0;
    
    
}
