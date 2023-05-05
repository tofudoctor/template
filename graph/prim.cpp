int prim(){
    memset(dis, 0x3f, sizeof(dis));

    int res = 0;
    for(int i = 0;i < n;i++){
        int t = -1;
        for(int j = 0;j < n;j++)
            if(!ch[j] && (t = -1 || dis[j] < dis[t]))
                t = j;

        if(i && dis[t] == INF) return INF;
        if(i) res += dis[t];
        ch[t] = ture;

        for(int j = 0;j < n;j++) dis[j] = min(dis[j], g[t][j]);
    }

    return res;
}