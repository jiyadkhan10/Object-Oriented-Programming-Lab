#include <iostream>

using namespace std;

void function(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}

int main()
{
	int a, b;
	cout << "Enter the first integer value: ";
	cin >> a;
	cout << "Enter the second integer value: ";
	cin >> b;
	function(&a,&b);
	cout << "After Swapping: " << endl;
	cout << "First Integre Value: " << a << endl;
	cout << "Second Integre Value: " << b << endl;
}
