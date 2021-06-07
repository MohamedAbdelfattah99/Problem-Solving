#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<int>arr;
   long n;
   cin>>n;
   for(int i=0;i<n;i++){
       int num=0;
       cin>>num;
       arr.push_back(num);
   }
   for(int i=0;i<n;i++){
       if(arr[i]<=37){
           continue;
       }
       int num=arr[i]%10;
       int def=5-num;
       int def2=10-num;
       if(def==1||def==2){
           arr[i]=arr[i]+def;
       }
       if(def2==1||def2==2){
        arr[i]+=def2;
       }
       else {
           continue;
       }
      }
      for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
      }

}
