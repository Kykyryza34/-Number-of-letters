#include<iostream> 
#include <string>
#include <Windows.h>
using namespace std;
int XYZ(string S,int z)
{

	int a = 0, o = 0, ne = 0, e = 0, n = 0, Sd = 0, y = 0, Ee = 0, yy = 0, Zz = 0, Sg = 0;
	for (int i = 0; i < z; i++)
	{
		switch (S[i]) {

		case '�':case '�': { a++; break; }

		case '�':case '�': {o++; break; }

		case '�': case '�': {ne++; break; }

		case '�':case '�': {e++; break; }

		case '�':case '�': {n++; break; }

		case '�':case '�': {Sd++; break; }

		case '�': case '�': {y++; break; }

		case '�':case '�': {Ee++; break; }

		case '�': case '�': {yy++; break; }

		case '�': case '�': {Zz++; break; }
		};

	}

	for (int i = 0; i < z; i++)
	{
		if (S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�')
			|| S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�')
			|| S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�')
			|| S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�')
			|| S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�') || S[i] == ('�')
			|| S[i] == ('�'))
		{
			Sg++;

		}
	}

	cout << "���������� ��������� ����:" << Sg << "\n";

	cout << "A=" << a << "\n" << "O=" << o << "\n" << "�=" << ne << "\n" << "�=" << e << "\n" << "�=" << n << "\n" << "�=" << Sd << "\n" << "�=" << y << "\n" << "�=" << Ee << "\n" << "�=" << yy << "\n" << "�=" << Zz << "\n";

	return 0;


}
int main()
{
	setlocale(LC_ALL, "Russian");
	string S;
	cout << "������� ������ ��������:";
	SetConsoleCP(1251);
	getline(cin, S);
	SetConsoleCP(866);
	int z = S.size();
	XYZ(S,z);
	cin.get();
}







