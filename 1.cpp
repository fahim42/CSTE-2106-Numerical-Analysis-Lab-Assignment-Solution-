#include<bits/stdc++.h>
using namespace std;
int FACT(int a)
{
    int sum=0,i,j,k;
    if(a==0)
    {
        return 1;
    }
    else
    {
        sum=1;
        for(i=a; i>=1; i--)
            sum*=i;
        }
    return sum;
}
int main()
{
    int x,n,i,j;
    double sum=0;
    printf("The value of x is: ");
    scanf("%d",&x);
    printf("Truncted after the term: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum+=((pow(x,i))/FACT(i));
    }
    cout<<"The result is : "<<sum<<endl;
    return 0;
}
