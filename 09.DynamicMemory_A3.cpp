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
   char *a = new char[10];
   char *c = a + 3;
   for (int i = 0; i < 9; i++)
      a[i] = 'a';
   a[9] = '\0';
   cerr << "a: "
        << "-" << a << "-" << endl;
   cerr << "c: "
        << "-" << c << "-" << endl;
   //Loi tai day boi vi c la con tro den mot bien const nen khong phai dynamic memory allocation, khong the dung ham delete.
   delete c;
   cerr << "a after deleting c:"
        << "-" << a << "-" << endl;

   system("pause");
}
