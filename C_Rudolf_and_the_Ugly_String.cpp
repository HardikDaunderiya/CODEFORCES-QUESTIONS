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
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int i=0;
    int count=0;
    while(i<n){
        if(s.substr(i,5)=="mapie"){
            i+=5;
            count++;
        }
        else if((s.substr(i,3)=="map" || s.substr(i,3)=="pie") && i<=n-3){
            i+=3;
            count++;
        }
        else {
            i++;
        }
    }
    cout<<count<<endl;
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