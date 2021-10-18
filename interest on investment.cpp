#include <iostream>
#include<cstring>
#include<string>
using namespace std;
int year;
float interest, interest_cloe;


int main() {
	float total_cloe;
	float total_cloe1 = 1;
	float total;
	float tot1 = 0;
	float a, b, c, d;
	cout << "請輸入投資金額與利率(單利)" << endl;
	cout << "投資金額 "; cin >> a;
	cout << "利率 "; cin >> b;
	cout << "請輸入投資金額與利率(複利)" << endl;
	cout << "投資金額 "; cin >> c;
	cout << "利率 "; cin >> d;
	total_cloe1 = c;
	do {
				
		interest = (b*0.01 * a);//(0.10*100)
		
		total = a + interest;
		tot1 = tot1 + total;
		cout << "投資需(單利) " << year << "年" << tot1 << endl;



		interest_cloe = (d*0.01 * total_cloe1);
		total_cloe = total_cloe1 + interest_cloe;
		total_cloe1 = total_cloe;
		cout << "投資需(複利) " << year << "年" << total_cloe << endl;
		year++;
	} while (tot1 > total_cloe);


	return 0;
}
