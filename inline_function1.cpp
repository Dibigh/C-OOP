#include<iostream>
#define pi 3.14
using namespace std;
inline float Circle(float &Area, float &circum, float radius)
{
    Area=pi*radius*radius;
    circum= 2* pi*radius;
}
int main()
{
    float A,C,R;
    cout<<"Enter radius of circle: ";
    cin>>R;
    Circle(A,C,R);
    cout<<"Area is: "<<A<<endl<<"Circumference is: "<<C;
    return 0;
}