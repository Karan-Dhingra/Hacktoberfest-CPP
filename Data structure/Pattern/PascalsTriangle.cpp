#include <iostream>
using namespace std;

int binomialCoeff(int n, int k);

// Function to print first
// n lines of Pascal's Triangle
void printPascal(int n)
{
	// Iterate through every line and
	// print entries in it
	for (int line = 0; line < n; line++)
	{
		// Every line has number of
		// integers equal to line
		// number
		for (int i = 0; i <= line; i++)
			cout <<" "<< binomialCoeff(line, i);
		cout <<"\n";
	}
}

int binomialCoeff(int n, int k)
{
	int res = 1;
	if (k > n - k)
	k = n - k;
	for (int i = 0; i < k; ++i)
	{
		res *= (n - i);
		res /= (i + 1);
	}
	
	return res;
}

// Driver program
int main()
{
	int n = 7;
	printPascal(n);
	return 0;
}
