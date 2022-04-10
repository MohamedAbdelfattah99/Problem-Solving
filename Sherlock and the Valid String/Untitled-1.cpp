#include <bits/stdc++.h>

using namespace std;
int freq[26];

string isValid(string s) {
  
    for(int i=0;i<s.size();i++){
        char c=s[i];
        int index=c-97;
        freq[index]++;
    }
    int counter=0;
    vector<int>vec;
     bool flag=false;
    int num;

    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            if(flag==false){
                num=freq[i];
                flag=true;
            }
         counter=counter+(abs(num-freq[i]));
      // cout<<freq[i];
        }
    }
   

     if(counter>1){
            return "NO";
        }
    return "YES";
}

int main()
{
  string s;
 cin>>s;
  string res=isValid(s);
  cout<<res;



}
