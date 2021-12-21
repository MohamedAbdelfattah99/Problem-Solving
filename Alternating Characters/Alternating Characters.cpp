#include <bits/stdc++.h>

using namespace std;


int alternatingCharacters(string s) {
    int counter=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            counter++;
        }
    }
    
    return counter;
}

int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++){ 
  string s;
  cin>>s;
  int res=alternatingCharacters(s);
  cout<<res<<endl;
   }
}

