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
class Solution
{
public:
    // bool yrb(int start , int end , int count , int k )
    // {
    //     return end+1-start-count<=k;
    // }
    // int characterReplacement(string s, int k)
    // {
    //     unordered_map<char , int> m;
    //     fo(0,s.length())
    //     {
    //         m[s[i]]++;
    //     }
    //     unordered_map<char , int> :: iterator it;
    //     int lmax=0;
    //     for(it =m.begin();it!=m.end();it++)
    //     {
    //         char a = it->first;
    //         int start=0;
    //         int count=0;
    //         for(int i =0;i<s.length();i++)
    //         {
    //             if(a==s[i])
    //             {
    //                 count++;

    //             }
    //             while(!yrb(start , i , count , k ))
    //             {
    //                 if(a==s[start])
    //                 {
    //                     count--;
    //                 }
    //                 start++;
    //             }
    //             lmax=max(lmax , i+1-start);

    //         }

    //     }
    //     return lmax;
    // }
    map<char, int> mp;
    int maxcount = 0;
    int ans = 0;
    int l = 0;
    int i = 0;
    while (i < s.size())
    {
        mp[s[i]]++;
        maxcount = max(mp[s[i]], maxcount);
        if (i - l - maxcount > k - 1)
        {
            mp[s[l]]--;
            l++;
        }
        ans = max(ans, i - l + 1);
        i++;
    }

    return ans;
};