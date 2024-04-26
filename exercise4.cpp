#include <iostream>
#include <map>
using namespace std;

int main(){
    string str1;
    cout << "enter your string: " << endl;
    getline(cin, str1);
    //cout << str1 << endl;

    map<char, int> mp;
    for (int i = 0; i<str1.length(); ++i){
        //cout << str1[i] << endl;
        mp[str1[i]] += 1;
    }

    for (auto itr = mp.begin(); itr != mp.end(); ++itr){
        cout << (*itr).first << endl;
        cout << (*itr).second << endl;
        cout << "------------------" << endl;
    }
}