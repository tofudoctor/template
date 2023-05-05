// string hash
// according to experience P = 131 || 13331 & mod 2^64 is best
// h -> 1 base
unsigned long long h[MXN], p[MNX];

// init
p[0] = 1;
for(int i = 0;i < n;i++){
    h[i + 1] = h[i] * P + str[i];
    p[i + 1] = p[i] * P;
}

// find
unsigned long long find(int l, int r){
    return h[r] - h[l - 1] * p[r - l + 1];
}