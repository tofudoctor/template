// spfa shortest path
int spfa(int st, int ed){
    memset(dis, 0x3f, sizeof dis);
    dis[st] = 0;
    queue<int> q;
    q.push(st);
    ch[st] = true;

    while(!q.empty()){
        int p = q.front();
        q.pop();
        ch[p] = false;

        for(auto it : g[p]){
            int son = it.first, w = it.second;
            if(dis[son] > dis[p] + w){
                dis[son] = dis[p] + w;
                if(!ch[son]){
                    ch[son] = true;
                    q.push(son);
                }
            }
        }
    }

    return dis[ed];
}

// check negetive loop
bool spfa(){
    memset(dis, 0x3f, sizeof dis);
    dis[0] = 0;
    queue<int> q;
    q.push(0);
    ch[0] = true;

    while(!q.empty()){
        int p = q.front();
        q.pop();
        ch[p] = false;

        for(auto it : g[p]){
            int son = it.first, w = it. second;
            if(dis[son] > dis[p] + w){
                dis[son] = dis[p] + w;
                cnt[son] = cnt[p] + 1;

                if(cnt[son] >= n) return true;
                if(!ch[son]){
                    ch[son] = true;
                    q.push(son);
                }
            }
        }
    }

    return false;
}