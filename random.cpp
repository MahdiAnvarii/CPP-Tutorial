#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    long eSecond = time(0);
    // cout << eSecond << endl;
    
    const short max = 6;
    const short min = 1;
    srand(eSecond);
    short dice = (rand() % (max - min +1)) + min;
    cout << dice << endl;

    return 0;
}
