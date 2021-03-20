#include <bits/stdc++.h>
#include "ostream.h"
using namespace std;

void f(int xval)
{
	int x;
	x = xval;
	cout << &x << endl;
}
void g(int yval)
{
	int y;
	cout << &y;
}
int main()
{
	f(7);
	g(11);
	// Dia chi cua x va y giong nhau vi x va y deu cung la bien dia phuong dau tien trong ham f va ham g, deu duoc goi tu main.
	system("pause");
}

