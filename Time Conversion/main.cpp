#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,s;
    char c,t;
    cin>>h>>c>>m>>c>>s>>t;
    if((t=='A'||t=='PM')&&h==12){
        h=0;
    }
    if(t=='P'&&h!=12){
        h+=12;
    }

stringstream ss,bb,aa;
ss << h;
string hh = ss.str();
bb<<m;
string mm=bb.str();
aa<<s;
string sc=aa.str();
string ansh="0",ansm="0",anss="0";
if(hh.size()==1){
     ansh+=hh;
}
else
    ansh=hh;

if(mm.size()==1){
    ansm+=mm;
}
else
    ansm=mm;

if(sc.size()==1){
    anss+=sc;
}
else
    anss=sc;


    cout<<ansh<<c<<ansm<<c<<anss;

    return 0;
}
