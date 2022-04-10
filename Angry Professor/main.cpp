#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


string angryProfessor(int k, vector<int> a) {
        
        int counter=0;
      for (int i=0;i<a.size();i++){
          if(a[i]<=0){
              counter++;
          }
      }  
      
      if(counter >=k){
          return "NO";
      }
    return "YES";
}

int main()
{
    int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++){
        vector<int>a;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            int num=0;
            cin>>num;
            a.push_back(num);
        }
        string res=angryProfessor(k,a);
        cout<<res<<endl;
    }
    return 0;
}



