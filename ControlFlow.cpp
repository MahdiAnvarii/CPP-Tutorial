#include <iostream>
using namespace std;

int main(){
    for (int i = 1 ; i<10 ; i++){
        if (i%4 == 3){
            continue;
        }
        else if (i == 9){
            break;
        }
        
        cout << i << endl;    
    }
}