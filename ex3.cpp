#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string dig(int num){
    for(int i = 2; i < floor(pow(num, 0.5)) + 1; i++){
            if (num % i == 0){
                return "NO";
            }
    }
    return "YES";

}

int main(){
    int num;
    cin >> num;
    cout << dig(num);
}