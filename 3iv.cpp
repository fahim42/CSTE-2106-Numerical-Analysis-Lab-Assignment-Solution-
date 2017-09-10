#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j;
    int arr[101][101];
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i>j)
            {
                printf("0 ");
            }
            else if(i<j)
            {
                printf("0 ");
            }
            else{
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}

