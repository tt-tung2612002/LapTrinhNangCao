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
   char *a = "hello";
   char *b = "world";
   sizeOfa = strlen(a);
   sizeOfb = strlen(b);
   auto c = concat(a, b);
   cout << c;

   system("pause");
}
