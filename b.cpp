#include <iostream>
using namespace std;

int func(int a, int b){
    return a + b;
}

int main(){
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "a + b = " << func(a, b);
    return 0;
}