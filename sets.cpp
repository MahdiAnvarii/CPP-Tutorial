#include <iostream>
#include <set>
using namespace std;

int main(){
    set<char> s1 = {'a','m','t','a','m','e'};
    for (auto itr = s1.begin(); itr != s1.end(); itr++){
        cout << *itr << endl;
    }

    s1.insert('b');
    s1.erase('m');
    if (s1.find('m') == s1.end()){
        cout << "could not find the element!" << endl;
    }

    string test = "hi mahdi, wellcome!";
    set<char> s2;
    for (int i = 0; i<test.length(); ++i){
        s2.insert(test[i]);
    }
    cout << s2.size() << endl;
}