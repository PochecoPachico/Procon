#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
struct edge { int u, v; ll w; };
 
ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

pair<ll, ll> div2(ll h, ll w) {
  if (h % 2 == 0 || w % 2 == 0) {
    return make_pair((h * w) / 2, (h * w) / 2);
  }
  ll x = max(h, w);
  ll y = min(h, w);

  return make_pair((x * y) / 2, (x / 2 + 1) * y);
}

int main() {
  ll H, W;
  ll min_diff = LONG_MAX;
  cin >> H >> W;
  
  if(H % 3 == 0 || W % 3 == 0) {
    cout << 0 << endl;
    return 0;
  }

  for(ll i = 1; i < H; i++) {
    ll S_max = 0, S_min = LONG_MAX;
    pair<ll, ll> S_div = div2(H - i, W);
    S_min = S_div.first; S_max = S_div.second;
    if(S_min > i * W) S_min = i * W;
    if(S_max < i * W) S_max = i * W;
    if(min_diff > S_max - S_min) min_diff = S_max - S_min;
    if(min_diff == 0) {
      cout << 0 << endl;
      return 0;
    }
  }

  for(ll i = 1; i < W; i++) {
    ll S_max = 0, S_min = LONG_MAX;
    pair<ll, ll> S_div = div2(H, W - i);
    S_min = S_div.first; S_max = S_div.second;
    if(S_min > i * H) S_min = i * H;
    if(S_max < i * H) S_max = i * H;
    if(min_diff > S_max - S_min) min_diff = S_max - S_min;
    if(min_diff == 0) {
      cout << 0 << endl;
      return 0;
    }
  }
  cout << min_diff << endl;
  return 0;
}
