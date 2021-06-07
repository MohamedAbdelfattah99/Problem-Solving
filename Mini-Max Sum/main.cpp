#include <iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>arr;
    for(int i=0;i<5;i++){
            int num;
        cin>>num;
        arr.push_back(num);
    }
sort(arr.begin(), arr.end(), greater<int>());
int sum=0;
for(int i=0;i<4;i++){
    sum+=arr[i];
}
int sum2=0;
for(int i=0;i<5;i++){
        if(i!=0){
    sum2+=arr[i];
        }
}
cout<<sum2<<" " <<sum;
    return 0;
}
