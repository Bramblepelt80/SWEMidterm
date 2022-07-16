#include <iostream>
#include <vector>
#include "time.h"

int main()
{
    std::vector<int> questions{ 1,2,3,4 };
    srand(time(0));
    for (int i = 0; i < 4; i++)
    {
        int random = rand() % questions.size();
        std::string q = "";
        int a = 0;
        int guess;
        switch (questions[random])
        {
        case 1:
            q = "Which subatomic particle holds a negative charge?\n1) Proton\n2) Neutron\n3) Electron\n4) Neutrino\n> ";
            a = 3;
            break;
        case 2:
            q = "How many planets in our solar system have rings?\n1) 1\n2) 2\n3) 3\n4) 4\n> ";
            a = 4;
            break;
        case 3:
            q = "How long does it take light to travel from the Sun to the Earth?\n1) 8 seconds\n2) 8 minutes\n3) 8 hours\n> ";
            a = 2;
            break;
        case 4:
            q = "Nothing can escape from a black hole once it crosses the event horizon.\n1) True\n2) False\n> ";
            a = 2;
            break;
        }
        questions.erase(questions.begin() + random);
        std::cout << q;
        std::cin >> guess;
        if (guess == a)
            std::cout << "Correct!\n\n";
        else
            std::cout << "Incorrect!\n\n";
    }
}