#include <bits/stdc++.h>
#include <string>
using namespace std;

vector<string>names;
vector<string>partials;
vector<int>result;

vector<int> contacts(string key) {
    //cout<<names.size();
    int counter=0;
    for(int i=0;i<names.size();i++){


           bool flag=true;
           string temp=names[i];
           for(int j=0;j<key.size();j++){
               if(flag==true){
               if(temp[j]==key[j]){
                   flag=true;
               }
               else{
                   flag=false;
                   break;
               }
               }
           }
           if(flag==true){
               counter++;
           }
           }

                                       result.push_back(counter);
    

        
    


    return result;
}


int main()
{
       int n;
    cin>>n;
    int addcounter=0;
    int findcounter=0;
    string add="add";
    string find="find";
    for(int i=0;i<n;i++){
        string temp1;
        string temp2;
        cin>>temp1>> temp2;
        if(temp1=="add"){
            names.push_back(temp2);
        } 
        if (temp1=="find"){
           contacts(temp2);


        }
        
   }
   for(int i=0;i<result.size();i++){
       cout<<result[i]<<endl;


    }
    
  
    
 
}
