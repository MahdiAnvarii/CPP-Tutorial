#include <iostream>
#include <map>
using namespace std;

int main(){
    map<char, int> mp = {
        {'T',9},
        {'Y',3},
        {'a',4}
    };
    cout << mp['Y'] << endl;
    cout << mp['u'] << endl;

    mp['b'] = 11;
    mp.insert(pair<char, int> ('j',5));
    pair<char, int> p1('X',1);
    mp.insert(p1);
    cout << p1.first << endl;
    cout << p1.second << endl;

    mp.erase(p1.first);
    // mp.clear()
    cout << mp.empty() << endl;
    cout << mp.size() << endl;
    cout << "------------------" << endl;

    for (auto itr = mp.begin(); itr != mp.end(); ++itr){
        cout << (*itr).first << endl;
        cout << (*itr).second << endl;
    }
}