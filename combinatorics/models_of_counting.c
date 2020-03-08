// Factorial
int factorial(int n) {
    if (n == 0)
        return 1;
    
    return n * factorial(n-1);
}

// Sequence
int S(int n, int k) {
    if (k == 0)
        return 1;
    
    return n * S(n, k-1);
}

// Permutation P(n, k) = n!/(n-k)!
double P(int n, int k) {
    return (double)factorial(n) / (double)factorial(n-k);
}

// Multiset M(n-1+k, k) = (n-1+k)!/(n-1)!k!
double M(int n, int k) {
    return (double)factorial(n-1+k) / ((double)factorial(n-k) * factorial(k));
}

// Combination C(n, k) = n!/(n-k)!k!
double C(int n, int k) {
    return (double)factorial(n)/((double)factorial(n-k) * factorial(k));
}