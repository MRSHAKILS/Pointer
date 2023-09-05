#include<iostream>
using namespace std;

int main(){
    int x=5;

    int* p;

    p = &x;

    cout << x << endl; //x value
    cout << &x << endl; // x variables address
    cout << p << endl; // pointer stores another variables address
    cout << *p << endl; // *p prints pointed variables address
    cout << &p << endl; // &p prints p's address





    return 0;
}
