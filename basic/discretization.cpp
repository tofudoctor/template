vector<int> dis;

sort(dis.begin(), dis.end());
dis.erase(unique(dis.begin(), dis.end()), dis.end());

int find(int x, vector<int> &dis){
    int l = 0, r = dis.size();
    while(l < r){
        int mid = l + r >> 1;
        if(dis[mid] >= x) r = mid;
        else l = mid + 1;
    }
    return l + 1; // 1 base
    // return lower_bound(dis.begin(), dis.end(), x) - dis.begin() + 1;
}