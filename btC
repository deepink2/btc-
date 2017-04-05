
#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

//giai phuong trinh bac nhat Ax+b=0

void ptb1(float a, float b) {
	cout << "\ngiai phuong trinh bac nhat Ax+b=0\n";
	if (a == 0)
		if (b == 0) cout << "\nPt co vo so nghiem" << endl;
		else cout << "\nPt vo nghiem" << endl;
	else cout << "\nPt co nghiem la: " << -b / a << endl;
}

//giai phuong trinh bac nhat Hai Ax^2+bx+c=0

float delta(float a, float b, float c) {
	return b*b-4*a*c;
}

void ptb2(float a, float b,float c) {
	cout << "\ngiai phuong trinh bac Hai Ax^2+bx+c=0\n";
	float d = delta(a, b, c);
	float x1, x2;
	x1 = (-b - sqrt(d)) / 2 / a;
	x2 = (-b + sqrt(d)) / 2 / a;
	cout << "\nDelta: "<<d<<endl;
	if (d > 0) {
		cout << "\nphuong trinh co hai nghiem phan biet\n";
		cout << "x1: " << x1 << " | x2: " << x2<<endl;
	}

	else if (d == 0) {
		cout << "\nphuong trinh co 1 nghiem\n";
		cout << "x: " << -b/2/a <<endl;
	}

	else
		cout << "\nphuong trinh vo nghiem\n";
}


int main()
{
	float a, b,c;
	//cout << "Nhap a, b: "; cin >> a >> b;
	//ptb1(a, b);

	cout << "Nhap a, b,c: "; cin >> a >> b>>c;
	ptb2(a, b, c);
	system("pause");
}
