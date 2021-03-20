#include <bits/stdc++.h>
using namespace std;
int charToNum(char a)
{
	return a - '0';
}
struct BigInterger
{
	string number;
	bool checkNumMax(BigInterger b)
	{
		if (this->number.length() > b.number.length())
		{
			return true;
		}
		else if (this->number.length() < b.number.length())
		{
			return false;
		}
		else
		{
			for (int i = 0; i < b.number.length(); i++)
			{
				if (this->number[i] > b.number[i])
				{
					return true;
				}
				else if (this->number[i] < b.number[i])
				{
					return false;
				}
			}
		}
	}
	void Sum(BigInterger max, BigInterger min)
	{
		int i = max.number.length() - 1;
		int diff = max.number.length() - min.number.length();
		for (int i = 0; i < diff; i++)
		{
			min.number.insert(0, 1, '0');
		}
		int j = min.number.length() - 1;
		string str;
		int temp = 0;
		while (j >= 0)
		{
			temp = temp + charToNum(max.number[i]) + charToNum(min.number[j]);
			str.insert(0, 1, (char)temp % 10 + 48);
			temp = temp / 10;
			i--;
			j--;
		}
		if (temp > 0)
		{
			str.insert(0, 1, (char)temp + 48);
		}
		this->number = str;
	}
};
struct BigInterger sum(struct BigInterger &first, struct BigInterger &second)
{
	string str;
	BigInterger temp;
	BigInterger max;
	BigInterger min;
	if (first.checkNumMax(second))
	{

		max.number = first.number;

		min.number = second.number;
	}
	else
	{

		max.number = second.number;

		min.number = first.number;
	}
	temp.Sum(max, min);

	return temp;
};
int main()
{
	char a[4] = "abc";
	for (char *cp = a; (*cp) != '\0'; cp++)
	{
		// cout << (void *)cp << " : " << (*cp) << endl;
	}
	int arr[4] = {1, 2, 3};
	// output van tinh duoc kich thuoc cua kieu int.
	// for (int *cp = arr;(*cp) != '\0';cp++){
	// 	cout << (void *)cp << " : " << (*cp) << endl;
	// }
	double arr2[4] = {4,5,6};
	// output van tinh duoc kich thuoc cua kieu double.
	for (double *cp = arr2;(*cp) != '\0';cp++){
		cout << (void *)cp << " : " << (*cp) << endl;
	}
	// khong in dc gia tri arr2[1]
	for (double *cp = arr2;(*cp) != '\0';cp+=2){
		cout << (void *)cp << " : " << (*cp) << endl;
	}
	system("pause");
}
