#include<iostream>
using namespace std;
class counter{
	int count;
	public:
		counter()
		{
			count =0;
		}
		counter(int n)
		{
			count =n;
		}
		int return_count()
		{
			return count;
		}
		counter operator ++();
		counter operator ++(int);
};
counter counter:: operator ++()
{
	return ++count;
}
counter counter::operator ++(int)
{
	return count++;
}
int main()
{
	counter c1,c2,c3;
	cout<<c1.return_count()<<endl;
	cout<<c2.return_count()<<endl;
	c1++;
	++c2;
	c3=++c2;
	cout<<c1.return_count()<<endl;
	cout<<c2.return_count()<<endl;
	cout<<c3.return_count()<<endl;
	return 0;
}
