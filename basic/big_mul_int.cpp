vector<int> mul(vector<int> &A, int b){
    vector<int> C;
    for(int i = 0, t = 0;i < A.size() || t;i++){
        if(i < A.size()) t += A[i] * b;
        C.push_back(t % 10);
        t /= 10;
    }
    while(C.size() > 1 && C.back() == 0) C.pop_back();
    return C;
}