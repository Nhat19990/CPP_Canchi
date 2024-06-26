// CPP_Canchi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

 #include <iostream>
using namespace std;
int main() 
{
	string can[10] = { "Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky" };
	string chi[12] = { "Than", "Dau", "Tuat", "Hoi", "Ty", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui" };
	cout << "nhap nam\n";
	int year; cin >> year;
	string cn = can[year % 10];
	string ci = chi[year % 12];
	cout << "ma can chi\a" << year << "la: " << can[year % 10] << " " << chi[year % 12];
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
