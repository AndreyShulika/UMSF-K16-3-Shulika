#include<iostream.h>
#include<math.h>
#include<conio.h>
float a, b, c, x1, x2, decr;
//decr  ������������

void main()
{
	clrscr();
	cout << "\n ������� ������������ a,b,c ���������: \n a*x^2+bx+c\n";
	cin >> a >> b >> c;   //����� � ����������
	decr = b*b - 4 * a*c;
	if (decr<0)
		cout << "������� ���������";
	else
	{
		x1 = (-b + sqrt(decr)) / (2 * a);
		x2 = (-b - sqrt(decr)) / (2 * a);
		cout << "\n x1=";
		cout.width(12);   //������ ���� 10 ��������
		cout.precision(4);//�������� 4 �����
		cout.fill('~');   //��������� ������ �������� �������� $
		cout << x1 << "\n x2=";
		cout.width(12);   //������ ���� 10 ��������
		cout.precision(4);//�������� 4 �����
		cout << x2;
	}getch();     //��� ������� �� ����� �������
}