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
	cout << "�п�J�����B�P�Q�v(��Q)" << endl;
	cout << "�����B "; cin >> a;
	cout << "�Q�v "; cin >> b;
	cout << "�п�J�����B�P�Q�v(�ƧQ)" << endl;
	cout << "�����B "; cin >> c;
	cout << "�Q�v "; cin >> d;
	total_cloe1 = c;
	do {
				
		interest = (b*0.01 * a);//(0.10*100)
		
		total = a + interest;
		tot1 = tot1 + total;
		cout << "����(��Q) " << year << "�~" << tot1 << endl;



		interest_cloe = (d*0.01 * total_cloe1);
		total_cloe = total_cloe1 + interest_cloe;
		total_cloe1 = total_cloe;
		cout << "����(�ƧQ) " << year << "�~" << total_cloe << endl;
		year++;
	} while (tot1 > total_cloe);


	return 0;
}
