#include <iostream>

using namespace std;


void sayHi(string name, int age);

int main(){

    sayHi("Achyuth Varma", 25);

    return 0;

}

void sayHi(string name, int age){

    std::cout << "Hello " << name<<", you are " <<age << "years old" << std::endl;

}
