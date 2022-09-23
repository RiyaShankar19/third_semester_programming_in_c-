//Write a program to find the number and sum of all integer between 100 and 200 which are divisible by 9.
#include<iostream>
using namespace  std;
class number
{
	private:
		int i,sum=0;
		public:
			int show_num()
			{
				for(i=101; i<200; i++)
				if(i%9==0)
				{
					cout<<"numbers divisble by 9 is= "<<i<<endl;
					sum=sum+i;
				}
				cout<<"sum of all numbers divisible by 9 is= "<<sum<<endl;
			}
};
int main()
{
	number f;
	f.show_num();
}