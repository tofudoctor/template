ll qpow(int a, int k, int p){
    ll res = 1;
    while(k){
        if(a & 1) res = res * a % p;
        k >>= 1;
        a = (ll)a * a % p;
    }

    return res;
}