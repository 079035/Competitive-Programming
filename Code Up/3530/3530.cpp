#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <set>
#include <fstream>
#include <cmath>
#include <map>
#include <string>
#include <string.h>
#include <iomanip>
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define SS                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)
#define endl '\n'
#define pb push_back
#define N 9
#define UNASSIGNED 0
typedef long long ll;
using namespace std;

bool FindUnassignedLocation(int grid[N][N], int &row, int &col);
bool isSafe(int grid[N][N], int row, int col, int num);
bool SolveSudoku(int grid[N][N])
{
    int row, col;
    // If there is no unassigned location,
    // we are done
    if (!FindUnassignedLocation(grid, row, col))
        return true; // success!
    // consider digits 1 to 9
    for (int num = 1; num <= 9; num++)
    {
        // if looks promising
        if (isSafe(grid, row, col, num))
        {
            // make tentative assignment
            grid[row][col] = num;
            // return, if success, yay!
            if (SolveSudoku(grid))
                return true;
            // failure, unmake & try again
            grid[row][col] = UNASSIGNED;
        }
    }
    return false; // this triggers backtracking
}
bool FindUnassignedLocation(int grid[N][N], int &row, int &col)
{
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (grid[row][col] == UNASSIGNED)
                return true;
    return false;
}
bool UsedInRow(int grid[N][N], int row, int num)
{
    for (int col = 0; col < N; col++)
        if (grid[row][col] == num)
            return true;
    return false;
}
bool UsedInCol(int grid[N][N], int col, int num)
{
    for (int row = 0; row < N; row++)
        if (grid[row][col] == num)
            return true;
    return false;
}
bool UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num)
{
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (grid[row + boxStartRow]
                    [col + boxStartCol] == num)
                return true;
    return false;
}
/* Returns a boolean which indicates whether  
it will be legal to assign num to the given  
row, col location. */
bool isSafe(int grid[N][N], int row, int col, int num)
{
    /* Check if 'num' is not already placed in  
    current row, current column and current 3x3 box */
    return !UsedInRow(grid, row, num) &&
           !UsedInCol(grid, col, num) &&
           !UsedInBox(grid, row - row % 3, col - col % 3, num) &&
           grid[row][col] == UNASSIGNED;
}
void printGrid(int grid[N][N])
{
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
            cout << grid[row][col] << " ";
        cout << endl;
    }
}
int main()
{
    SS;
    int grid[9][9];
    rep(i, 0, 8)
    {
        rep(j, 0, 8)
        {
            cin >> grid[i][j];
        }
    }
    if (SolveSudoku(grid) == true)
        printGrid(grid);
    else
        cout << "Not Possible" << endl;
    return 0;
}