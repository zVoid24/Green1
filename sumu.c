#include<stdio.h>

int main()
{
    int n,i,j,k,sum=0,count;
    printf("Enter the siz of matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            count=0;
            if(arr[i][j]!=0 && arr[i][j]!=1)
            {
                for(k=1;k<=arr[i][j];k++)
                {
                    if(arr[i][j]%k==0)
                    {
                        count++;
                    }
                }
                if(count==2)
                {
                    sum+=arr[i][j];
                }
            }
        }
    }
    printf("The sum of prime numbers: %d\n",sum);
    return 0;
}