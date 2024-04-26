#include <iostream>
#define print(x) std::cout << x << std::endl;

void increment(int* value){
    (*value)++;
}

void incrementByRef(int& value){
    value++;
}

int main(){
    int a = 5;
    int& ref = a;
    ref = 2;
    print(a);

    increment(&a);
    print(a);

    incrementByRef(a);
    print(a);

    int b = 8;
    int* ptr = &a;
    *ptr = 17;
    ptr = &b;
    *ptr = 21;
    print(a);
    print(b);
}