#include <iostream>

using namespace std;

string theWeekDayName(int dayNum);


int main(){


    std::cout << theWeekDayName(2) << std::endl;

    return 0;

}

string theWeekDayName(int dayNum){

    switch (dayNum)
    {
    case 0:
        return "Monday";
    case 1:
        return "Tuesday";

    case 2:
        return "Wednesday";

    case 3:
        return "Thursday";    
    case 4:
        return "Friday";

    default:
        return "Invalid Input...";
    }

}
