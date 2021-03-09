#include <iostream>

using namespace std;

int main(){

    int count, i, *ptr, sum=0;

    std::cout << "Enter the number: ";

    cin>> count;

    ptr = (int*) malloc(count* sizeof(int));

    if(ptr == NULL){
        std::cout << "Error!! Unable to allocate memory" << std::endl;
        exit(0);
    }

    std::cout << "Enter the elements" << std::endl;
    
    for (int i = 0; i < count; i++)
    {
        cin >> ptr[i];
        sum += *(ptr+i);
    }
    
    std::cout << "Sum: " << sum << std::endl;

    free(ptr);

    return 0;

}