// a * x 同餘 1 (mod p)

// by qpow
if(a % p == 0) cout << "NO";
else cout << qpow(a, p - 2, p);