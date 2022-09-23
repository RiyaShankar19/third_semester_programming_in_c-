#include <iostream>
using namespace std;
class decimal
{
	private:
		int i=1,j=n,n,Number_decimal=n,Number_binary=0;
	public:
			int deci()
			{
				cout<<"decimal number";
				cin>>n;
			}
			int bin()
			{
				for(j=n;j>0;j=j/2)
				{
					Number_binary=Number_binary+(n%2)*i;
					i=i*10;
					n=n/2;
				}
				cout<<("Number_binary=",Number_decimal,Number_binary);
			}
		};
		int main()
		{
			decimal A;
			A.deci();
			A.bin();
		}
