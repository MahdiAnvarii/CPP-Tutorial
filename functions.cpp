#include <iostream>
using namespace std;

int multiply(int a , int b){
    return a*b;
}

void hello(){
    cout << "Wellcome to Functions" << endl;
}

void HelloAndMultiply(int a , int b){
    cout << multiply(a,b) << endl;
    hello();
}

int main(){
    int a;
    cin >> a;
    int b;
    cin >>b;
    HelloAndMultiply(a,b);

    int c;
    cin >> c;
    int d;
    cin >>d;
    HelloAndMultiply(c,d);
}
