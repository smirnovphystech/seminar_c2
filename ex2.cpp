#include <iostream>
#include <string>

using namespace std;

string reversed(string num){
    string newnum;
    for(int i = num.size(); i>=0; i--){
        newnum += num[i];
    }
    return newnum;
}

int main(){
    string num;
    cin >> num;

    cout << reversed(num);
}