ll inver(ll l, ll r, ll a[]){ // (l, r]
    if(r-l < 2) return 0;
    ll m = (l + r) >> 1;
    ll ans = inver(l, m, a)+ inver(m, r, a);
    ll tmp[r - l], k = 0, j = m;
    for (ll i = l; i < m;i++){
        while(j < r && a[i] > a[j]) tmp[k++] = a[j++];
        tmp[k++] = a[i];
        ans += j - m;
    }
    for (ll i = 0; i < k;i++) a[i + l] = tmp[i];
    return ans;
}