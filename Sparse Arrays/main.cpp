#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int>ret;
    for(int i=0;i<queries.size();i++){
        int counter=0;
        for(int j=0;j<strings.size();j++){
            if(queries[i]==strings[j]){
                    counter++;
            }
        }
        ret.push_back(counter);
    }

    return ret;
}


int main()
{
   int n,q;
string temp="";

   cin>>n;
    vector<string> search;
    vector<string>query;
    for(int i=0;i<n;i++){
        cin>>temp;
        search.push_back(temp);
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>temp;
        query.push_back(temp);
    }
    vector<int>res=matchingStrings(search,query);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
}

