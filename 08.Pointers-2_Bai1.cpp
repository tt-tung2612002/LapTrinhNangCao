#include <bits/stdc++.h>
using namespace std;
int size;
char *strcpy(char* destination,char* source,int length){
    for (int i=0;i<length;i++){
        *(destination+i) = *(source+i);
    }
    *(destination+length) = '\0';
    return destination;
}
size_t strlen(const char *str){
    size_t count =0;
    while (str[count] != '\0')
        count++;        
    return count;
}
char *reverse(char a[]){
    char* str = new char[size];
    strcpy(str,a,size);
    for (int i=0;i<size/2;i++){
        swap(*(str+i),*(str+size-i-1));
    }
    return str;
}
char* delete_char(char a[],char c){
    int count=0;
    char* str = new char[size];
    strcpy(str,a,size);
    for (int i=0;i<size;i++){
        if (*(str+i)== c){
            for (int j=i;j<size-1;j++){
                *(str+j)=*(str+j+1);
            }
            i--;
            count++;
        }
    }
    char* ans = new char[size-count];
    return strcpy(ans,str,size-count);
}
char* pad_right(char a[], int n){
    if (n>size) return a;
    char* str = new char[size +n];
    strcpy(str,a,size);
    for (int i=size;i<size+n;i++){
        *(str+i)= ' ';
    }
    *(str+size+n) = '\0';
    return str;
}
char* pad_left(char a[], int n){
    if (n>size) return a;
    char* str = new char[size+n];
    for (int i=0;i<n;i++){
        *(str+i)= ' ';
    }
    strcpy(str+n,a,size);
    *(str+size+n) = '\0';
    return str;
}
char *truncate(char a[], int n){
    char* str = new char[n];
    return strcpy(str,a,n);
}
bool is_palindrome(char a[]){
    for (int i=0;i<size/2;i++){
        if(*(a+i)!=*(a+size-i-1))
            return false;
    }
    return true;   
}
char* trim_left(char a[]){
    int i =0;
    char* str = new char[size];
    strcpy(str,a,size);
    while( str[i] == ' '){
        for (int j=i;j<size;j++){
            *(str+j) = *(str+j+1);
        }
        i++;
    }
    char* ans = new char[size-i];
    return strcpy(ans,str+i,size-i);
}
char* trim_right(char a[]){
    int i =0;
    char* str = new char[size];
    strcpy(str,a,size);
    while( str[size-i-1] == ' ')
        i++;
    char* ans = new char[size-i];
    return strcpy(ans,str+i,size-i);
}
int main(){
    char a[] = {' ',' ','a','b','c','c','b','a','d','\0'};
    size = strlen(a);
    cout << "Xau ban dau la: ";
    for (auto it: a) cout << it << " ";
    cout << endl;
    char* b = reverse(a);
    cout << "Sau khi dao xau: ";
    for(int i=0;i<strlen(b);i++){
        cout << b[i] << " ";
    }
    cout << endl;
    cout << "Xau sau khi loai bo chu cai c la: ";
    char* c = delete_char(a,'c');
    for(int i=0;i<strlen(c);i++){
        cout << c[i] << " ";
    }
    cout << endl;
    cout << "Xau sau khi don phai 5 dau space la : ";
    char *d= pad_right(a,5);
    for(int i=0;i<strlen(d);i++){
        cout << d[i] << "_";
    }
    cout << endl;
    cout << "Xau sau khi don trai 5 dau space la : ";
    char *e = pad_left(a,5);
    for(int i=0;i<strlen(e);i++){
        cout << e[i] << "_";
    }
    cout << endl;
    cout << "Xau sau khi truncate de co do dai bang 4 la: ";
    char* f = truncate(a,4);
    for(int i=0;i<strlen(f);i++){
        cout << f[i] << " ";
    }
    cout << endl;
    if (is_palindrome(a))
        cout << "Xau ban dau la xau doi xung!";
    else cout << "Xau ban dau khong phai xau doi xung!";
    cout << endl;   
    char g[] = {' ',' ','a','b','c','c','b','a','d',' ',' ','\0'};
    cout <<"Xau moi co cac phan tu la: ";
    for (int i=0;i<strlen(g) && g[i] != '\0';i++) cout << g[i] << "_";
    cout << endl;
    char *h = trim_left(g);
    cout << "Xau moi sau khi trim left la: ";
    for (int i=0;i<strlen(h);i++){
        cout << h[i] << " ";
    }
    cout << "Xau moi sau khi trim right la: ";
    char *k = trim_right(g);
    for (int i=0;i<strlen(k);i++){
        cout << k[i] << " ";
    }
	system("pause");
}