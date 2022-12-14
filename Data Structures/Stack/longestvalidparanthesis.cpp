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
int longestValidParentheses(string s)
{
    si  st;
    int count=0;
    st.push(-1);
    int n=s.size();
    fo(0,n)
    {
        if(s[i]=='(')
        {
            st.push(i);
        }
        if(s[i]==')')
        {
            st.pop();
            count=max(count , i - st.top());
        }
    }
    return count;

}
int main()
{
    string s;
    cin>>s;
    int c  =longestValidParentheses(s);
    cout<<c;
    return 0;
}