#include <iostream>
#include <cstring>
using namespace std;

char grid[100][100];
bool seen[100][100];

bool valid(int i, int j,int size)
{
    return i>=0 && j>=0 && i<size && j<size;
}

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

void dfs(int i,int j,int size){
    if (seen[i][j]) return;
    seen[i][j] = 1;
    for (int k=0;k<4;++k){
        int xc = i+dx[k];
        int yc = j+dy[k];

        if (valid(xc,yc,size) && !seen[xc][yc] && grid[xc][yc]== '1') dfs(xc,yc);
    }

}

int main()
{
    int n, size;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {   int ans = 0;
        cin >> size;
        for (int j = 0; j < size; ++j)
        {
            scanf("%s", grid[j]);
        }
        memset(seen, 0, sizeof(seen));

        for (int j = 0; j < size; ++j)
        {
            for (int k = 0; k < n; ++k)
            {
                if (!seen[j][k] && grid[j][k] == 'x')
                {
                    dfs(j, k,size);
                    ++ans;
                }
            }
        }

        printf("Case %d: %d\n", i + 1, )
    }
}