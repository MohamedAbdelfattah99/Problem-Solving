#include <iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int num=0;
        cin>>num;
        arr.push_back(num);
    }
    int freq[n];
    for(int i=0; i<n; i++)
    {
        freq[i]=0;
    }
    int sum=0;
    int min=arr[0];
    int max=freq[0];
    for(int i=0; i<n; i++)
    {
        freq[arr[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        if(freq[i]>max)
        {
            max=freq[i];
            if(min<i)
            {
                min=i;
            }
        }
    }
    cout<<min;
    return 0;
}
