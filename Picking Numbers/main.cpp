#include <iostream>
#include<vector>
#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int picking_numbers(vector<int>& arr)
{
    sort(arr.begin(),arr.end());

    int result = 0;
    int counter = 1;
    int first = arr[0];

    for (int i=1; i<arr.size(); ++i)
    {
        if (abs(first-arr[i])<=1)
        {
            counter++;
        }
        else
        {
            if (counter>result)
            {
                result=counter;
            }
            counter=1;
            first=arr[i];
        }
    }

    if (counter>result)
    {
        result=counter;
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0; i<n; i++)
    {
        int num=0;
        cin>>num;
        arr.push_back(num);
    }
    int res = picking_numbers(arr);
    cout <<res;
    return 0;
}
