#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,a[10][10],d=0;
    scanf("%d",&n);
    double b[10][10];
    if(n==2)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        d=(a[0][0]*a[1][1]-a[1][0]*a[0][1]);
        cout<<"The determinant of A: "<<d<<endl<<endl;
        cout<<"The transpose of A: "<<endl;
        for(j=0; j<n; j++)
        {
            for(i=0; i<n; i++)
            {
                cout<<"\t"<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        b[0][0]=(a[1][1]);
        b[0][1]=-(a[1][0]);
        b[1][0]=-(a[0][1]);
        b[1][1]=(a[0][0]);
        cout<<"The adjoint of A:"<<endl;
        for(j=0; j<n; j++)
        {
            for(i=0; i<n; i++)
            {
                cout<<"\t"<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"The inverse of A:"<<endl;
        for(j=0;j<n;j++)
        {
            for(i=0;i<n;i++)
            {
                cout<<"\t"<<b[i][j]/d<<" ";
            }
            cout<<endl;
        }

    }
    if(n==3)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        d=((a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2]))-(a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0]))+(a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1])));
        cout<<"The determinant of A: "<<d<<endl<<endl;
        cout<<"The transpose of A: "<<endl;
        for(j=0; j<n; j++)
        {
            for(i=0; i<n; i++)
            {
                cout<<"\t"<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        b[0][0]=(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
        b[0][1]=-(a[1][0]*a[2][2]-a[1][2]*a[2][0]);
        b[0][2]=(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
        b[1][0]=-(a[0][1]*a[2][2]-a[0][2]*a[2][1]);
        b[1][1]=(a[0][0]*a[2][2]-a[0][2]*a[2][0]);
        b[1][2]=-(a[0][0]*a[2][1]-a[0][1]*a[2][0]);
        b[2][0]=(a[0][1]*a[1][2]-a[0][2]*a[1][1]);
        b[2][1]=-(a[0][0]*a[1][2]-a[0][2]*a[1][0]);
        b[2][2]=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);
        cout<<"The adjoint of A:"<<endl;
        for(j=0; j<n; j++)
        {
            for(i=0; i<n; i++)
            {
                cout<<"\t"<<b[i][j]<<" ";
            }
            cout<<endl;
        }
             cout<<"The inverse of A:"<<endl;
        for(j=0;j<n;j++)
        {
            for(i=0;i<n;i++)
            {
                cout<<"\t"<<b[i][j]/d<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
