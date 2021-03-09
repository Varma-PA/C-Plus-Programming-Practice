#include <iostream>

using namespace std;


class Chef{
    public:
        void makeChicken(){
            std::cout << "Made Chicken" << std::endl;
        }
        void makeFish(){
            std::cout << "Made Fish" << std::endl;
        }
        void makeSalad(){
            std::cout << "Made Salad" << std::endl;
        }
};

class ItalianChef: public Chef{

    public:
        void makeChicken(){
            std::cout << "Italian Chef Made Chicken" << std::endl;
        }

};

int main(int argc, const char** argv) {

    Chef chef;

    chef.makeChicken();

    ItalianChef italianChef;
    italianChef.makeChicken();

    return 0;
}


