#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void PrintString(const std::string& string){
    cout << string << endl;
}

char* ModifyString(char* name){
    *(name + 1) = 'e';
    return name;
}

int main(){
    const char* name = "mahdi";
    cout << name << endl;

    std::string name2 = "meiti";
    name2[3] = 'k';
    PrintString(name2);
    cout << name2.size() << endl;
    name2 += "hello";

    bool contains = name2.find("ig") != std::string::npos;
    cout << contains << endl;
    cout << name2.find("ei") << endl;

    char* name3 = new char[6];
    strcpy(name3, "MAHDI");
    ModifyString(name3);
    PrintString(name3);
    delete[] name3;

    string str = "hello world";
    cout << str[1] << endl;
    str[4] = '4';
    cout << str << endl;
    cout << str.size() << endl;
    cout << str.length() << endl;
    for (int i=0 ; i<str.size() ; ++i){
        char chr = str[i];
        cout << chr << endl;
    }
}