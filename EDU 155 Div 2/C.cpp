#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 998244353;

void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    int count = 0;
    for(int i = 1;i<n;i++)
    {
        if(s[i] == s[i-1]) count++;
    }
    int sub_count = 1;
    for(int i = count+1;i>=1;i--)
        sub_count= ((sub_count%mod)*(i%mod))%mod;
    cout<<count<<" "<<sub_count<<"\n";

}

int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}