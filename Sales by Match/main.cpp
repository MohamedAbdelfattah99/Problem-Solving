#include <iostream>
#include<vector>
using namespace std;

int main()
{   int n=0;
    int arr[n];
    int freq[10000];
     int size=10000;
    for(int i=0;i<size;i++){
        freq[i]=0;
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int res=0;
    for(int i=0;i<size;i++){
            if(freq[i]>=1){
        freq[i]=freq[i]/2;
            }


    }
    for(int i=0;i<size;i++){
        if(freq[i]>=1){
            res+=freq[i];
        }
    }
    cout<<res;
    return 0;
}
