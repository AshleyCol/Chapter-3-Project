#include <iostream>

using namespace std;

int main()
{
    const int sugar = 1.5;
    const int butter = 1.0;
    const int flour = 2.75;
    int cookies;

    cout << "How many cookies would you like? \n";

    cin >> cookies;

    cookies = cookies / 48;

    cout << "You need " << sugar * cookies << " cups of sugar, " << butter * cookies << " cups of butter, and " << flour * cookies << " cups of flour.";

    
    return 0;
}