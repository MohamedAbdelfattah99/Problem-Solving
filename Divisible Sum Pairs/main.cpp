#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr;
        int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
     int num=0;
     cin>>num;
     arr.push_back(num);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])%m==0){
                sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}
