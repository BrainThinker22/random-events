// RANDOM CHOICE WHERE TO EAT CODE

#include <iostream>
#include <ctime>

int main() {

    srand(time(0));
    int randomChoice = rand() % 6 + 1;

    switch (randomChoice) {
    case 1:
        std::cout << "I will eat at home!" << '\n';
        break;
    case 2:
        std::cout << "I will eat at a restaurant!" << '\n';
        break;
    case 3:
        std::cout << "I will eat at McDonald's!" << '\n';
        break;
    case 4:
        std::cout << "I will go to the shop and buy some food!" << '\n';
        break;
    case 5:
        std::cout << "I will eat at a fast food restaurant!" << '\n';
        break;
    case 6:
        std::cout << "I won't eat more today!" << '\n';
        break;
    }

    return 0;

}