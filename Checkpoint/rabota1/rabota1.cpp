 #include <iostream>
#include <stdlib.h>
#include <fstream> //Библиотека прденозначеная для создания и чтения файлов(в этой программе .txt)
#include <Windows.h> //Библиотека предназначеная для всех функций в Windows API, макросов и тд.
#include <string> //Библиотека для использования строковой переменной.
#include <conio.h> //Библиотек преднозначеная для работы с консольным вводом и выводом.
#include <ctime> //Библиотека для использования даты/времени.

			using namespace std;


			string save(string a)// Сохранение Имени и Фамилии студентa, а так же даты и времени прохождения через КПП;
			{

			 setlocale(0, "ru");

			 SYSTEMTIME t;
			 GetLocalTime(&t);


			 ofstream fout;
			 fout.open("Список.txt", ofstream::app);

			 fout << "\n" << a << ": " << t.wDay << "." << t.wMonth << "." << t.wYear << "\t"
			 << t.wHour << ":" << t.wMinute << ":" << t.wSecond;

			 cout << endl;

			 fout.close();

			 return a;
			}
		


		int chek() //Проверка физического лица по базе программы;
		{
		 SetConsoleCP(1251);
		 SetConsoleOutputCP(1251);


         string n = " : Проход разрешён.",
		 a1 = "Бердников_Евгений",
		 a2 = "Березовский_Егор",
		 a3 = "Бондарчук_Андрей",
		 a4 = "Вадютин_Иван",
		 a5 = "Валента_Яна",
		 a6 = "Валентюкевич_Максим",
		 a7 = "Васько_Валерий",
		 a8 = "Вишневский_Иван",
		 a9 = "Воронина_Алина",
		 a10 = "Воротилин_Евгений";
			
		string a, d;
		
	     cout << "Введите свою Фaмилию и Имя через знак '_': ";
		 cin >> a;


			       if (a1 == a)
			       {

				    cout << a1 << n << endl;
				    save(a);

			       }


			       else if (a2 == a)
			       {

				    cout << a2 << n << endl;
				    save(a);
			       }


			       else if (a3 == a)
			       {

				    cout << a3 << n << endl;
				    save(a);

			       }


			      else if (a4 == a)
			      {

				   cout << a4 << n << endl;
				   save(a);

			      }


			      else if (a5 == a)
			      {

				   cout << a5 << n << endl;
				   save(a);

			      }


			      else if (a6 == a)
			      {

				   cout << a6 << n << endl;
				   save(a);

			      }


			      else if (a7 == a)
			      {

				   cout << a7 << n << endl;
				   save(a);

			      }


			      else if (a8 == a)
			      {

				   cout << a8 << n << endl;
				   save(a);

			      }


			      else if (a9 == a)
			      {

				   cout << a9 << n << endl;
				   save(a);

			      }


			      else if (a10 == a)
			      {

		           cout << a10 << n << endl;
			       save(a);

			      }

			      else
			      {

					   cout << "Вас нет в базе, проход запрещён." << endl << endl;

			      }

		 return 0;

		}



		int see() // Просмотр студентов находящихся в базе КПП.
		{


	     string a1 = "Бердников_Евгений",
		 a2 = "Березовский_Егор",
		 a3 = "Бондарчук_Андрей",
		 a4 = "Вадютин_Иван",
		 a5 = "Валента_Яна",
		 a6 = "Валентюкевич_Максим",
		 a7 = "Васько_Валерий",
		 a8 = "Вишневский_Иван",
		 a9 = "Воронина_Алина",
		 a10 = "Воротилин_Евгений";

		 string h, l = "1234";

		 cout << "Введите пароль: ";
		 cin >> h;


			                      if (h == l)
			                      {

				                   cout << "Доступ разрешён" << endl;

                                   cout << "Список студентов в базе КПП:" << endl;
			                       cout << a1 << "\n" << a2 << "\n"
				                   << a3 << "\n" << a4 << "\n"
				                   << a5 << "\n" << a6 << "\n"
				                   << a7 << "\n" << a8 << "\n"
				                   << a9 << "\n" << a10 << "\n" << endl << endl;

			                       return 0;

		                          }


			                      else
			                      {

				                   cout << "Не правельный пароль" << endl << endl;
				                
			                      }
			
		}


		int seetxt() //Просмотр файла "Список.txt" С Фомилией, Именем и датой/временем прохождение через КПП.
		{
			string h, l = "1234";

            ifstream fin;
			cout << "Введите пароль" << endl;
			cin >> h;


			if (h == l)
			{

		     cout << "Доступ разрешён." << endl;

		     fin.open("Список.txt");

			              if (!fin.is_open())
			              {

							  cout << "Ошибка, нет данных в файле!" << endl << endl;
				
			              }


			              else
			              {
				           char s;

				                      while (fin.get(s))
				                      {
										  cout << s;
				                      }

                          }

			 cout << endl << endl;

		     fin.close();

			return 0;
			}


		    else
			{

		     cout << "Не правельный пароль." << endl << endl;
			 
			}

            return 0;
		}



		int main(void) //Меню программы "Учёт студентов на проходной"
		{
		 setlocale(0, "ru");
		 system("cls");

			       while (1)
			       {

			        cout << " Учёт студентов на проходной:    1 - Отметиться на проходной." << endl;
			        cout << "                                 2 - Студенты в базе КПП." << endl;
			        cout << "                                 3 - Cписка учтённых студентов на КПП." << endl;
			        cout << "                                 4 - Закончить работу программы." << endl << endl;
			        fflush(stdin);

				              switch (_getch())
				              {
				               case '1':
					           chek();
					           break;


				               case '2':
					           see();
					           break;


				               case '3':
					           seetxt();
					           break;



				               case '4':
							   return 0;
					           break;


				               default: 
							   cout << "            ОШИБКА" << endl;
					           cout << "Симвал не привязон к действию." << endl;   
				               break;

				              }

			       }

		 return 0;

		}