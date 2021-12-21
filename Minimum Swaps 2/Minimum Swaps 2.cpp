#include <bits/stdc++.h>
#include <vector>
using namespace std;


int minimumSwaps(vector<int> arr,int n) {
    int counter=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            counter++;
            swap(arr[i],arr[arr[i]-1]);
            i--;
        }
        
    }
    
    return counter;

}

int main()
{
   vector <int>vec;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       int num;
       cin>>num;
       vec.push_back(num);
   } 
   int res=minimumSwaps(vec,  n);
   cout<<res;
   
}
