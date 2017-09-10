#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][10],b[10],c[10][10],i,j,k,n;
    double r[10][10],sum,d;
    printf("What is the size of the system (n)?\n");
    scanf("%d",&n);
    printf("Input coefficients  a(i , j), row-wise:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Input vector  b:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    c[0][0]=(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
    c[0][1]=-(a[1][0]*a[2][2]-a[2][0]*a[1][2]);
    c[0][2]=(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    c[1][0]=-(a[0][1]*a[2][2]-a[2][1]*a[0][2]);
    c[1][1]=(a[0][0]*a[2][2]-a[2][0]*a[0][2]);
    c[1][2]=-(a[0][0]*a[2][1]-a[0][1]*a[2][0]);
    c[2][0]=(a[0][1]*a[1][2]-a[1][1]*a[0][2]);
    c[2][1]=-(a[0][0]*a[1][2]-a[0][2]*a[1][0]);
    c[2][2]=(a[0][0]*a[1][1]-a[1][0]*a[0][1]);
    d=(a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1]))-(a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2]))+(a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]));
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            r[i][j]=c[i][j]/d;
        }
    }
    printf("Solution system is: \n");
    for(i=0;i<n;i++)
    {
        sum=0.0;
        for(j=0;j<n;j++)
        {
            sum=sum+r[j][i]*b[j];
        }
        printf("\t %.4lf\n",sum);
    }
    return 0;
}
