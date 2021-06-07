#include <iostream>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    vector<string>st;
    int n,a,b,c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        cin>>b;
        cin>>c;
        if(abs(c-a)<(abs(c-b))){
            st.push_back("Cat A");
        }
        else if(abs(c-b)<abs(c-a)){
            st.push_back("Cat B");
        }
        else if(abs(c-b)==abs(c-a)){
            st.push_back("Mouse C");
        }
    }
    for(int i=0;i<n;i++){
        cout<<st[i]<<endl;
    }
    return 0;
}
