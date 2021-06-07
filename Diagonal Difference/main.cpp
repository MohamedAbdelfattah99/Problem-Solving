#include <iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> arr;

int main()
{
    int n;
    cin>>n;
for(int i=0;i<n;i++){
    vector<int>vec;
    int num=0;
    for(int j=0;j<n;j++){
    cin>>num;
    vec.push_back(num);
    }
        arr.push_back(vec);

}
int sum1=0,sum2=0;
 for (int i = 0; i < n; i++) {
        for (int j = 0; j <n; j++){
                if(i==j){
                    sum1+=arr[i][j];
                }
                 if(i==n-j-1){
                    sum2+=arr[i][j];
                }

    }

 }
cout<<abs(sum1-sum2);
}


