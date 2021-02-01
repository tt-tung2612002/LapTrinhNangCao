#include<ctime>
#include<iostream>
#include<ctime>
using namespace std;

int main(){
	struct tm* timeinfo;
	time_t timer;
	int day,month,year;
	cin >> day >> month >> year;
	string weekday[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	timer = time(0);
	timeinfo = localtime(&timer);
	timeinfo->tm_year = year-1900;
	timeinfo->tm_mon = month-1;
	timeinfo-> tm_mday = day;
	mktime (timeinfo);
	cout << weekday[timeinfo->tm_wday];
	system("pause");
}
