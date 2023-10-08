#include <iostream>

using namespace std;
int main()
{
	int bilangan;

	for (int i = 1; i <= 100; i++ )
	{
		int b = 0;
		for (int j = 1; j <= i; j++)
			if (i % j == 0) 
		{
		    b = b + 1;
		}
		if (b == 2)
			cout << i << "bilangan prima\n";
		else
			cout << i << "bukan bilangan prima\n";


	}
	 
	
	
	system("pause");
	return 0;


}