#include<iostream>
using namespace std;
float interest(float principal, int time=5, float rate=10)
{
    return(principal*time*rate)/100;
}
int main()
{
    //using user passed arguments
    cout <<"the interest is: "<<interest(10000, 7, 12)<<endl;
    //using default arguments
    cout<<"The interest is: "<<interest(1200.34);
}