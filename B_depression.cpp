#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;

int main()
{

    string input;
    cin >> input;
    float hours, minutes;
    char delimiter;
    stringstream ss(input);
    ss >> hours >> delimiter >> minutes;

    float correctHour = (minutes / 60) + hours;
    float outputHour = correctHour * 30;
    if (outputHour >= 360)
        outputHour -= 360;
    cout << outputHour << " " << 6 * minutes << endl;
}