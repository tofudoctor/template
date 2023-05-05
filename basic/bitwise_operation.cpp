// find kth bit in x
x >> k & 1;

// decimal to binary
for(int i = __lg(x);i >= 0;i--) cout << (x >> i & 1);

// find last 1 in x 
x & -x;