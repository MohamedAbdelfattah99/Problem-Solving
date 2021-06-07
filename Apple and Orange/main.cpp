#include <iostream>

using namespace std;

int main()
{
    int s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;
    int sum1=0,sum2=0;
    for(int i=0;i<m;i++){
        int num=0;
        cin>>num;
        int temp=a+num;
        if(temp>=s&&temp<=t){
            sum1++;
        }

    }

    for(int i=0;i<n;i++){
        int num=0;
        cin>>num;
        int temp=b+num;
        if(temp>=s&&temp<=t){
            sum2++;
        }

    }
    cout<<sum1<<endl<<sum2;
    return 0;
}
