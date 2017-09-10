#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    double x[10],y[10],sum=0,h,xi,xf,area;
    printf("Input number of data points\n");
    scanf("%d",&n);
    printf("Input table values, set by set\n");
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf",&x[i],&y[i]);
    }
    printf("Initial value of x\n");
    scanf("%lf",&xi);
    printf("Final value of x\n");
    scanf("%lf",&xf);
    printf("What is the segment width?\n");
    scanf("%lf",&h);
    n=n-1;
    sum=sum+y[0];
    for(i=1;i<n;i++)
    {
        sum=sum+2*y[i];
    }
    sum=sum+y[i];
    sum=sum*(h/2);
    printf("Integral from %.4lf to %.4lf is %.6lf",xi,xf,sum);
    return 0;

}
