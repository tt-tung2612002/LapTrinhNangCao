#include <bits/stdc++.h>
using namespace std;

struct Point
{
    double x;
    double y;
    Point(){};
    Point(double *x_, double *y_)
    {
        this->x = *x_;
        this->y = *y_;
    }
    Point(double &_x, double &_y)
    {
        cout << "Dia chi cua truong x khi truyen tham chieu la: " << &_x << endl;
        cout << "Dia tri cua truong y khi truyen tham chieu la: " << &_y << endl;
        this->x = _x;
        this->y = _y;
    }
    Point mid_point(const Point &a, const Point &b)
    {
        Point temp;
        temp.x = (a.x + b.x) / 2;
        temp.y = (a.y + b.y) / 2;
        return temp;
    }
};

int main()
{
    double xValue = 2, yValue = 3;
    cout << "Dia chi cua bien x trong main la: " << &xValue << endl
         << "Dia chi cua bien y trong main la: " << &yValue << endl;
    Point a(xValue, yValue);
    Point b;
    b.x = xValue;
    b.y = yValue;
    cout << "Dia chi cua truong x khi duoc truyen tham tri la: " << &b.x << endl;
    cout << "Dia chi cua truong y khi duoc truyen tham tri la: " << &b.y << endl;
    cout << "Vi tri tuong doi giua cac truong x va y cua mot bien kieu Point so voi chinh bien do la: " << endl;
    cout << "Dia chi cua truong x cua bien a: " << &a.x << endl;
    cout << "Dia chi cua truong y cua bien a: " << &a.y << endl;
    cout << "Dia chi cua bien a: " << &a << endl;
    cout << "Nhan xet: Dia chi cua truong x trung voi dia chi cua bien a vi x la bien dia phuong dau tien trong ham khoi tao cua struct Point, dia chi cua y = dia chi cua x + 8 bytes vi kieu double co size = 8 bytes." << endl;
    // Point d(&xValue, &yValue);
    // Point *e = &d;
    // cout << &d.x << " " << &e->x;
    Point *d = new Point[5];
    for (int i = 0; i < 5; i++)
    {
        d[i] = Point(&xValue, &yValue);
    }
    Point *e = d;
    // Tat ca cac truong du lieu cua mang struct duoc sao chep co dia chi trung voi truong tuong ung cua ban sao cua mang struct do
    for (int i = 0; i < 5; i++)
    {
        cout << &e->x << " " << &d->x << endl;
    }
    system("pause");
}