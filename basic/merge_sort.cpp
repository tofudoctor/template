void merge_sort(ll l, ll r, ll arr[]){ // (l, r]
    if(r - l < 2) return;
    ll m = (l+r)>>1;
    merge_sort(l, m, arr);
    merge_sort(m, r, arr);
    ll tmp[r-l], j = m, k = 0;
    for(ll i=l;i<m;i++){
        while(j<r && a[i]>a[j]) tmp[k++] = a[j++];
        tmp[k++] = a[i];
    }
    for(int i=0;i<k;i++) a[l+i] = tmp[i];
}