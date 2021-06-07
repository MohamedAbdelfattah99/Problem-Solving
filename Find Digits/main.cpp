#include <bits/stdc++.h>

using namespace std;


int main()
{
    vector<int>ans;
 int n;
 cin>>n;
 for(int i=0;i<n;i++){
     int num=0;
     cin>>num;
     int temp=num,counter=0;
       while(temp!=0){
            int temp2 = temp % 10;
            if(temp2!=0 &&num%temp2==0)
            {
                counter++;
            }
            temp/=10;
        }
        ans.push_back(counter);
    }

for(int i=0;i<ans.size();i++){

    cout<<ans[i]<<endl;
}

}
