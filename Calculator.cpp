//Calculator Project, Programmed by Ali Tabaraei... :)
#include<iostream>
#include<math.h>
#include<windows.h>
#define max 100
using namespace std;
float n, m, p, q, sum = 0, sub, power = 1, divide, remember = 0, result = 0.0;
long long int Fact(int num5)
{
	long long int factorial = 1;
	for (; num5; num5--)
	{
		factorial = factorial*num5;
	}
	return factorial;
}
void about()
{

}
void main()
{
	while (true)
	{
		system("color 3b");
		cout << "Welcome to my project!" << endl << endl << "Type following number to go for action:" << endl;
		cout << "(1) Normal Calculating" << endl << "(2) Engineering Calculating" << endl << "(3) Matrix" << endl << "(4) About Programmer" << endl << "(5) Exit" << endl;
		char menu;
		cin >> menu;
		system("cls");
		//Main menu
		switch (menu)
		{
		case '1':
			system("color 5d");
			cout << "Normal Calculating" << endl << endl << "Type following number to go for action:" << endl;
			cout << "(1) Add(+)" << endl << "(2) Subtract(-)" << endl << "(3) Multiply(*)" << endl << "(4) Divide(/)" << endl << "(5) Back" << endl;
			char menu1;
			cin >> menu1;
			//Menu 1
			switch (menu1)
			{
			case '1':
				//Jam
				system("cls");
				cout << "Add" << endl << endl << "Type following number to go for action:" << endl;
				cout << "Aya mikhahid az hasele amaliate ghable khod estefade konid?" << endl;
				cout << "(1) Yes" << endl << "(2) No" << endl;
				char Jam;
				cin >> Jam;
				switch (Jam)
				{
				case '1':
					system("cls");
					cout << "Ba vorude adade Sefr(0) be tedade adad khateme dahid" << endl;
					cin >> n;
					sum = n + remember;
					while (n)
					{
						cin >> n;
						sum = sum + n;
					}
					remember = sum;
					system("cls");
					cout << "Natije barabar ast ba = " << sum << endl << "Press any key to go to Main Menu" << endl;
					system("pause>n");
					break;
				case '2':
					system("cls");
					cout << "Ba vorude adade Sefr(0) be tedade adad khateme dahid" << endl;
					cin >> n;
					sum = sum + n;
					while (n)
					{
						cin >> n;
						sum = sum + n;
					}
					remember = sum;
					system("cls");
					cout << "Natije barabar ast ba = " << sum << endl << "Press any key to go to Main Menu" << endl;
					system("pause>n");
				default:
					break;
				}
				break;
			case '2':
				//Tafrigh
				system("cls");
				cout << "Subtract" << endl << endl << "Type following number to go for action:" << endl;
				cout << "Aya mikhahid az hasele amaliate ghable khod estefade konid?" << endl;
				cout << "(1) Yes" << endl << "(2) No" << endl;
				char Tafrigh;
				cin >> Tafrigh;
				switch (Tafrigh)
				{
				case '1':
					system("cls");
					cout << "Ba vorude adade Sefr(0) be tedade adad khateme dahid" << endl;
					cin >> m;
					sub = remember - m;

					while (m)
					{
						cin >> m;
						sub -= m;
					}
					remember = sub;
					system("cls");
					cout << "Natije barabar ast ba = " << sub << endl << "Press any key to go to Main Menu" << endl;
					system("pause>n");
					break;
				case '2':
					system("cls");
					cout << "Ba vorude adade Sefr(0) be tedade adad khateme dahid" << endl;
					cin >> m;
					sub = m;
					while (m)
					{
						cin >> m;
						sub -= m;
					}
					remember = sub;
					system("cls");
					cout << "Natije barabar ast ba = " << sub << endl << "Press any key to go to Main Menu" << endl;
					system("pause>n");
				default:
					break;
				}
				break;
			case '3':
				//Zarb
				system("cls");
				cout << "Multiply" << endl << endl << "Type following number to go for action:" << endl;
				cout << "Aya mikhahid az hasele amaliate ghable khod estefade konid?" << endl;
				cout << "(1) Yes" << endl << "(2) No" << endl;
				char Zarb;
				cin >> Zarb;
				switch (Zarb)
				{
				case '1':
					system("cls");
					cout << "Ba vorude adade yek(1) be tedade adad khateme dahid" << endl;
					cin >> p;
					if (remember == 0) remember = 1;
					power = p*remember;
					while (p != 1)
					{
						cin >> p;
						power *= p;
					}
					remember = power;
					system("cls");
					cout << "Natije barabar ast ba = " << power << endl << "Press any key to go to Main Menu" << endl;
					system("pause>n");
					break;
				case '2':
					system("cls");
					cout << "Ba vorude adade yek(1) be tedade adad khateme dahid" << endl;
					cin >> p;
					power = p;
					while (p != 1)
					{
						cin >> p;
						power *= p;
					}
					remember = power;
					system("cls");
					cout << "Natije barabar ast ba = " << power << endl << "Press any key to go to Main Menu" << endl;
					system("pause>n");
				default:
					break;
				}
			case'4':
				//Taghsim
				system("cls");
				cout << "Divide" << endl << endl << "Type following number to go for action:" << endl;
				cout << "Aya mikhahid az hasele amaliate ghable khod estefade konid?" << endl;
				cout << "(1) Yes" << endl << "(2) No" << endl;
				char Taghsim;
				cin >> Taghsim;
				switch (Taghsim)
				{
				case '1':
					system("cls");
					cout << "Ba vorude adade yek(1) be tedade adad khateme dahid" << endl;
					cin >> q;
					if(q==0)
					{
						system("cls");
						cout << "Error. Meghdar Tarif nashode Mibashad" << endl;
						system("Pause>n");
						break;
					}
					if (remember == 0)
						divide = q;
					else
						divide = remember / q;
					while (q != 1 && q!=0)
					{
						cin >> q;
						divide /= q;
					}
					if(q==0)
					{
						system("cls");
						cout << "Error. Meghdar Tarif nashode Mibashad" << endl;
						system("Pause>n");
						break;
					}
					remember = divide;
					system("cls");
					cout << "Natije barabar ast ba = " << divide << endl << "Press any key to go to Main Menu" << endl;
					system("pause>n");
					break;
				case '2':
					system("cls");
					cout << "Ba vorude adade yek(1) be tedade adad khateme dahid" << endl;
					cin >> q;
					if(q==0)
					{
						system("cls");
						cout << "Error. Meghdar Tarif nashode Mibashad" << endl;
						system("Pause>n");
						break;
					}
					divide = q;
					while (q != 1 && q!=0)
					{
						cin >> q;
						divide /= q;
					}
					if(q==0)
					{
						system("cls");
						cout << "Error. Meghdar Tarif nashode Mibashad" << endl;
						system("Pause>n");
						break;
					}
					remember = divide;
					system("cls");
					cout << "Natije barabar ast ba = " << divide << endl << "Press any key to go to Main Menu" << endl;
					system("pause>n");
				default:
					break;
				}
			case '5':
				about();
			default:
				break;
			}
			break;
		case '2':
			system("color 67");
			cout << "Engineering Calculating" << endl << endl << "Type following number to go for action:" << endl;
			cout << "(1) Triangular Proportions" << endl << "(2) Logarithm" << endl << "(3) Exponent" << endl << "(4) square root" << endl;
			cout << "(5) Factorial" << endl << "(6) floor (integral part)" << endl << "(7) Modular (Absolute Value)" << endl << "(8) Back" << endl;
			char menu2;
			cin >> menu2;
			//Menu 2
			switch (menu2)
			{
			case '1':
				system("cls");
				cout << "Triangular Proportions" << endl << endl << "Type following number to go for action:" << endl;
				cout << "(1) Sin" << endl << "(2) Cos" << endl << "(3) Tan" << endl << "(4) Cot" << endl << "(5) Sec" << endl << "(6) Csc" << endl << "(7) Back" << endl;
				char menu21;
				cin >> menu21;
				switch (menu21)
				{
				case '1':
					//Dasturate mosalasati
					system("cls");
					cout << "Type following number to go for action:" << endl;
					cout << "(1) Sin" << endl << "(2) Sin Inverse" << endl << "(3) Back to Menu" << endl;
					char menu211;
					cin >> menu211;
					switch (menu211)
					{
					case '1':
						double n1;
						system("cls");
						cout << "Adad ra vared konid:" << endl;
						cin >> n1;
						n1 = ((n1*(3.141592654)) / (180));
						system("cls");
						cout << "Natije barabar ast ba = " << sin(n1) << endl << "Press any key to go to Main Menu" << endl;
						system("pause>n");
						break;
					case '2':
						double n2;
						system("cls");
						cout << "Adad ra vared konid:" << endl;
						cin >> n2;
						system("cls");
						cout << "Natije barabar ast ba = " << (asin(n2)*(180 / 3.141592654)) << endl << "Press any key to go to Main Menu" << endl;
						system("pause>n");
						break;
					case '3':
						about();
					default:
						break;
					}
					break;
				case '2':
					system("cls");
					cout << "Type following number to go for action:" << endl;
					cout << "(1) Cos" << endl << "(2) Cos Inverse" << endl << "(3) Back to Menu" << endl;
					char menu212;
					cin >> menu212;
					switch (menu212)
					{
					case '1':
						double n3;
						system("cls");
						cout << "Adad ra vared konid:" << endl;
						cin >> n3;
						n3 = ((n3*(3.141592654)) / (180));
						system("cls");
						cout << "Natije barabar ast ba = " << cos(n3) << endl << "Press any key to go to Main Menu" << endl;
						system("pause>n");
						break;
					case '2':
						double n4;
						system("cls");
						cout << "Adad ra vared konid:" << endl;
						cin >> n4;
						system("cls");
						cout << "Natije barabar ast ba = " << (acos(n4)*(180 / 3.141592654)) << endl << "Press any key to go to Main Menu" << endl;
						system("pause>n");
						break;
					case '3':
						about();
					default:
						break;
					}
					break;
				case '3':
					system("cls");
					cout << "Type following number to go for action:" << endl;
					cout << "(1) Tan" << endl << "(2) Tan Inverse" << endl << "(3) Back to Menu" << endl;
					char menu213;
					cin >> menu213;
					switch (menu213)
					{
					case '1':
						double n5;
						system("cls");
						cout << "Adad ra vared konid:" << endl;
						cin >> n5;
						if (n5 == 90)
						{
							system("cls");
							cout << "Error. Meghdar Tarif nashode Mibashad"<<endl;
							system("Pause>n");
							break;
						}
						n5 = ((n5*(3.141592654)) / (180));;
						system("cls");
						cout << "Natije barabar ast ba = " << tan(n5) << endl << "Press any key to go to Main Menu" << endl;
						system("pause>n");
						break;
					case '2':
						double n6;
						system("cls");
						cout << "Adad ra vared konid:" << endl;
						cin >> n6;
						system("cls");
						cout << "Natije barabar ast ba = " << (atan(n6)*(180 / 3.141592654)) << endl << "Press any key to go to Main Menu" << endl;
						system("pause>n");
						break;
					case '3':
						about();
					default:
						break;
					}
					break;
				case '4':
					system("cls");
					cout << "Type following number to go for action:" << endl;
					cout << "(1) Cot" << endl << "(2) Cot Inverse" << endl << "(3) Back to Menu" << endl;
					char menu214;
					cin >> menu214;
					switch (menu214)
					{
					case '1':
						double n7;
						system("cls");
						cout << "Adad ra vared konid:" << endl;
						cin >> n7;
						if (n7 == 0)
						{
							system("cls");
							cout << "Error. Meghdar Tarif nashode Mibashad" << endl;
							system("Pause>n");
							break;
						}
						n7 = ((n7*(3.141592654)) / (180));;
						system("cls");
						cout << "Natije barabar ast ba = " << (cos(n7)) / (sin(n7)) << endl << "Press any key to go to Main Menu" << endl;
						system("pause>n");
						break;
					case '2':
						double n8;
						system("cls");
						cout << "Adad ra vared konid:" << endl;
						cin >> n8;
						system("cls");
						cout << "Natije barabar ast ba = " << (atan(1 / (n8))*(180 / 3.141592654)) << endl << "Press any key to go to Main Menu" << endl;
						system("pause>n");
						break;
					case '3':
						about();
					default:
						break;
					}
					break;
				case '5':
					system("cls");
					cout << "Type following number to go for action:" << endl;
					cout << "(1) Sec" << endl << "(2) Sec Inverse" << endl << "(3) Back to Menu" << endl;
					char menu215;
					cin >> menu215;
					switch (menu215)
					{
					case '1':
						double n9;
						system("cls");
						cout << "Adad ra vared konid:" << endl;
						cin >> n9;
						if (n9 == 90)
						{
							system("cls");
							cout << "Error. Meghdar Tarif nashode Mibashad" << endl;
							system("Pause>n");
							break;
						}
						n9 = ((n9*(3.141592654)) / (180));;
						system("cls");
						cout << "Natije barabar ast ba = " << (1) / (cos(n9)) << endl << "Press any key to go to Main Menu" << endl;
						system("pause>n");
						break;
					case '2':
						double n10;
						system("cls");
						cout << "Adad ra vared konid:" << endl;
						cin >> n10;
						system("cls");
						cout << "Natije barabar ast ba = " << (acos(1 / (n10))*(180 / 3.141592654)) << endl << "Press any key to go to Main Menu" << endl;
						system("pause>n");
						break;
					case '3':
						about();
					default:
						break;
					}
				case '6':
					system("cls");
					cout << "Type following number to go for action:" << endl;
					cout << "(1) Csc" << endl << "(2) Csc Inverse" << endl << "(3) Back to Menu" << endl;
					char menu216;
					cin >> menu216;
					switch (menu216)
					{
					case '1':
						double n11;
						system("cls");
						cout << "Adad ra vared konid:" << endl;
						cin >> n11;
						if (n11 == 0)
						{
							system("cls");
							cout << "Error. Meghdar Tarif nashode Mibashad" << endl;
							system("Pause>n");
							break;
						}
						n11 = ((n11*(3.141592654)) / (180));;
						system("cls");
						cout << "Natije barabar ast ba = " << (1) / (sin(n11)) << endl << "Press any key to go to Main Menu" << endl;
						system("pause>n");
						break;
					case '2':
						double n12;
						system("cls");
						cout << "Adad ra vared konid:" << endl;
						cin >> n12;
						system("cls");
						cout << "Natije barabar ast ba = " << (asin(1 / (n12))*(180 / 3.141592654)) << endl << "Press any key to go to Main Menu" << endl;
						system("pause>n");
						break;
					case '3':
						about();
					default:
						break;
					}
				case '7':
					about();
				default:
					break;
				}
				break;
			case '2':
				//Log(10)
				int num1;
				system("cls");
				cout << "Adad ra vared konid:" << endl;
				cin >> num1;
				system("cls");
				cout << "Natije barabar ast ba = " << (log10(num1)) << endl << "Press any key to go to Main Menu" << endl;
				system("pause>n");
				break;
			case '3':
				//Tavan
				system("cls");
				cout << "2 Adad vared konid (Adade aval Paye va adade dovom Tavan):" << endl;
				float num2, num3;
				cin >> num2 >> num3;
				system("cls");
				cout << "Natije barabar ast ba = " << (pow(num2, num3)) << endl << "Press any key to go to Main Menu" << endl;
				system("pause>n");
				break;
			case '4':
				//Radical(Forje2)
				float num4;
				system("cls");
				cout << "Adad ra vared konid:" << endl;
				cin >> num4;
				system("cls");
				if (num4>0)
				{
					cout << "Natije barabar ast ba = " << (sqrt(num4)) << endl << "Press any key to go to Main Menu" << endl;
				}
				else cout << "Error" << endl;
				system("pause>n");

				break;
			case '5':
				//Factorial
				int num5;
				system("cls");
				cout << "Adad ra vared konid:" << endl;
				cin >> num5;
				system("cls");
				cout << "Natije barabar ast ba = " << (Fact(num5)) << endl << "Press any key to go to Main Menu" << endl;
				system("pause>n");
				break;
			case '6':
				//Joze sahih
				double num6;
				system("cls");
				cout << "Adad ra vared konid:" << endl;
				cin >> num6;
				system("cls");
				cout << "Natije barabar ast ba = " << floor(num6) << endl << "Press any key to go to Main Menu" << endl;
				system("pause>n");
				break;
			case '7':
				//Ghadre Motlagh
				float num7;
				system("cls");
				cout << "Adad ra vared konid:" << endl;
				cin >> num7;
				if (num7<0) num7 = (-1)*num7;
				system("cls");
				cout << "Natije barabar ast ba = " << num7 << endl << "Press any key to go to Main Menu" << endl;
				system("pause>n");
				break;
			case '8':
				about();
			default:
				break;
			}
			break;
		case '3':
			//matrix
			system("color 2e");
			cout << "Matrix" << endl << endl << "Type following number to go for action:" << endl;
			cout << "(1) Add(+)" << endl << "(2) Subtract(-)" << endl << "(3) Multiply(*)" << endl;
			cout << "(4) Determinant" << endl << "(5) Transpose" << endl << "(6) Back" << endl;
			char menu3;
			cin >> menu3;
			//Menu 3
			switch (menu3)
			{
			case '1':
				//Jame 2 matris
				int m1, m2, m3, m4;
				float matrix1[max][max], matrix2[max][max], matrix3[max][max];
				system("cls");
				cout << "Tedade satr haye matris aval ra vared konid" << endl;
				cin >> m1;
				cout << "Tedade sotun haye matris aval ra vared konid" << endl;
				cin >> m2;
				system("cls");
				cout << "Tedade satr haye matris dovom ra vared konid" << endl;
				cin >> m3;
				cout << "Tedade sotun haye matris dovom ra vared konid" << endl;
				cin >> m4;
				system("cls");
				if (m1 == m3 && m2 == m4)
				{
					cout << "Deraye haye matrise avale khod ra be taritb az chap be rast vared konid" << endl;
					for (int i = 0; i < m1; i++)
					{
						cout << "Satre " << i + 1 << endl;
						for (int j = 0; j < m2; j++)
						{
							cin >> matrix1[i][j];
						}
					}
					system("cls");
					cout << "Deraye haye matrise dovome khod ra be tartib az chap be rast vared konid" << endl;
					for (int i = 0; i < m1;i++)
					{
						cout << "Satre " << i + 1 << endl;
						for (int j = 0; j < m2; j++)
						{
							cin >> matrix2[i][j];
						}
					}
					for (int i = 0; i < m1; i++)
					{
						for (int j = 0; j < m2; j++)
						{
							matrix3[i][j] = matrix2[i][j] + matrix1[i][j];
						}
					}
					system("cls");
					cout << "Hasel jame 2 matris barabar ast ba:" << endl << endl;
					for (int i = 0; i < m1;i++)
					{
						for (int j = 0; j < m2; j++)
						{
							cout << matrix3[i][j] << " ";
						}
						cout << endl;
					}
					system("pause>n");
				}
				else
				{
					cout << "Error";
					system("pause>n");
				}
				break;
			case '2':
				//Tafrighe 2 matris
				int m5, m6, m7, m8;
				float matrix4[max][max], matrix5[max][max], matrix6[max][max];
				system("cls");
				cout << "Tedade satr haye matris aval ra vared konid" << endl;
				cin >> m5;
				cout << "Tedade sotun haye matris aval ra vared konid" << endl;
				cin >> m6;
				system("cls");
				cout << "Tedade satr haye matris dovom ra vared konid" << endl;
				cin >> m7;
				cout << "Tedade sotun haye matris dovom ra vared konid" << endl;
				cin >> m8;
				system("cls");
				if (m5 == m7 && m6 == m8)
				{
					cout << "Deraye haye matrise avale khod ra be taritb az chap be rast vared konid" << endl;
					for (int i = 0; i < m5; i++)
					{
						cout << "Satre " << i + 1 << endl;
						for (int j = 0; j < m6; j++)
						{
							cin >> matrix4[i][j];
						}
					}
					system("cls");
					cout << "Deraye haye matrise dovome khod ra be tartib az chap be rast vared konid" << endl;
					for (int i = 0; i < m5;i++)
					{
						cout << "Satre " << i + 1 << endl;
						for (int j = 0; j < m6; j++)
						{
							cin >> matrix5[i][j];
						}
					}
					for (int i = 0; i < m5; i++)
					{
						for (int j = 0; j < m6; j++)
						{
							matrix6[i][j] = matrix4[i][j] - matrix5[i][j];
						}
					}
					system("cls");
					cout << "Hasel tafrighe 2 matris barabar ast ba:" << endl << endl;
					for (int i = 0; i < m1;i++)
					{
						for (int j = 0; j < m2; j++)
						{
							cout << matrix6[i][j] << " ";
						}
						cout << endl;
					}
					system("pause>n");
				}
				else
				{
					cout << "Error";
					system("pause>n");
				}
				break;
			case '3':
				//Zarbe 2 matris
				int M1, M2, M3, M4;
				float matrix7[max][max], matrix8[max][max], matrix9[max][max];
				system("cls");
				cout << "Tedade satr haye matris aval ra vared konid" << endl;
				cin >> M1;
				cout << "Tedade sotun haye matris aval ra vared konid" << endl;
				cin >> M2;
				system("cls");
				cout << "Tedade satr haye matris dovom ra vared konid" << endl;
				cin >> M3;
				cout << "Tedade sotun haye matris dovom ra vared konid" << endl;
				cin >> M4;
				system("cls");
				if (M2 == M3)
				{
					cout << "Deraye haye matrise avale khod ra be taritb az chap be rast vared konid" << endl;
					for (int i = 0; i < M1; i++)
					{
						cout << "Satre " << i + 1 << endl;
						for (int j = 0; j < M2; j++)
						{
							cin >> matrix7[i][j];
						}
					}
					system("cls");
					cout << "Deraye haye matrise dovome khod ra be tartib az chap be rast vared konid" << endl;
					for (int i = 0; i < M3;i++)
					{
						cout << "Satre " << i + 1 << endl;
						for (int j = 0; j < M4; j++)
						{
							cin >> matrix8[i][j];
						}
					}
					for (int i = 0; i < M1; i++)
					{
						for (int j = 0; j < M4; j++)
						{
							result = 0;
							for (int k = 0; k < M2; k++)
							{
								result += matrix7[i][k] * matrix8[k][j];
							}
							matrix9[i][j] = result;
						}
					}
					system("cls");
					cout << "Hasel zarbe 2 matris barabar ast ba:" << endl << endl;
					for (int i = 0; i < M1;i++)
					{
						for (int j = 0; j < M4; j++)
						{
							cout << matrix9[i][j] << " ";
						}
						cout << endl;
					}
					system("pause>n");
				}
				else
				{
					cout << "Error";
					system("pause>n");
				}
				break;
			case '4':
				//Determinan
				float c[max][max], M7, M8;
				system("cls");
				cout << "Tedade satr haye matris ra vared konid" << endl;
				cin >> M7;
				cout << "Tedade sotun haye matris ra vared konid" << endl;
				cin >> M8;
				if (M7 == M8)
				{
					if (M7 == 1 || M7 == 2 || M7 == 3)
					{
						system("cls");
						cout << "Deraye haye matris ra be taritb az chap be rast vared konid" << endl;
						for (int i = 0; i<M7; i++)
						{
							cout << "Satre " << i + 1 << endl;
							for (int j = 0; j<M8; j++)
								cin >> c[i][j];
						}
						if (M7 == 1)
						{
							system("cls");
							cout << "Determinane matris barabar ast ba:" << endl;
							cout << c;
							system("pause>n");
						}
						if (M7 == 2)
						{
							float total1 = (c[0][0] * c[1][1]) - (c[1][0] * c[0][1]);
							system("cls");
							cout << "Determinane matris barabar ast ba:" << endl << total1 << endl;
							system("pause>n");
						}
						if (M7 == 3)
						{
							float total2 = ((c[0][0] * c[1][1] * c[2][2]) + (c[0][1] * c[1][2] * c[2][0]) + (c[0][2] * c[1][0] * c[2][1])) - ((c[0][2] * c[1][1] * c[2][0]) + (c[0][1] * c[1][0] * c[2][2]) + (c[0][0] * c[1][2] * c[2][1]));
							system("cls");
							cout << "Determinane matris barabar ast ba:" << endl << total2 << endl;
							system("pause>n");
						}
					}
					else
					{
						system("cls");
						cout << "Error";
						system("pause>n");
					}
				}
				else
				{
					system("cls");
					cout << "Error";
					system("pause>n");
				}
				break;
			case '5':
				//Taranahade
				float a[max][max], b[max][max], M5, M6;
				system("cls");
				cout << "Tedade satr haye matris ra vared konid" << endl;
				cin >> M5;
				cout << "Tedade sotun haye matris ra vared konid" << endl;
				cin >> M6;
				system("cls");
				cout << "Deraye haye matris ra be taritb az chap be rast vared konid" << endl;
				for (int i = 0; i<M5; i++)
				{
					cout << "Satre " << i + 1 << endl;
					for (int j = 0; j<M6; j++)
						cin >> b[i][j];
				}
				for (int i = 0; i<M5; i++)
				{
					for (int j = 0; j<M6; j++)
					{
						a[j][i] = b[i][j];
					}
				}
				system("cls");
				cout << "Taranahade matris barabar ast ba:" << endl << endl;
				for (int i = 0; i<M6; i++)
				{
					for (int j = 0; j<M5; j++)
						cout << a[i][j];
					cout << endl;
				}
				system("Pause>n");
				break;
			case '6':
				about();
			default:
				break;
			}
			break;
		case '4':
			//About Me
			system("color 47");
			cout << endl;
			cout << "              ********************" << endl;
			cout << "          ****************************" << endl;
			cout << "       *******                    *******" << endl;
			cout << "    *******        Calculator        *******" << endl;
			cout << " *******   Programmed by Ali Tabaraei   *******" << endl;
			cout << "******    Collegiate Number: 95440185    *******" << endl;
			cout << " *******      Telegram ID: A1i_tab      *******" << endl;
			cout << "   ********                          ********" << endl;
			cout << "      ************************************" << endl;
			cout << "         ******************************" << endl;
			cout<<endl;
			cout << "            Thanks for attention...!" << endl;
			cout << "            Press any key to go Back" << endl;
			system("pause>n");
			break;
		case '5':
			//Bye Bye :)
			system("cls");
			cout << " _____________"<<endl;
			cout << "|  Good Luck  |"<<endl;
			cout << "|  Have fun!  |"<<endl;
			cout << " ------------- "<<endl;
			Sleep(2000);
			exit(0);
		default:
			break;
		}
		system("cls");
	}
}