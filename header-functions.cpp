#include <iostream>
#include "header.h"
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
