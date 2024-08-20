        // RANDOM COMPETITION FINISH CODE

#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int randomEvent = rand() % 9 + 1;

    switch (randomEvent) {

    case 1:
        std::cout << "You will win!" << '\n';
        break;
    case 2:
        std::cout << "You will finish second!" << '\n';
        break;
    case 3:
        std::cout << "You will finish third!" << '\n';
        break;
    case 4:
        std::cout << "You will finish fourth!" << '\n';
        break;
    case 5:
        std::cout << "You will finish fifth!" << '\n';
        break;
    case 6:
        std::cout << "You will finish sixth!" << '\n';
        break;
    case 7:
        std::cout << "You will finish seventh!" << '\n';
        break;
    case 8:
        std::cout << "You will finish eighth!" << '\n';
        break;
    case 9:
        std::cout << "You will finish ninth!" << '\n';
        break;
    case 10:
        std::cout << "You will finish last!" << '\n';
        break;
    }

    return 0;

}