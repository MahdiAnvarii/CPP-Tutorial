#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x = 8;
    cout << "x = " << x << endl;
    int y = 3;
    cout << "x = " << y << endl;
    int z = x + y;
    cout << "x + y = " << z << endl; 
    z = x - y;
    cout << "x - y = " << z << endl;   

    cout << "x * y = " << x * y << endl;
    cout << "x // y = " << x / y << endl;
    
    double xx = x;
    double zz = xx / y;
    cout << "x / y = " << zz << endl;

    cout << "x % y = " << x % y << endl;

    x = x + 6;
    x--; // x = 13
    cout << "x = " << x << endl;

    int z1 = x++;
    int z2 = ++x;
    cout << "z1 = " << z1 << endl; // z1 = 13
    cout << "z2 = " << z2 << endl;

    double flr = floor(1.2);
    cout << flr << endl;

    double power = pow(2,3);
    cout << power << endl;
    
    return 0;
}
