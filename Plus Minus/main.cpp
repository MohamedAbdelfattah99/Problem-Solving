#include <iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<double>arr;
    double n;
    cin>>n;
    for(int i=0;i<n;i++){
            double num=0;
            cin>>num;
            arr.push_back(num);
    }
    int sump=0,sumn=0,sumz=0;
    for(int i=0;i<n;i++){
            if(arr[i]==0){
                sumz++;
            }
            else if(arr[i]>0){
                sump++;
            }
            else{
                sumn++;
            }
    }

      cout << showpoint <<setprecision(6)<< sump/n <<endl;
    cout << showpoint<<setprecision(6)<< sumn/n <<endl;
    cout << showpoint << setprecision(6)<< sumz/n <<endl;
    return 0;
}
