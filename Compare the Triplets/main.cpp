#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{

 int sum[2]= {0,0};

vector<int>alice;
vector<int>bob;
for(int i=0;i<3;i++){
    int num=0;
    cin>>num;
    alice.push_back(num);
}
for(int i=0;i<3;i++){
    int num=0;
    cin>>num;
    bob.push_back(num);
}
for(int i=0;i<3;i++){
    if(alice[i]>bob[i]){
            sum[0]++;
    }
    else if(bob[i]>alice[i]){
            sum[1]++;
    }

}
cout<<sum[0]<<" "<<sum[1];
return 0;
}
