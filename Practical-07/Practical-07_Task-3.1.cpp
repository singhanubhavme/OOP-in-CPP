#include <iostream>
using namespace std;

void reverse(int arr[3][3], int a[3][3])
{
    for (int i = 0, x = 2; i < 3; i++, x--)
    {
        for (int j = 0, y = 2; j < 3; j++, y--)
        {
            a[x][y] = arr[i][j];
        }
    }
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int a[3][3];
    reverse(arr, a);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}