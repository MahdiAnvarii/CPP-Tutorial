#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>

int main(){
    const char* name = "mahdi\0";
    std::cout << name << std::endl;
    std::cout << strlen(name) << std::endl;

    const char name2[7] = "mehdi\0";
    std::cout << name2 << std::endl;
    std::cout << strlen(name2) << std::endl;   

    char name3[] = "mahdi";
    name3[2] = 'H';
    std::cout << name3 << std::endl;

    const char* mh1 = "Meiti";
    const wchar_t* mh2 = L"Meiti";
    const char16_t* mh3 = u"Meiti";
    const char32_t* mh4 = U"Meiti";

    const char* example = R"(Line1
                            Line2
                            Line3)";

    const char* ex = "Line1\n"
                     "Line2\n"
                     "Line3\n";

}