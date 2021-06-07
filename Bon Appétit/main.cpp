#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr;
    int n,k,b;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int num=0;
        cin>>num;
        arr.push_back(num);
    }

    cin>>b;
    int sum=0;
    for(int i=0;i<n;i++){
        if(i!=k){
            sum+=arr[i];
        }
    }
    sum=sum/2;

  if(b>sum){
       cout<<b-sum;
   }
   else{
       cout<<"Bon Appetit";
   }
    return 0;
}
