#include <iostream>

using namespace std;

int main()
{
    long long x1,u1,x2,u2;
    cin>>x1>>u1>>x2>>u2;
    string flag="NO";
    long long sum1=x1,sum2=x2;
    if(x1>x2&&u1>u2||x2>x1&&u2>u1||(x2>x1&&u2==u1)||x1>x2&&u1==u2){
    }
    else{
    string s="";
    if(sum1>sum2){
        s="s1";
    }
    if(sum2>sum1){
        s="s2";
    }
    string temp=s;
    while(true){
        sum1+=u1;
        sum2+=u2;
        if(sum1==sum2){
            flag="YES";
            break;
        }
    if(sum1>sum2){
        temp="s1";
    }
    if(sum2>sum1){
        temp="s2";
    }
    if(temp!=s){
        break;
    }

    }
    }
    cout<<flag;
    return 0;
}
