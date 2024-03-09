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

void ans (ll n,ll sum){
    if(n==0){
        return ;
    }
    if(n>=15){
        n=n-15;
        sum++;
        ans(n,sum);
    }
    if(n<15 && n>=10){
        n=n-10;
        sum++;
        ans(n,sum);;
    }
    if(n<10 && n>=6){
        n=n-6;
        sum++;
        ans(n,sum);
    }
    if(n<6 && n>=3){
        n=n-3;
        sum++;
        ans(n,sum);
    }
    if(n<3 && n>=1){
        n=n-1;
        sum++;
        ans(n,sum);
    }
    
    return;
}
void solve() {
    // Your code for each test case here
    ll n;
    cin>>n;
    ll sum=0;
    ans(n,sum);
    cout<<sum<<endl;
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