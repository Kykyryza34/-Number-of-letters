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

		case 'А':case 'а': { a++; break; }

		case 'О':case 'о': {o++; break; }

		case 'Э': case 'э': {ne++; break; }

		case 'Е':case 'е': {e++; break; }

		case 'И':case 'и': {n++; break; }

		case 'Ы':case 'ы': {Sd++; break; }

		case 'У': case 'у': {y++; break; }

		case 'Ё':case 'ё': {Ee++; break; }

		case 'Ю': case 'ю': {yy++; break; }

		case 'Я': case 'я': {Zz++; break; }
		};

	}

	for (int i = 0; i < z; i++)
	{
		if (S[i] == ('Б') || S[i] == ('б') || S[i] == ('В') || S[i] == ('в') || S[i] == ('Г') || S[i] == ('г') || S[i] == ('Д') || S[i] == ('д')
			|| S[i] == ('Ж') || S[i] == ('ж') || S[i] == ('З') || S[i] == ('з') || S[i] == ('Й') || S[i] == ('й') || S[i] == ('К') || S[i] == ('к')
			|| S[i] == ('Л') || S[i] == ('л') || S[i] == ('М') || S[i] == ('м') || S[i] == ('Н') || S[i] == ('н') || S[i] == ('П') || S[i] == ('п')
			|| S[i] == ('Р') || S[i] == ('р') || S[i] == ('С') || S[i] == ('с') || S[i] == ('Т') || S[i] == ('т') || S[i] == ('Ф') || S[i] == ('ф')
			|| S[i] == ('Х') || S[i] == ('х') || S[i] == ('Ц') || S[i] == ('ц') || S[i] == ('Ч') || S[i] == ('ч') || S[i] == ('Ш') || S[i] == ('ш') || S[i] == ('Щ')
			|| S[i] == ('щ'))
		{
			Sg++;

		}
	}

	cout << "Количество согласных букв:" << Sg << "\n";

	cout << "A=" << a << "\n" << "O=" << o << "\n" << "Э=" << ne << "\n" << "Е=" << e << "\n" << "И=" << n << "\n" << "Ы=" << Sd << "\n" << "У=" << y << "\n" << "Ё=" << Ee << "\n" << "Ю=" << yy << "\n" << "Я=" << Zz << "\n";

	return 0;


}
int main()
{
	setlocale(LC_ALL, "Russian");
	string S;
	cout << "Задайте строку символов:";
	SetConsoleCP(1251);
	getline(cin, S);
	SetConsoleCP(866);
	int z = S.size();
	XYZ(S,z);
	cin.get();
}







