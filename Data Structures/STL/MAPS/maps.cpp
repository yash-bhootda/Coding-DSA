#define pb push_back
#define vi vector<int>
#define si stack<int>
#define vl vector<long long int>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define ll long long int
#define fo(a, b) for (auto i = a; i < b; ++i)
#define nfo(a, b) for (auto i = a; i < b; i--)
#define jfo(a, b) for (auto j = a; i < b; j++)
#define njfo(a, b) for (auto j = a; j < b; j--)
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    map<string, int> m;
    m["one"] = 1;
    m["two"] = 2;
    m["three"] = 3;

    map<string, int> :: iterator it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        ++it;
    }

    return 0;
}