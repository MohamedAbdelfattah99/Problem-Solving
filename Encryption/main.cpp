#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    #include <bits/stdc++.h>

using namespace std;
int main(){
    string str;
    cin >> str;
    int n = str.size();
    int row = round(sqrt(n));
    int col=0;
    if (row >= sqrt(n)) {
    col = row;
    }
     else{
      col = row + 1;
     }
    for(int i=0;i<col;i++) {
        for(int j=i; j<n;j+=col)
        {cout << str[j];
        }
        cout << ' ';
    }
    return 0;
} 0;
}
