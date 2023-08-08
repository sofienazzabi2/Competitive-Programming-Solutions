#include <iostream>
#include <string>
using namespace std;

char grid[10][10];

bool verifyPositionForward(int posX, int posY)
{

    return posY != 0;
}

bool verifyPositionRight(int posX, int posY, int maxX)
{

    return posX != maxX - 1;
}

bool verifyPositionLeft(int posX, int posY)
{

    return posX != 0;
}
char getNextLetter(char letter)
{
    string ch = "@IEHOVA#";
    int i = 0;
    while (letter != ch[i])
        i++;
    return ch[i + 1];
}

string dfs(int indexX, int indexY, int maxX, char letter)
{
    if (letter == '#')
        return "";
    if (verifyPositionForward(indexX, indexY))
    {
        if (grid[indexY - 1][indexX] == getNextLetter(letter))
            return "forth " + dfs(indexX, indexY - 1, maxX, getNextLetter(letter));
    }
    if (verifyPositionRight(indexX, indexY, maxX))
    {
        if (grid[indexY][indexX + 1] == getNextLetter(letter))
            return "right " + dfs(indexX + 1, indexY, maxX, getNextLetter(letter));
    }

    if (verifyPositionLeft(indexX, indexY))
    {
        if (grid[indexY][indexX - 1] == getNextLetter(letter))
            return "left " + dfs(indexX - 1, indexY, maxX, getNextLetter(letter));
    }
}

int findStart(char *t)
{
    int i = 0;
    while (t[i] != '@')
        i++;

    return i;
}

int main()
{
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        for (int j = 0; j < x; ++j)
        {
            scanf("%s", grid[j]);
        }
        int startIndex = findStart(grid[x - 1]);
        cout << dfs(startIndex, x - 1, y, '@').substr(0, dfs(startIndex, x - 1, y, '@').length() - 1) << endl;
    }
}