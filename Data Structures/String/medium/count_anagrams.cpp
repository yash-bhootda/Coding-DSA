#define pb push_back
#define vi vector<int>
#define si stack<int>
#define vl vector<long long int>
#define pi pair<int, int>
#define pl pair<ll,ll>
#define ll long long int
#define fo(a,b) for(auto i=a;i<b;++i)
#define nfo(a,b) for(auto i=a;i<b;i--)
#define jfo(a,b) for(auto j=a;i<b;j++)
#define njfo(a,b) for(auto j=a;j<b;j--)
#include<iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int countAnagrams(string s) 
{
    string word = "";
    vi v;
    fo(0,s.length())
    {
        if(s[i]=" ")
        {
            v.pb(word);
            word="";
        }
        word=word+s[i];
    }
    for(0,v)
    {
        
    }
}
int main()
{

    return 0;
}