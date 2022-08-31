//Div4 C problem : https://codeforces.com/problemset/problem/1722/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<string>> vect;
        map<string, int> mp;
        for (int i = 0; i < 3; i++)
        {
            vector<string> v;
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                v.push_back(s);
                mp[s]++;
            }
            vect.push_back(v);
        }

        int arr[3] = {0};

        for (int i = 0; i < 3; i++)
        {
            for (auto it : vect[i])
            {
                if (mp[it] == 2)
                {
                    arr[i] += 1;
                }
                else if (mp[it] == 1)
                {
                    arr[i] += 3;
                }
            }
        }
        cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    }
}
