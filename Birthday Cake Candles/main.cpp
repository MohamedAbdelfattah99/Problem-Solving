#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<long>arr;
     long n;
    cin>>n;
    for(long i=0;i<n;i++){
        int num=0;
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end(),greater<long>());
    long sum=0;
    for(long i=0;i<arr.size();i++){
        if(arr[0]==arr[i]){
            sum++;
        }
    }
    cout<<sum;
    return 0;
}
