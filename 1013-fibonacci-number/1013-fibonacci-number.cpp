class Solution {
public:
    int fibonacci(int n){
        if(n <= 1) return n;
        int last = fibonacci(n-1);
        int slast = fibonacci(n-2);
        return last + slast;
    }
    int fib(int n) {
        return fibonacci(n);
    }
};