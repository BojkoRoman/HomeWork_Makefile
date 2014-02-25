#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
	int sum = 0;
	int mas[10] = {1,2,3,4,5,6,7,8,9,10}; 
	cout << "Chisla : ";
	for ( int i = 0; i < 10; i++){
		cout << mas[i];
		sum = sum + mas[i];
	}
	cout << endl;
	cout << "Suma chisel : ";
	cout << sum <<endl;
	system("pause");
        return 0;
}