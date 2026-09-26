#include <iostream>
using namespace std;

int main()
{
    int roomSize;
    const double colorBlindChance = 0.045;
    int colorBlindPeople;

    std::cout << "How many people are in the room?";
    std::cin >> roomSize;

    colorBlindPeople = roomSize * colorBlindChance;
    
    std::cout << "There are most likely " << colorBlindPeople << " color blind people in a room with " << roomSize << " people.";

  return 0;
}
