#include <iostream>
#include <set>
using namespace std;

int main(){
    string name1;
    cout << "enter the first name: " << endl;
    cin >> name1;
    string name2;
    cout << "enter the second name: " << endl;
    cin >> name2;

    set<char> s1;
    for (int i = 0; i<name1.length(); ++i){
        s1.insert(name1[i]);
    }

    for (int i = 0; i<name2.length(); ++i){
        s1.erase(name2[i]);
    }   

    if (s1.size() == 0){
        cout << "yes" << endl;
    } else{
        cout << "no" << endl;
    }
}