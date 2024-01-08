---
title: 高级数据结构
date: 2023-12-7
categories: 算法
---
### 线段树

#### 线段树维护字符串哈希

````c++
#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define xx first
#define yy second
#define endl "\n"
#define lowbit(x) x & (-x)
#define int long long
#define ull unsigned long long
#define pb push_back
typedef pair<int, int> PII;
typedef pair<double, double> PDD;
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define Ysanqian ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
const int N = 1e6 + 10, M = 1010, inf = 0x3f3f3f3f, mod = 1e9 + 7, P = 13331;
const double eps = 1e-8;
char s[N];
int n, q;
int p[N];
struct node
{
  int l, r;
  int len;
  int hash1, hash2;
} tr[N << 2];
void init()
{
  p[0] = 1;
  for (int i = 1; i <= n; i++)
    p[i] = p[i - 1] * P % mod;
}
int qpow(int a, int b)
{
  int res = 1;
  while (b)
  {
    if (b & 1)
      res = res * a % mod;
    a = a * a % mod;
    b >>= 1;
  }
  return res;
}
void pushup(node &u, node &l, node &r)
{
  u.hash1 = (l.hash1 + r.hash1) % mod;
  u.hash2 = (l.hash2 + r.hash2) % mod;
}
void pushup(int u)
{
  pushup(tr[u], tr[u << 1], tr[u << 1 | 1]);
}
void build(int u, int l, int r)
{
  tr[u] = {l, r, r - l + 1, 0, 0};
  if (l == r)
  {
    tr[u] = {l, r, 1, (int)s[l] * p[n - l], (int)s[r] * p[r - 1]};
    return;
  }
  int mid = l + r >> 1;
  build(u << 1, l, mid);
  build(u << 1 | 1, mid + 1, r);
  pushup(u);
}
void modify(int u, int x, int k)
{
  if (tr[u].l == x && tr[u].r == x)
  {
    tr[u].hash1 = k * p[n - x] % mod;
    tr[u].hash2 = k * p[x - 1] % mod;
    return;
  }
  int mid = tr[u].l + tr[u].r >> 1;
  if (x <= mid)
    modify(u << 1, x, k);
  else
    modify(u << 1 | 1, x, k);
  pushup(u);
}
int query1(int u, int l, int r)
{
  if (tr[u].l >= l && tr[u].r <= r)
    return tr[u].hash1;
  else
  {
    int res = 0;
    int mid = tr[u].l + tr[u].r >> 1;
    if (r > mid)
      res += query1(u << 1 | 1, l, r);
    if (l <= mid)
      res += query1(u << 1, l, r);
    return res % mod;
  }
}
int query2(int u, int l, int r)
{
  if (tr[u].l >= l && tr[u].r <= r)
    return tr[u].hash2;
  int res = 0;
  int mid = tr[u].l + tr[u].r >> 1;
  if (l <= mid)
    res += query2(u << 1, l, r);
  if (r > mid)
    res += query2(u << 1 | 1, l, r);
  return res % mod;
}
void solve()
{
  cin >> n >> q;
  for (int i = 1; i <= n; i++) cin >> s[i];
  init();
  build(1, 1, n);
  while (q--)
  {
    int op;
    cin >> op;
    if (op == 2)
    {
      int l, r;
      cin >> l >> r;
      int x = query1(1, l, r);
      int y = query2(1, l, r);
      x = (x * qpow(p[n - r], mod - 2)) % mod;
      y = (y * qpow(p[l - 1], mod - 2)) % mod;
      // cout << x << ' ' << y << endl;
      if (x == y)
        cout << "Yes" << endl;
      else
        cout << "No" << endl;
    }
    else
    {
      int x;
      char k;
      cin >> x >> k;
      modify(1, x, (int)k);
    }
  }
}
signed main()
{
  Ysanqian;
  int T;
  T = 1;
  // cin >> T;
  while (T--)
    solve();
  return 0;
}
````







