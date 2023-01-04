//digital clock in c++

#include<windows.h>
#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class clock1
{
private:
    int minutes;
    int seconds;
    int hours;
    int d = 1000;
    string ab = "am";
public:
    void get_input()
    {
        cin >> hours >> minutes >> seconds;

        if (hours > 12 || minutes > 60 || seconds > 60)
        {
            cout << "error";
            exit(1);
        }
    }
    void output()
    {
        while (1)
        {
            seconds++;
            if (seconds > 60)
            {
                seconds = 0;
                minutes++;
            }
            if(minutes>60)
            {
                minutes = 0;
                hours++;
            }
            if (hours>12)
            {
                hours = 1;
                ab="pm";
            }
            cout << hours << ":" << minutes << ":" << seconds << " "<<ab;
            Sleep(d);
           system("cls");
        }
       
    }
};
int main()
{
    cout << "Digital clock:"<<endl;
    cout<<"Enter time in Hour Minutes & Seconds :"<<endl;
    clock1 david;
    david.get_input();
    david.output();
}


