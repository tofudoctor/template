int match[N];
bool ch[N];

bool find(int x){
    for(auto it : g[x]){
        if(!ch[it]){
            ch[it] = true;
            if(match[it] == 0 || find(match[it])){
                match[it] = x;
                return true;
            }
        }
    }

    return false;
}

// in main
int ans = 0;
for(int i = 0;i < n1;i++){
    memset(ch, 0, sizeof(ch));
    if(find(i)) ans++;
}
cout << ans;