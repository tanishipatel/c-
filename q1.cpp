#include <iostream>
using namespace std;

class Time
{
    int tSeconds, hours, minutes, seconds;

public:
    void calData()
    {
        cout << "Enter total seconds: ";
        cin >> tSeconds;
    
        hours = tSeconds / 3600;
        minutes = (tSeconds % 3600) / 60;
        seconds = tSeconds % 60;
    
        cout << "Time = "
             << hours << " hours "
             << minutes << " minutes "
             << seconds << " seconds";
    }
};

int main()
{
    Time t;

    t.calData();

    return 0;
}