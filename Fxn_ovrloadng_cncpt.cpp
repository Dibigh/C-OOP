#include<iostream>
#include<cmath>
#define pi 3.14
using namespace std;
int volume(int length)
{
    return pow(length,3);
}
float volume(float radius)
{
    return (pi*4/3.0*pow(radius,3));
}
int volume(int length, int breadth, int height)
{   
    return(length*breadth*height);
}
float volume(float radius, int length)
{
    return(pi*pow(radius,2)*length);
}
int main()
{
    cout<<"The volume of cube is: "<<volume(5)<<endl;
    cout<<"The volume of sphere is: "<<volume(7.0f)<<endl;
    cout<<"The volume of cuboid is: "<<volume(7,8,9)<<endl;
    cout<<"The volume of cylinder is: "<<volume(9.0f,4);
}