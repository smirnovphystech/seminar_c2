#include <iostream>

using namespace std;

int fib(int n){
    int fn, fn1, fn2;
    fn1 = 1;
    fn2 = 1;
    fn = fn1 + fn2;
    for(int i = 0; i<n-3; i++){
        fn1 = fn2;
        fn2 = fn;
        fn = fn1 + fn2;
    }
    return fn;
}

int main(){
    int n;
    cin >> n;

    if (n == 1 || n==2) {
        cout << 1;
    }
    else{
        int res = fib(n);
        cout << res;
    }

    return 0;
}