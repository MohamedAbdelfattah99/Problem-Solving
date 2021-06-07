#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>set1;
    vector<int>set2;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n+m;i++){
        int num=0;
        cin>>num;
        set1.push_back(num);
    }
    int sum=0;
    int z=0;
    for(int i=0;i<96;i++){
    for(int j=0;j<m+n;j++){
        if(i%set1[j]==0||set1[j]%i==0){
            sum++;

        }
        else{

        break;
        }

    }
    }

    cout<<z;
    return 0;
}
