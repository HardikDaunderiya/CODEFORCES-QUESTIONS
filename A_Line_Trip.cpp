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

void solve() {
    // Your code for each test case here
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cr1=(arr[0]-0);
    int cr2=2*(x-arr[n-1]);
    int maxa=0;
    int check=maxa;
    for(int i=0;i<n-1;i++){
        maxa=arr[i+1]-arr[i];
        check=max(maxa,check);
    }
    int ans2=max(check,cr1);
    int ans =max(cr2,ans2);
    cout<<ans<<endl;
    return;

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