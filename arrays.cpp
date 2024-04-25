#include <iostream>
#include <array>
using namespace std;

int main(){
    int example[5];
    example[0] = 8;
    example[4] = 2;
    cout << example << endl;
    cout << example[0] << endl;
    cout << example[3] << endl;

    for (int i = 0; i<5; i++){
        example[i] = i+2;
    }
    int* ptr = example;
    example[2] = 5;
    *(ptr + 3) = 9;

    cout << "------------------------" << endl;
    for (int i = 0; i<5; i++){
        cout << example[i] << endl;
    }

    int* another = new int[5];
    for (int i = 0; i<5; i++){
        another[i] = 2;
    }
    cout << "Size of my array is: "<< sizeof(example) / sizeof(int) << endl;
    cout << sizeof(another) << endl;
    delete[] another;

    static const int size = 3;
    int array[size];

    std::array<int, 6> example2;
    cout << example2.size() << endl;
}