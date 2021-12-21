#include <bits/stdc++.h>
#include<iostream>
#include <vector>
#include <iterator>
#include <map>
using namespace std;

 char sym[7]={'I', 'V', 'X', 'L', 'C', 'D', 'M'};

int saerch(char c){
    for(int i=0;i<7;i++){
        if(c==sym[i]){
            return i;
             break;
        }
    }
    return 0 ;
}




int main()
{
    /*
        for(int i=0;i<s.size();i++){
            int index=saerch(s[i]);
            int index2=saerch(s[i+1]);
            if(index>=index2){

                output+=value[index];
            }
            else{
                //MCMXCIV
                i++;
                int def=(value[index2]-value[index]);
                output+=def;
            }
            cout<<" "<<output<<" ";


        }*/

        int value[7]={1,5,10,50,100,500,1000};

        
        string s;
        cin>>s;
        int output=0;
        
        int i=0;
        while (true){
            if(i==s.size()){
                break;
            }
         int index=saerch(s[i]);
            int index2=saerch(s[i+1]);
            if(index>=index2){

                output+=value[index];
            }
            else{
                            i++;

                int def=(value[index2]-value[index]);
                output+=def;
            }
                        i++;


        }
       
        
        cout<<output;
    
   
}