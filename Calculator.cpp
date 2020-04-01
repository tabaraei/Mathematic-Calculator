#include<iostream>
#include<math.h>
#include<windows.h>
#include<string>
#define max 100
using namespace std;

// --------------------------------------- Normal Operations --------------------------------------
void shiftValues(float A[max], int index, int size)
{
	for (int i = index; i < size; i++)
		A[i] = A[i + 1];
}
void shiftOperators(char A[max], int index, int size)
{
	for (int i = index; i < size - 1; i++)
		A[i] = A[i + 1];
}
void normalOperation()
{
	int i = 0;
	char operation;
	char operations[max];
	float value;
	float values[max];
	
	system("cls");
	cout << "Lotfan yek ebarat vared konid (mesal: 2 + 3 * 4 =)" << endl;
	while (true)
	{
		cin >> value;
		values[i] = value;

		cin >> operation;
		if (operation == '=') break;
		operations[i] = operation;

		i++;
	}

	// check multiply
	for (int j = 0; j < i; j++)
	{
		if (operations[j] == '*')
		{
			values[j+1] = values[j] * values[j + 1];
			shiftValues(values, j, i);
			shiftOperators(operations, j, i);
			i--;
			j--;
		}
	}

	// check divisors
	bool valid = true;
	for (int j = 0; j < i; j++)
	{
		if (operations[j] == '/')
		{
			if (values[j + 1] == 0)
			{
				valid = false;
				break;
			}
			else
			{
				values[j + 1] = values[j] / values[j + 1];
				shiftValues(values, j, i);
				shiftOperators(operations, j, i);
				i--;
				j--;
			}
		}
	}

	// check sub
	for (int j = 0; j < i; j++)
	{
		if (operations[j] == '-')
		{
			values[j + 1] = values[j] - values[j + 1];
			shiftValues(values, j, i);
			shiftOperators(operations, j, i);
			i--;
			j--;
		}
	}

	// check sum
	for (int j = 0; j < i; j++)
	{
		if (operations[j] == '+')
		{
			values[j + 1] = values[j] + values[j + 1];
			shiftValues(values, j, i);
			shiftOperators(operations, j, i);
			i--;
			j--;
		}
	}

	if (valid)
		cout << values[0] << endl;
	else
		cout << "Khata dar taghsim bar sefr" << endl;


	cout << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}

// ------------------------------------- Triangular Operations ------------------------------------
void Sin()
{
	double num;
	system("cls");
	cout << "Adad ra bar hasbe daraje vared konid:" << endl;
	cin >> num;
	num = ((num*(3.141592654)) / (180));
	system("cls");
	cout << "Natije barabar ast ba = " << sin(num) << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}
void Cos()
{
	double num;
	system("cls");
	cout << "Adad ra bar hasbe daraje vared konid:" << endl;
	cin >> num;
	num = ((num*(3.141592654)) / (180));
	system("cls");
	cout << "Natije barabar ast ba = " << cos(num) << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}
void Tan()
{
	double num;
	system("cls");
	cout << "Adad ra vared bar hasbe daraje konid:" << endl;
	cin >> num;
	if (num == 90)
	{
		system("cls");
		cout << "Error. Meghdar Tarif nashode Mibashad" << endl;
		system("Pause>n");
		return;
	}

	num = ((num*(3.141592654)) / (180));;
	system("cls");
	cout << "Natije barabar ast ba = " << tan(num) << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}
void Cot()
{
	double num;
	system("cls");
	cout << "Adad ra bar hasbe daraje vared konid:" << endl;
	cin >> num;
	if (num == 0)
	{
		system("cls");
		cout << "Error. Meghdar Tarif nashode Mibashad" << endl;
		system("Pause>n");
		return;
	}

	num = ((num*(3.141592654)) / (180));;
	system("cls");
	cout << "Natije barabar ast ba = " << (cos(num)) / (sin(num)) << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}

// ---------------------------------------- Other Operations --------------------------------------
void power()
{
	system("cls");
	cout << "2 Adad vared konid (Adade aval Paye va adade dovom Tavan):" << endl;
	float base, p;
	cin >> base >> p;
	system("cls");
	cout << "Natije barabar ast ba = " << pow(base, p) << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}
void squareRoot()
{
	float num;
	system("cls");
	cout << "Adad ra vared konid:" << endl;
	cin >> num;
	system("cls");
	if (num > 0)
	{
		cout << "Natije barabar ast ba = " << sqrt(num) << endl << "Press any key to go to Main Menu" << endl;
	}
	else cout << "Error" << endl;
	system("pause>n");
}
void root()
{
	float num, p;
	system("cls");
	cout << "Adad ra vared konid:" << endl;
	cin >> num;
	cout << "Rishe ra vared konid:" << endl;
	cin >> p;
	system("cls");
	cout << "Natije barabar ast ba = " << pow(num, 1/p) << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}
void factorial()
{
	int num;
	system("cls");
	cout << "Adad ra vared konid:" << endl;
	cin >> num;
	system("cls");

	long long int fact = 1;
	for (; num; num--)
	{
		fact = fact*num;
	}

	cout << "Natije barabar ast ba = " << fact << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}
void isPrime()
{
	int num;
	system("cls");
	cout << "Adad ra vared konid:" << endl;
	cin >> num;
	system("cls");

	bool prime = true;
	for (int i=2; i<=sqrt(num); i++)
	{
		if (num%i == 0)
		{
			prime = false;
			break;
		}
	}

	if(prime) cout << "Adad aval ast!" << endl << "Press any key to go to Main Menu" << endl;
	else cout << "Adad aval nist!" << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}
void isPalindrome()
{
	string c;
	system("cls");
	cout << "Adad ra vared konid:" << endl;
	cin >> c;
	system("cls");

	bool palindrome = true;
	int i = 0, j = c.size() - 1;
	while (i <= j)
	{
		if (c[i] != c[j])
			palindrome = false;

		i++;
		j--;
	}

	if (palindrome) cout << "Adad motaqaren ast!" << endl << "Press any key to go to Main Menu" << endl;
	else cout << "Adad motaqaren nist!" << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}
void convertBase()
{
	system("cls");
	int num, fromBase, toBase;
	cout << "Adade morede nazar ra vared konid:" << endl;
	cin >> num;
	cout << "Mabnaye adade vorudi ra vared konid:" << endl;
	cin >> fromBase;
	cout << "Mabnaye adade khoruji ra vared konid:" << endl;
	cin >> toBase;
	system("cls");

	// convert input number to base 10
	int counter = 0, r, Base10 = 0;
	while (num)
	{
		r = num % 10;
		Base10 += r*pow(fromBase, counter);
		num /= 10;
		counter++;
	}

	// convert from base10 to any
	int requestedBase = 0;
	r = counter = 0;
	while (Base10)
	{
		if (Base10 / toBase)
		{
			r = Base10 % toBase;
			requestedBase += r*pow(10, counter);

			counter++;
		}
		else
			requestedBase += Base10*pow(10, counter);
		Base10 /= toBase;
	}

	cout << "Natije barabar ast ba = " << requestedBase << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}

// -------------------------------------- Matrice Operations --------------------------------------
struct Matrice {
	int row, col;
	int Mat[max][max] = { 0 };
};
void createMatrice(Matrice &x)
{
	cout << "Enter number of rows" << endl;
	cin >> x.row;
	cout << "Enter number of columns" << endl;
	cin >> x.col;
	system("cls");	

	cout << "Insert matrice elements" << endl;
	for (int i = 0; i < x.row; i++)
	{
		cout << "Row " << i + 1 << endl;
		for (int j = 0; j < x.col; j++)
		{
			cin >> x.Mat[i][j];
		}
	}

	system("cls");
}
void Determinant(Matrice &x)
{
	if (x.row == x.col)
	{
		if (x.row == 1 || x.row == 2 || x.row == 3)
		{
			system("cls");

			if (x.row == 1)
			{
				system("cls");
				cout << "Determinane matris barabar ast ba:" << endl;
				cout << x.Mat[0][0];
				system("pause>n");
			}
			if (x.row == 2)
			{
				float total = (x.Mat[0][0] * x.Mat[1][1]) - (x.Mat[1][0] * x.Mat[0][1]);
				system("cls");
				cout << "Determinane matris barabar ast ba:" << endl << total << endl;
				system("pause>n");
			}
			if (x.row == 3)
			{
				float total = ((x.Mat[0][0] * x.Mat[1][1] * x.Mat[2][2]) + (x.Mat[0][1] * x.Mat[1][2] * x.Mat[2][0]) + (x.Mat[0][2] * x.Mat[1][0] * x.Mat[2][1])) - ((x.Mat[0][2] * x.Mat[1][1] * x.Mat[2][0]) + (x.Mat[0][1] * x.Mat[1][0] * x.Mat[2][2]) + (x.Mat[0][0] * x.Mat[1][2] * x.Mat[2][1]));
				system("cls");
				cout << "Determinane matris barabar ast ba:" << endl << total << endl;
			}
		}
		else
		{
			system("cls");
			cout << "Error";
		}

		cout << endl << "Press any key to go to Main Menu" << endl;
		system("pause>n");
	}
	else
	{
		system("cls");
		cout << "Error";
		system("pause>n");
	}
}
void Transpose(Matrice &x)
{
	Matrice result;
	result.row = x.col;
	result.col = x.row;

	for (int i = 0; i < x.row; i++)
	{
		for (int j = 0; j < x.col; j++)
		{
			result.Mat[j][i] = x.Mat[i][j];
		}
	}
	system("cls");
	cout << "Taranahade matris barabar ast ba:" << endl << endl;
	for (int i = 0; i < result.row; i++)
	{
		for (int j = 0; j < result.col; j++)
			cout << result.Mat[i][j] << " ";
		cout << endl;
	}
	
	cout << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}
void Sum(Matrice &a, Matrice &b)
{
	Matrice result;
	system("cls");
	if (a.row == b.row && a.col == b.col)
	{	
		result.row = a.row;
		result.col = a.col;

		for (int i = 0; i < a.row; i++)
		{
			for (int j = 0; j < a.col; j++)
			{
				result.Mat[i][j] = a.Mat[i][j] + b.Mat[i][j];
			}
		}
		system("cls");
		cout << "Hasel jame 2 matrice barabar ast ba:" << endl << endl;
		for (int i = 0; i < result.row; i++)
		{
			for (int j = 0; j < result.col; j++)
			{
				cout << result.Mat[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Error matrice dimension";
	}

	cout << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}
void Sub(Matrice &a, Matrice &b)
{
	Matrice result;
	system("cls");
	if (a.row == b.row && a.col == b.col)
	{
		result.row = a.row;
		result.col = a.col;

		for (int i = 0; i < a.row; i++)
		{
			for (int j = 0; j < a.col; j++)
			{
				result.Mat[i][j] = a.Mat[i][j] - b.Mat[i][j];
			}
		}
		system("cls");
		cout << "Hasel tafriqe 2 matrice barabar ast ba:" << endl << endl;
		for (int i = 0; i < result.row; i++)
		{
			for (int j = 0; j < result.col; j++)
			{
				cout << result.Mat[i][j] << " ";
			}
			cout << endl;
		}
		
	}
	else
	{
		cout << "Error matrice dimension";
	}

	cout << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}
void Multiply(Matrice &a, Matrice &b)
{
	Matrice result;
	if (a.col == b.row)
	{
		result.row = a.row;
		result.col = b.col;

		for (int i = 0; i < a.row; i++)
		{
			for (int j = 0; j < b.col; j++)
			{
				int res = 0;
				for (int k = 0; k < a.row; k++)
				{
					res += a.Mat[i][k] * b.Mat[k][j];
				}
				result.Mat[i][j] = res;
			}
		}
		system("cls");
		cout << "Hasel zarbe 2 matris barabar ast ba:" << endl << endl;
		for (int i = 0; i < result.row; i++)
		{
			for (int j = 0; j < result.col; j++)
			{
				cout << result.Mat[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Error matrice dimesnion";
	}

	cout << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}

// -------------------------------------- BigNum Operations ---------------------------------------
struct BigNum {
	string input;
	int number[max] = { 0 };
};
void createBigNum(BigNum &x)
{
	cout << "Enter your number" << endl;
	cin >> x.input;

	for (int i=0, j = x.input.size()-1; j>=0; j--, i++)
	{
		// store reverse of input in array
		x.number[i] = x.input[j] - 48;
	}

	system("cls");
}
void Sum(BigNum &a, BigNum &b)
{
	system("cls");
	BigNum C;
	int i, total, extra = 0;

	for (i = 0; i < a.input.size() && i < b.input.size(); i++)
	{
		total = extra + a.number[i] + b.number[i];
		C.number[i] = total % 10;
		extra = total / 10;
	}

	while (i < a.input.size())
	{
		total = extra + a.number[i];
		C.number[i] = total % 10;
		extra = total / 10;
		i++;
	}

	while (i < b.input.size())
	{
		total = extra + b.number[i];
		C.number[i] = total % 10;
		extra = total / 10;
		i++;
	}

	if (extra != 0)
	{
		C.number[i] = extra;
		cout << "result is: ";
		for (int i = a.input.size(); i >= 0; i--)
			cout << C.number[i];
	}
	else
	{
		cout << "result is: ";
		for (int i = a.input.size()-1; i >= 0; i--)
			cout << C.number[i];
	}

	cout << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}
void Sub(BigNum &a, BigNum &b)
{
	system("cls");
	BigNum C;
	int i, total, extra = 0;

	for (i = 0; i < a.input.size() && i < b.input.size(); i++)
	{
		total = extra + a.number[i] - b.number[i];
		if (total < 0)
		{
			C.number[i] = total + 10;
			extra = -1;
		}
		else
		{
			C.number[i] = total;
			extra = 0;
		}
	}

	while (i < a.input.size())
	{
		total = extra + a.number[i];
		if (total < 0)
		{
			C.number[i] = total + 10;
			extra = -1;
		}
		else
		{
			C.number[i] = total;
			extra = 0;
		}
		i++;
	}

	while (i < b.input.size())
	{
		total = extra + b.number[i];
		if (total < 0)
		{
			C.number[i] = total + 10;
			extra = -1;
		}
		else
		{
			C.number[i] = total;
			extra = 0;
		}
		i++;
	}

	cout << "result is: ";
	// remove zeroes at first
	for (int j = i - 1; j >= 0; j--)
		if (C.number[j] == 0)
			i--;
		else
			break;

	for (int j = i - 1; j >= 0; j--)
		cout << C.number[j];

	cout << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}
void Multiply(BigNum &a, BigNum &b)
{
	system("cls");
	BigNum C;

	for (int i = 0; i < b.input.size(); i++)
	{
		for (int j = 0; j < a.input.size(); j++)
		{
			C.number[i + j] += b.number[i] * a.number[j];
		}
	}

	for (int i = 0; i < b.input.size()*a.input.size(); i++)
	{
		C.number[i + 1] += (C.number[i] / 10);
		C.number[i] %= 10;
	}

	// estimate number of digits
	int digits = floor(log10(stoi(a.input)) + log10(stoi(b.input))) + 1;

	for (int j = digits-1; j >= 0; j--)
		cout << C.number[j];

	cout << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
	
}

// -------------------------------------- Complex Operations --------------------------------------
struct Complex {
	int real, img;
};
void createComplex(Complex &x)
{
	cout << "Enter real part of your number" << endl;
	cin >> x.real;
	cout << "Enter image part of your number" << endl;
	cin >> x.img;

	system("cls");
}
void Sum(Complex &a, Complex &b)
{
	system("cls");
	Complex result;
	result.real = a.real + b.real;
	result.img = a.img + b.img;

	char operation;
	if (result.img < 0)
	{
		result.img *= -1;
		operation = '-';
	}
	else
		operation = '+';

	cout << "Sum of inserted complex numbers: " << result.real << operation << result.img << "i" << endl;

	cout << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}
void Sub(Complex &a, Complex &b)
{
	system("cls");
	Complex result;
	result.real = a.real - b.real;
	result.img = a.img - b.img;

	char operation;
	if (result.img < 0)
	{
		result.img *= -1;
		operation = '-';
	}
	else
		operation = '+';

	cout << "Sum of inserted complex numbers: " << result.real << " " << operation << " " << result.img << "i" << endl;

	cout << endl << "Press any key to go to Main Menu" << endl;
	system("pause>n");
}

// ---------------------------------------- Menu sections -----------------------------------------
void About()
{
	cout << endl;
	cout << "              ********************" << endl;
	cout << "          ****************************" << endl;
	cout << "       *******                    *******" << endl;
	cout << "    *******        Calculator        *******" << endl;
	cout << " *******  Programmed by Mojtaba Nejati  *******" << endl;
	cout << " *******    Telegram ID: Mojtaba_Njt    *******" << endl;
	cout << "   ********                          ********" << endl;
	cout << "      ************************************" << endl;
	cout << "         ******************************" << endl;
	cout << endl;
	cout << "            Thanks for attention...!" << endl;
	cout << "            Press any key to go Back" << endl;
	system("pause>n");
}
void Exit()
{
	system("cls");
	cout << " _____________" << endl;
	cout << "|  Good Luck  |" << endl;
	cout << "|  Have fun!  |" << endl;
	cout << " ------------- " << endl;
	Sleep(2000);
	exit(0);
}
void goBack() {}

// ----------------------------------------- Main Program -----------------------------------------
void main()
{
	while (true)
	{
		system("color 3b");
		cout << "Welcome to my project!" << endl << endl << "Type following number to go for action:" << endl;
		cout << "(1) Normal Calculating" << endl << "(2) Engineering Calculating" << endl << "(3) Matrice" << endl;
		cout << "(4) Complex" << endl << "(5) BigNum" << endl << "(6) About Programmer" << endl << "(7) Exit" << endl;
		char menu;
		cin >> menu;
		system("cls");
		//Main menu
		switch (menu)
		{
		case '1':
			normalOperation();
			break;
		case '2':
			// Engineering
		 {
			cout << "Engineering Calculating" << endl << endl << "Type following number to go for action:" << endl;
			cout << "(1) Triangular Proportions" << endl << "(2) Exponent" << endl << "(3) Square Root" << endl << "(4) Root" << endl;
			cout << "(5) Factorial" << endl << "(6) Check Prime" << endl << "(7) Check Palindrome" << endl;
			cout << "(8) Convert Base" << endl << "(9) Back" << endl;
			char menu2;
			cin >> menu2;
			//Menu 2
			switch (menu2)
			{
			case '1':
				system("cls");
				cout << "Triangular Proportions" << endl << endl << "Type following number to go for action:" << endl;
				cout << "(1) Sin" << endl << "(2) Cos" << endl << "(3) Tan" << endl << "(4) Cot" << endl << "(5) Back" << endl;
				char menu21;
				cin >> menu21;
				switch (menu21)
				{
				case '1':
					//Dasturate mosalasati
					Sin();
					break;
				case '2':
					Cos();
					break;
				case '3':
					Tan();
					break;
				case '4':
					Cot();
					break;
				case '5':
					goBack();
				default:
					break;
				}
				break;
			case '2':
				//Tavan
				power();
				break;
			case '3':
				//Radical(Forje2)
				squareRoot();
				break;
			case '4':
				//root
				root();
				break;
			case '5':
				//factorial
				factorial();
				break;
			case '6':
				//check prime
				isPrime();
				break;
			case '7':
				// check motaqaren
				isPalindrome();
				break;
			case '8':
				// tabidle mabna
				convertBase();
			case '9':
				goBack();
			default:
				break;
			}
		}
			break;
		case '3':
			//matrice
		{
			cout << "Matrix" << endl << endl << "Type following number to go for action:" << endl;
			cout << "(1) Add(+)" << endl << "(2) Subtract(-)" << endl << "(3) Multiply(*)" << endl;
			cout << "(4) Determinant" << endl << "(5) Transpose" << endl << "(6) Back" << endl;
			char menu3;
			Matrice a, b;
			cin >> menu3;
			//Menu 3
			switch (menu3)
			{
			case '1':
				//Jame 2 matris
				system("cls");
				cout << "First Matrice:" << endl;
				createMatrice(a);
				cout << "Second Matrice:" << endl;
				createMatrice(b);
				Sum(a, b);
				break;
			case '2':
				//Tafrighe 2 matris
				system("cls");
				cout << "First Matrice:" << endl;
				createMatrice(a);
				cout << "Second Matrice:" << endl;
				createMatrice(b);
				Sub(a, b);
				break;
			case '3':
				//Zarbe 2 matris
				system("cls");
				cout << "First Matrice:" << endl;
				createMatrice(a);
				cout << "Second Matrice:" << endl;
				createMatrice(b);
				Multiply(a, b);
				break;
			case '4':
				//Determinan
				system("cls");
				createMatrice(a);
				Determinant(a);
				break;
			case '5':
				//Taranahade
				system("cls");
				createMatrice(a);
				Transpose(a);
				break;
			case '6':
				goBack();
			default:
				break;
			}
		}
			break;
		case '4':
			//complex
		{
			cout << "Complex" << endl << endl << "Type following number to go for action:" << endl;
			cout << "(1) Add(+)" << endl << "(2) Subtract(-)" << endl << "(3) Back" << endl;
			char menu3;
			Complex a, b;
			cin >> menu3;
			//Menu 3
			switch (menu3)
			{
			case '1':
				//Jame 2 adade mokhtalet
				system("cls");
				cout << "First Complex:" << endl;
				createComplex(a);
				cout << "Second Complex:" << endl;
				createComplex(b);
				Sum(a, b);
				break;
			case '2':
				//Tafrighe 2 adade mokhtalet
				system("cls");
				cout << "First Complex:" << endl;
				createComplex(a);
				cout << "Second Complex:" << endl;
				createComplex(b);
				Sub(a, b);
				break;
			case '3':
				goBack();
			default:
				break;
			}
		}
			break;
		case '5':
			//bignum
		{
			cout << "BigNum" << endl << endl << "Type following number to go for action:" << endl;
			cout << "(1) Add(+)" << endl << "(2) Subtract(-)" << endl << "(3) Multiply(*)" << endl << "(4) Back" << endl;
			char menu3;
			BigNum a, b;
			cin >> menu3;
			//Menu 3
			switch (menu3)
			{
			case '1':
				//Jame 2 adade bozorg
				system("cls");
				cout << "First BigNum:" << endl;
				createBigNum(a);
				cout << "Second BigNum:" << endl;
				createBigNum(b);
				Sum(a, b);
				break;
			case '2':
				//Tafrighe 2 adade bozorg
				system("cls");
				cout << "First BigNum:" << endl;
				createBigNum(a);
				cout << "Second BigNum:" << endl;
				createBigNum(b);
				Sub(a, b);
				break;
			case '3':
				//Tafrighe 2 adade bozorg
				system("cls");
				cout << "First BigNum:" << endl;
				createBigNum(a);
				cout << "Second BigNum:" << endl;
				createBigNum(b);
				Multiply(a, b);
				break;
			case '4':
				goBack();
			default:
				break;
			}
		}
			break;
		case '6':
			//About Me
			About();
			break;
		case '7':
			//Bye Bye :)
			Exit();
		default:
			break;
		}
		system("cls");
	}
}