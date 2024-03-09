#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <numeric>

using namespace std;

#define endl '\n'
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define fill(a, x) memset(a, x, sizeof(a))
#define MOD 1000000007
#define INF 1000000000
#define PI 3.1415926535897932384626433832795

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

void solve() {
    // Your code for each test case here
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>v;
    v.pb(0);
    int count=0;
    for(int i=0;i<n;){
        if(s[i]=='#' ){
            i++;
            continue;
        }
        while(s[i]=='.' && i<n){
                i++;
                count++;
            }
            v.pb(count);
            count=0;
    }
    sort(v.begin(),v.end());
    if(v.back()<3){
        cout<<accumulate(v.begin(),v.end(),0)<<endl;
    }
    else{
        cout<<2<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // Number of test cases
    int t;
    cin >> t;
    
    for (int tc = 1; tc <= t; ++tc) {
        solve();
    }

    return 0;
}