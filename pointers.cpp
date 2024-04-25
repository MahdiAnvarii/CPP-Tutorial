#include <iostream>
#include <cstring>
using namespace std;

int main(){
    void* firstpointer = nullptr;

    int var1 = 8;
    void* ptr1 = &var1;
    cout << ptr1 << endl;
    double* ptr2 = (double*)&var1; //types does not matter
    cout << ptr2 << endl;   
    int* ptr3 = &var1;
    *ptr3 = 10;
    cout << var1 << endl;

    char* buffer = new char[8];
    memset(buffer, 5, 8);
    cout << static_cast<int>(*(buffer + 0)) << endl;
    delete[] buffer;
    cout << static_cast<int>(*(buffer + 0)) << endl;
}