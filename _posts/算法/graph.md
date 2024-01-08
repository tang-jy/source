---
title: 抽象图论
date: 2023-12-7
categories: 算法
---

###  拓扑排序

把每一个入度为零的点放入队列，然后访问这些点指向的点，将其入度--，当入度为零，就将其放入

​	



### tarjan

- **强连通分量**对于其内部的每两个点u,v ，始终保持有u-v和v-u的两条路径，在一个强连通分 量中，如果删去一个点(边)，这个强连通会分成两个或者更多个，我们称这个点(边)为割点(边)
- **双连通分量** 就是强连通分量乘以2,在一些网络方面的应用中，双连通分量代表更稳定的连接，
- $DFN$（时间戳）代表第几个被搜索到的。每个点的时间戳都不一样。
- $LOW$ 表示当前的连通分量中的祖宗(第一个被访问到的)是谁，
- $DAG$有向无环图

`````c++
struct SCC{
    vector<vector<int> > g, scc;
    vector<int> dfn, low, stk, id;
    vector<bool> ins;
    int ts, n;

    SCC(const vector<vector<int> > &g) : g(g){
        n = (int)g.size();
        dfn.assign(n, 0);
        low.assign(n, 0);
        id.assign(n, -1);
        ins.assign(n, false);
        stk.reserve(n);
        ts = 0;
        build();
    }

    void tarjan(int u){
        dfn[u] = low[u] = ++ts;
        stk.push_back(u);
        ins[u] = 1;
        for(auto j : g[u]){
            if (!dfn[j]){
                tarjan(j);
                low[u] = min(low[u], low[j]);
            }
            else if (ins[j]) low[u] = min(low[u], dfn[j]);
        }
        if (dfn[u] == low[u]){
            int scc_cnt = scc.size();
            scc.push_back({});
            int y;
            do{
                y = stk.back();
                stk.pop_back();
                id[y] = scc_cnt;
                ins[y] = 0;
                scc.back().push_back(y);
            }while(y != u);
        }
    }

    void build(){
        for(int i = 0; i < n; i++){
            if (!dfn[i]){
                tarjan(i);
            }
        }
    }
};

`````



####  缩点

缩点，就是把一张有向有环图中的环缩成一个个点，形成一个有向无环图。

````c++
 	

````



### 邻接表

```
int w[i]//第 i 条边的权值
int to[i]//第 i 条边的终点
int nxt[i]//下一条的边的编号，不建议叫 next，会挂
int head[i]//以 i 为起始点的第一条边
int tot//边的编号

void add(int x,int y,int z){
    tot++;//新边的编号
    to[tot]=y;//新一条边的信息
    w[tot]=z;
    nxt[tot]=head[x];
    head[x]=tot;//更新以 x 为起始点的第一条边
}
//这样是单向边，双向边要再来一次
```

### DSU 

```
struct  dsu{
    vector <int> m,size;
    dsu(int n):m(n+1),size(n+1,1){iota(m.begin(),m.end(),0);}
    //下标从 1 开始
    int find(int x){
        while(x!=m[x]) x=m[x]=m[m[x]];
        return x;
    }
    bool same(int x,int y){return find(m[x])==find(m[y]);}
    bool merge(int x,int y){
        x=find(x),y=find(y);
        if(x == y) return false;
        size[x]+=size[y];
        m[y]=x;
        return true;
    }
    int get_size(int x){
        return size[find(x)];
    }
};
```



