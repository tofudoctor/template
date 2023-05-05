// |a| < |b|
int f[MXN];

// find f[]
f[0] = -1;
for(int i = 1, j = -1;i < a.size();i++){
    while(j != -1 && a[i] != a[j + 1]) j = f[j];
    if(a[i] == a[j + 1]) j++;
    f[i] = j;
}

// find a in b    
for(int i = 0, j = -1;i < b.size();i++){
    while(j != -1 && b[i] != a[j + 1]) j = f[j];
    if(b[i] == a[j + 1]) j++;
    if(j == a.size() - 1){
        j = f[j];
        // do sth
    }
}