#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,m,arr[100],sum=0,count=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s[i] ;
    }
    cin>>d>>m ;
    for(int i=0; i<n; i++)
    {
        sum=s[i];
        for(int j=i+1; j<m; j++)
        {
            sum=sum+s[j];
        }
        if(sum==d)
        {
            count++ ;
        }
        m++;
    }
    cout<<count;
}
