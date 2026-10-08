#include <iostream>
using namespace std;

int sum_func(int a, int b){
    return a + b;
}

int abstract_func(int a, int b){
    return a - b;
}

int main(){
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "a + b = " << sum_func(a, b);
    cout << "a - b = " << abstract_func(a, b);
    return 0;
}
