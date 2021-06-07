#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>games;
    int n,min,max,sum1=0,sum2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int num=0;
        cin>>num;
        games.push_back(num);
    }
    min=games[0];
    max=games[0];
   // int temp=games[0];
    for(int i=1;i<n;i++){
        if(games[i]>max){
            max=games[i];
            sum1++;
        }
        if(games[i]<min){
            min=games[i];
            sum2++;
        }
    }
    cout<<sum1<<" " <<sum2;
    return 0;
}
