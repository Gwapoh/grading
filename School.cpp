#include <iostream>
using namespace std;


int main()
{

	string schoolname;
	string Fname, Mname, Lname;
	float M, E, S, F, H;

	cout << "\n Enter School Name - \n";
	cout << " ";
	cin >> schoolname;
	cout << "\n Enter Full Name " << endl;
	cout << " First Name: ";
	cin >> Fname;
	cout << " Middle Name: ";
	cin >> Mname;
	cout << " Last Name: ";
	cin >> Lname;

	cout << "\n Enter Grades of each subject \n";

	cout << " Math = ";
	cin >> M;
	cout << " Science = ";
	cin >> E;
	cout << " English = ";
	cin >> S;
	cout << " Filipino = ";
	cin >> F;
	cout << " History = ";
	cin >> H;

	float sum = M + E + S + F + H;

	cout << "\n " << schoolname << endl;
	cout << "\n Student Name - ";
	cout << " " << Fname << " " << Mname << " " << Lname << "\n";
	cout << "\n Total Grades = " << sum;
	cout << "\n Total Average Grade = " << sum / 5 << "%";
	if (sum / 5 > 75)
	{
		cout << " Passed";
	}
	else
	{
		cout << " Failed";
	}

	return 0;
}
