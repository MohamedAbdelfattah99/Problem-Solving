#include <iostream>
#include <bits/stdc++.h>

#include<vector>
using namespace std;

int main()
{
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num=0;
        cin>>num;
        arr.push_back(num);
    }
    int sum=0;
    bool flag=false;
    for(int i=0;i<n;i++){
//        if(i!=0){
//        if(sum%2!=0){
//            sum=sum/2+1;
//            }}
      for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            sum++;
        }

      }

    }

    cout<<sum/2;
    return 0;
}
