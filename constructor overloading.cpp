#include<iostream>
class a
{
	public:
		a(int a)
		{
			std::cout<<"a";
        }
		a(int a,int b)
		{
			std::cout<<"rakesh";
		}
};
int main()
{
	a obj(1);
	a obj1(3,4);
	return 0;
}

