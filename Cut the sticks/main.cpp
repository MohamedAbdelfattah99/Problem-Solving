#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
int get_min(vector<int>vec){
    int min=vec[0];
    for(int i=1;i<vec.size();i++){
        if(vec[i]<min&&vec[i]>0){
            min=vec[i];

        }
    }
return min;
}

void cut_sticks(vector<int>vec){
    int counter=vec.size();

   cout<<counter<<endl;
for(int i=0;i<vec.size();i++){

    int min=get_min(vec);
    for(int j=0;j<vec.size();j++){
    vec[j]=vec[j]-min;
    if(vec[j]==0){
            vec[j]=100000000000;
            counter--;
    }

    }
       if(counter<=0){
        break;
    }

    cout<<counter<<endl;
}


}
int main()
{
    vector<int>vec;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num=0;
        cin>>num;
        vec.push_back(num);
    }
    cut_sticks(vec);
    return 0;
}
