#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define REP(i, n)  FOR(i, 0, n)
#define ASC(c) sort((c).begin(), (c).end())
#define DESC(c) sort((c).begin(), (c).end(), greater<int>())

#define DUMP(x)  cerr << #x << " = " << (x) << endl;
#define DEBUG(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

typedef long long ll;
typedef unsigned long long ull;
struct edge { int u, v; ll w; };
 
ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int bfs(vector<string> &s, int x, int y) {
    int h = s.size(), w = s[0].size();
    vector<vector<int>> dist(h, vector<int>(w, -1));
    queue<pair<int, int>> que;

    int result = 0;
    que.push({x, y});
    dist[x][y] = 0;
    while(!que.empty()) {
        int x = que.front().first, y = que.front().second;
        que.pop();
        result = max(result, dist[x][y]);
        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir], ny = y + dy[dir];
            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (s[nx][ny] == '#') continue;
            if (dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                que.push({nx, ny});
            }
        }
    }
    return result;
}


int main() {
    int h, w; cin >> h >> w;
    vector<string> s(h);
    REP(i, h) cin >> s[i];

    int result = 0;
    REP(x, h) {
        REP(y, w) {
            if (s[x][y] == '#') continue;
            result = max(result, bfs(s, x, y));
        }
    }
    cout << result << endl;
}
