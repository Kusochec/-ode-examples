#include <iostream>
#include <locale>
#include <windows.h>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;



char text[1000];


class spin
{
public:
	
	int x;

	char move()
	{
	

		for (int s = 0; s < strlen(text); s++)
		{
			if (text[s] == 'а')
			{
				text[s] = 'я';
			}
			else
			{
				text[s] = text[s] - 1;
			}


		}

		return 0;
	}
		
};




class decoder
{
public:

	long double e = 0;
	double prs = 8.483;

	spin v1;

	char dec()
	{
        for (int d = 0; d < strlen(text); d++) //Прогон по всем букавм зашифрованого предложения
		{


			if (text[d] == 'е') // подсчёт одинаковую букву
			{

				e++;

			}


		}

		/*cout << strlen(text) << " - общее каличество букв в тексте" << endl;
		cout << e << " - каличество буквы Е в тексте" << endl;*/
		e = ((e / strlen(text)) * 100 );
		/*cout << e << " - Процент буквы Е в тексте" << endl;
		cout << prs << " - табличный процент буквы Е в тексте" << endl;*/
		e = abs(e - prs);
		/*cout << e << " - разность процента Е в тексте и табличного Е по модулю" << endl;*/

		if (e < 1)
		{

			cout << text << endl << endl;

		}

		

		e = 0;

		return 0;
    }

};


class cipher
{
public:

	int step;
	char sent[500];

	char cip()
	{
		cout << "Введите текст для шифрования: " << endl;
		cin >> sent;

		cout << "Введите ключ шифра: " << endl;
		cin >> step;

		for (int i = 0; i < strlen(sent); i++)
		{

			if (step >= 0)
			{
				sent[i] = (sent[i] - 'а' + step) % 32 + 'а';
            }

			else
			{
				sent[i] = (sent[i] - 'а' + 32 + step) % 32 + 'а';
            }
		}

		cout << sent << endl;

		return 0;
	}



};



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, ".1251");

	spin s1;
	decoder d1;
	cipher c1;
	
	

	while (1)
	{

		cout << "Шифр Цезаря   1 - Зашифровать кодом цезаря" << endl;
		cout << "              2 - Дешифровать код цезаря" << endl;
		cout << "              3 - Закончить работу программы" << endl;

		fflush(stdin);

		switch (_getch())
		{

		case '1':
			
			c1.cip();
			
			break;


		case '2':

		  cout << "Введите текст для дешифровки" << endl;
	      cin >> text;
	      cout << endl;
	
	        for (int i = 0; i <= 31; i++)
	        {
        
		      s1.move();
		      d1.dec();

	        }

			break;

		case '3':
			return 0;
			break;

		default: cout << "Ошибка, повтарите снова" << endl;
			break;

		}
	}




}


/*a = (a / strlen(text)) * 100;
if (11 > a > 10)
		{

			
			a = abs(a - prs[0]);

			cout << "ЭТО А " << a << endl;
			if (a < 0.9)
			{
				
				cout << text << endl << endl;

			}
			

		} a = 0;*/