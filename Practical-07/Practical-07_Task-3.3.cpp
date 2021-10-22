#include <iostream>
using namespace std;
void reverse(int arr[3][3], int M, int N)
{
    int x = M - 1, y, c = 0;
    for (int i = 0; i < M; i++)
    {
        y = N - 1;
        for (int j = 0; j < N; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[x][y];
            arr[x][y] = temp;
            y--;
            if (++c == (M + N) - 1)
                return;
        }
        x--;
    }
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int M = 3, N = 3;
    reverse(arr, M, N);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}