#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string input;

    std::cout << "Enter a line of text: ";
    std::getline(std::cin, input);
    int i = 0;
    string result = "";

    while (i < input.length())
    {
        if (i < input.length() - 2)
        {
            if ((input.substr(i, 3) != "WUB"))
            {
                result += input[i];
                i++;
            }
            else
            {
                result += " ";
                i += 3;
            }
        }
        else
        {
            result += input[i];
            i++;
        }
    }

    std::cout << result<< std::endl;

    return 0;
}