#include<iostream.h>
#include<math.h>
#include<conio.h>
float a, b, c, x1, x2, decr;
//decr  дескрименант

void main()
{
	clrscr();
	cout << "\n Введите коэффициенты a,b,c уравнения: \n a*x^2+bx+c\n";
	cin >> a >> b >> c;   //Вввод с клавиатуры
	decr = b*b - 4 * a*c;
	if (decr<0)
		cout << "Решение уравнения";
	else
	{
		x1 = (-b + sqrt(decr)) / (2 * a);
		x2 = (-b - sqrt(decr)) / (2 * a);
		cout << "\n x1=";
		cout.width(12);   //ширина поля 10 символов
		cout.precision(4);//точность 4 цифры
		cout.fill('~');   //заполнить вместо пробелов символом $
		cout << x1 << "\n x2=";
		cout.width(12);   //ширина поля 10 символов
		cout.precision(4);//точность 4 цифры
		cout << x2;
	}getch();     //ждёт нажатия на любую клавишу
}