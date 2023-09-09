#include <iostream>

using namespace std;

int fib(int n){
    int fn, fn1, fn2;
    fn1 = 1;
    fn2 = 1;
    fn = fn1 + fn2;
    for(int i = 0; i<n-3; i++){
        fn2 = fn1;
        fn1 = fn;
        fn = fn1 + fn2;
    }
    return fn;
}

int main(){
    for(int n = 1; n<15; n++){
        if (n == 1 || n==2) {
            cout << n << ":" << 1 << endl;
        }
        else{
            int res = fib(n);
            cout << n << ":" << res << endl;
        }
    }
    return 0;
}