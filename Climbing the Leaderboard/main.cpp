#include <iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

void get_rank(vector<long long>sco,vector< long long>alic){
    for( long i=0;i<alic.size();i++){
            sco.push_back(alic[i]);
            sort(sco.begin(),sco.end(),greater<long long>());
                for( long j=0;j<sco.size();j++){
                    if(alic[i]==sco[j]){
                        cout<<j+1<<endl;
                        break;

                    }
                }
        }


}


int main()
{
    vector< long long >scores;
    vector< long long>alice;
     long long n,m,old_num=0;
    cin>>n;
    for( long i=0;i<n;i++){
         long num=0;
        cin>>num;
        if(i==0){
            scores.push_back(num);
            old_num=num;
            continue;
        }
        if(num!=old_num){
            scores.push_back(num);
            old_num=num;
        }

}
    cin>>m;
    for( long i=0;i<m;i++){
             long long num=0;
    cin>>num;
        alice.push_back(num);
    }
    get_rank(scores,alice);

    return 0;
}
