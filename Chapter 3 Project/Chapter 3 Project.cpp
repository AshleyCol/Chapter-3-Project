#include <iostream>
#include <random>

using namespace std;

int main()
{
    // Randomness
    random_device engine;
    uniform_int_distribution<int> randomInt(0, 100);

    // Get numbers & solve
    int randFirst = randomInt(engine);
    int randSecond = randomInt(engine);

    int solved = randFirst + randSecond;

    // OUtput & wait
    cout << "Please solve " << randFirst << " + " << randSecond << "\n";
    cin.get();
    cout << solved;

    return 0;
}