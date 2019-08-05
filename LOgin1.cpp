#include<iostream>
#include<string>
using namespace std;
int main() {
	string name, Str;
	int manu, P, Q, BM;
	cout << "////////Menu///////" << endl;
	cout << "1. Register " << endl;
	cout << "2. Login " << endl;
	cout << "Q. Exit Program " << endl;
	cout << "__________________" << endl;
	do {
		cout << "Enter Menu : ";
		cin >> BM;
		cout << "*******Register*******" << endl;
		cout << "input username : ";
		cin >> name;
		cout << "input password : ";
		cin >> manu;
		cout << "////////Menu///////" << endl;
		cout << "1. Register " << endl;
		cout << "2. Login" << endl;
		cout << "Q. Exit Program " << endl;
		cout << "__________________" << endl;

		if (BM == 1)
		{
			cout << "Enter Menu : ";
			cin >> BM;
			cout << "******************Login***************" << endl;
			cout << "input username : ";
			cin >> Str;
			cout << "input password : ";
			cin >>P;
		}
		if (P != manu)cout << "!!!Username or Password is incorrect Please try again!!!";
		{
			cout << "\ninput username : ";
			cin >> Str;
			cout << "input password : ";
			cin >> P;
		}
		if (P == manu) cout << "Username or Password is correct \n";
		{
		}
		cout << "////////Menu///////" << endl;
		cout << "1. Register " << endl;
		cout << "2. Login" << endl;
		cout << "Q. Exit Program " << endl;
		cout << "__________________" << endl;
		cout << "Enter Menu : ";
		cin >> BM;
		cout << "Exit Program" << endl;
		if (BM != 'Q')
			cout << "Exit Program" << endl;
			break;
	} while (BM != 'Q');
	return(0);
}