#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i<5 ; i++){
        cout << "hello wordl" << endl;
        cout << i << endl;
    }

    int cond = 8;
    while (cond > 5){
        cout << "bye world" << endl;
        if (cond == 7){
            cout << "Thats it" << endl;
        }
        cond --;
    }

    bool condition = false;
    do{
        cout << "A or a" << endl;
    } while(condition);
}