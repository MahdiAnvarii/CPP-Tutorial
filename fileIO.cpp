#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    fstream myfile;
    myfile.open("myfirst.txt",ios::out); //write mode
    if (myfile.is_open()){
        myfile << "Hello\n";
        myfile << "This is Mahdi\n";
        myfile.close();
    }

    myfile.open("myfirst.txt",ios::app); //append mode
    if (myfile.is_open()){
        myfile << "Hello again\n";
        myfile.close();
    }

    myfile.open("myfirst.txt",ios::in); //read mode
    if (myfile.is_open()){
        string line;
        while (getline(myfile, line)){
            cout << line << endl;
        }
        myfile.close();
    }

    // system("pause>0");
}