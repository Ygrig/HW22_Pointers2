#include <iostream>
using namespace std;

void pswap(int* pn1, int* pn2) {
	int tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}

template <typename T>
void power_num(T &num1, T num2) {
	T result = num1;
	num1 = 1;
	for (int i=0; i<num2; i++)
	num1 *= result;
}

int main() {
	
	//Task 22.1
	cout << "Task 1. \n";
	cout << "Initial array:\n";
	const int size = 10;
	int arr[size]{ 1,2,3,4,5,6,7,8,9,10};
	int *pa1 = arr; 
	for (int i = 0; i < size; i++)
		cout << *(pa1 + i) << ' ';
	cout << '\n';
	
	for (int i = 0; i < size; i+=2) 
		pswap(&arr[i], &arr[i + 1]);
	
	cout << "Final array: \n";
	for (int i = 0; i < size; i++)
		cout << *(pa1 + i) << ' ';
	cout << '\n';
	
	
	////Task 22.2
	cout << "\nTask 2. \n";
	int n,m;
	cout << "Enter first number: \n";
	cin >> n;
	cout << "Enter second number: \n";
	cin >> m;
	power_num(n, m);
	cout << "Total result = " << n << '\n';

	return 0;
}