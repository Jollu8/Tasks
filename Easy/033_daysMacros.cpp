#include <iostream>
using namespace std;

#define SUNDAY "Sunday"
#define MONDAY "Monday"
#define TUESDAY "Tuesday"
#define WEDNESDAY "Wednesday"
#define THURSDAY "Thursday"
#define FRIDAY "Friday"
#define SATURDAY "Saturday"

int main()
{
    int day = 0;
    cout << "Enter digit ->";
    cin >> day;
    while(!(day > 0 && day < 8))
    {
        cout << "False!\n";
        cout << "Enter digit ->";
        cin >> day;
    }
    if(day == 1)
    {
        cout << "Today is " MONDAY;
    }else if(day == 2)
    {
        cout << "Today is " TUESDAY;
    }else if(day == 3)
    {
        cout << "Today is " WEDNESDAY;
    }else if(day == 4)
    {
        cout << "Today is " THURSDAY;
    }else if(day == 5)
    {
        cout << "Today is " FRIDAY;
    }else if(day ==  6)
    {
        cout << "Today is " SATURDAY;
    }else{
        cout << "Today is " SUNDAY;
    }

}