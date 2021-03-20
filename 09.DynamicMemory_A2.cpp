#include <bits/stdc++.h>
using namespace std;
int sizeOfa;
int sizeOfb;
char *concat(const char *a, const char *b)
{
   char *temp = new char[sizeOfa + sizeOfb];
   strcpy(temp, a);
   strcpy(temp + sizeOfa, b);
   return temp;
}
int main()
{
   int *p = new int;
   int *p2 = p;
   *p = 10;
   delete p;
   // loi bat dau tu day vi da xoa p, nen p2 tro toi dia chi vo dinh
   *p2 = 100;
   cout << *p2;
   delete p2;

   system("pause");
}
