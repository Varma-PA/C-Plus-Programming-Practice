#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    
    int age = 20;

    int *pAge = &age;

    std::cout << *pAge << std::endl;
 
 
    return 0;
}