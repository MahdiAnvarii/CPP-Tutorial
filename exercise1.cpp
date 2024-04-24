#include <iostream>
using namespace std;

int main(){
    int a=1;
    int b=2;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;   
    return 0;
}
