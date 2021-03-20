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

   char *a = new char[3];
   for (int i = 0; i < 3; i++)
   {
      *(a + i) = 'a';
   }
   char *pointerToa = a;
   delete a;
   //loi bien dich vi pointerToa tro den a nhung vung bo nho cua a da duoc giai phong nen no la NULL pointer.
   cout << "hello";
   cout << *pointerToa;
   delete pointerToa;
   system("pause");
}
