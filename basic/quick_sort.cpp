void quick_sort(ll l, ll r, ll arr[]){ // (l, r]
    if (r - l < 2) return;
    ll x = arr[(l + r) >> 1], i = l - 1, j = r;
    while (i < j){
        do i++; while (arr[i] < x);
        do j--; while (arr[j] > x);
        if (i < j) swap(arr[i], arr[j]);
    }
    quick_sort(l, i, arr);
    quick_sort(i, r, arr);
}