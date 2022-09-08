// C++ program for Lucky Numbers
#include<iostream>
using namespace std;


/* Returns 1 if n is a lucky no.
otherwise returns 0*/
bool isLucky(int n)
{
	static int counter = 2;
	
	if(counter > n)
		return 1;
	if(n % counter == 0)
		return 0;
	
	int next_position = n - (n/counter);

	counter++;
	return isLucky(next_position);
}
// Driver Code
int main()
{
	int x = 99;
	if( isLucky(x) )
		cout << x << " is a lucky no.";
	else
		cout << x << " is unlucky no.\n";
		cout << x << " Dont write it again.";
}

// This code is contributed


// This function	 is used to calculate.


