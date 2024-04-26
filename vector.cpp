#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1 = {3,2,9,4};
    cout << v1[2] << endl;
    cout << "first element: " << v1.front() << endl << "last element: " << v1.back() << endl;

    v1.push_back(11);
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;

    v1.pop_back();
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;

    v1.shrink_to_fit();
    cout << v1.capacity() << endl;

    vector<int> v2 = {1,2,3,4};
    v2.insert(v2.begin(), 5);
    cout << v2[0] << endl;
    v2.insert(v2.begin()+2, 11);
    cout << v2[2] << endl;   
    v2.erase(v2.begin()+1);
    cout << v2[1] << endl;
    cout << "--------------------------" << endl;

    vector<int> v3 = {7,9,2,9};
    for (int i = 0 ; i<v3.size() ; i++){
        cout << v3[i] << endl;
    }   
    for (auto itr = v3.begin() ; itr!= v3.end() ; itr++){
        cout << *itr << endl;
    }
}