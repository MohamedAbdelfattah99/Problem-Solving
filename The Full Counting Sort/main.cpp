#include <iostream>
#include <bits/stdc++.h>
#include <utility>

using namespace std;



int main()
{
        long long n;
        cin>>n;

        pair<long long, string> words[n];

       for(long long  i=0;i<n;i++){
       cin >> words[i].first >> words[i].second;

       }
        for(long long i=0;i<n/2;i++){
            words[i].second="-";
        }

    for (long long i = 0; i < n-1; i++) {

    for (long long j = 0; j < n-i-1; j++){
        if (words[j].first > words[j+1].first){
            long long temp=0;
            temp=words[j].first;
            words[j].first=words[j+1].first;
            words[j+1].first=temp;
            string tmp=words[j].second;
            words[j].second=words[j+1].second;
            words[j+1].second=tmp;
            }
    }
    }
     for(long long i=0;i<n;i++){
           cout<<words[i].second<<" ";
       }
       return 0;
}
