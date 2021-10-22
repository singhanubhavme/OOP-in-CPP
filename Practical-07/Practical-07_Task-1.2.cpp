#include <iostream>
#include <ctime>
#include <string.h>
using namespace std;
int main()
{
    time_t now = time(0);
    char *date_time = ctime(&now);
    int ch;
    cout << "Enter Choice\n";
    cout << "1. Current Year\n";
    cout << "2. Current Month\n";
    cout << "3. Current Date\n";
    cout << "4. Not Applicable\n";
    cin >> ch;
    string year, month, date;
    char *token = strtok(date_time, " ");
    int x = 0;
    while (token)
    {
        x++;
        if (x == 2)
            month = token;
        else if (x == 3)
            date = token;
        else if (x == 5)
            year = token;
        token = strtok(NULL, " ");
    }
    switch (ch)
    {
    case 1:
        cout << "Year is " << year;
        break;
    case 2:
        cout << "Month is " << month;
        break;
    case 3:
        cout << "Date is " << date;
        break;
    case 4:
        cout << "Not Applicable";
        break;
    default:
        cout << "Invalid Input";
    }
    return 0;
}