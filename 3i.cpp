#include<bits/stdc++.h>
using namespace std;
int main()
{
   int m,n,i,j;
   int arr[100][100];
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
       for(j=0;j<n;j++)
       {
           printf("%d ",arr[i][j]);
       }
       printf("\n");
   }
   return 0;
}
