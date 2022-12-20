// https://codeforces.com/problemset/problem/1774/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = count(s.begin(),s.end(),'1');
        c = c/2;
        for(int i=1;i<s.size();i++)
        {
            if(s[i] == '1')
            {
                if(c>0)
                {
                    cout << "-";
                    c--;
                }
                else
                {
                    cout << "+";
                }
            }
            else
            {
                cout << "+";
            }
        }
        cout << endl;
    }
    
}