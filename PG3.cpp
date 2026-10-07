#include<iostream>
using namespace std;
void mySwap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 10, y = 20;
    cout << "Before : x=" << x << " y=" << y << endl;
    mySwap(x,y);
    cout << "After : x=" << x << " y=" << y << endl;
    return 0;
    }