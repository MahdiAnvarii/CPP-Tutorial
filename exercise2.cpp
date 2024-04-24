#include <iostream>
using namespace std;

int main(){
    cout << "Enter your fahrenheit temperature: " << endl;
    
    double temp;
    cin >> temp;

    double celsius;
    celsius = (temp - 32) / 1.8;
    cout << "Your temperature is " << celsius << " celsius" << endl;

    return 0;
}