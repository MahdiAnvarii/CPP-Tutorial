#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int arr[x] = {1,2,3,4,5};
    cout << arr << endl;
    cout << arr[3] << endl;
    cout << sizeof(arr) << endl;
    arr[3] = 11;

    string arr2[] = {"mahdi","mamad","jafar"};
    cout << sizeof(arr2) / sizeof(arr2[0]) << endl;
    cout << sizeof(arr2) << endl;
    cout << sizeof(arr2[0]) << endl;
}