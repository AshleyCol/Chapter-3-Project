#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double rate;
    double times;
    double principal;
    double amount;


    cout << "What is your interest rate? ";
    cin >> rate;
    cout << "How many times will it compound? ";
    cin >> times;
    cout << "What is your principal? ";
    cin >> principal;


    rate = rate / 100;

    amount = principal * pow(1+(rate/times),times);


    cout << "Interest Rate:" << setw(25) << rate *100<<"%" << endl;
    cout << "Times Compounded:" << setw(22) << times << endl;
    cout << "Principal:" << setw(25) << "$" << principal << endl;
    cout << "Interest:" << setw(25) << setprecision(2) << fixed << "$" << amount - principal << endl;
    cout << "Amount:" << setw(25) << setprecision(2) << fixed << "$" << amount << endl;

    return 0;
}