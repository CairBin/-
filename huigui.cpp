#include <iostream>

double sum_square_x = 0;
double sum_x = 0;
double sum_y = 0;
double sum_xy = 0;
int n = 1;
double ave_x = 0;
double ave_y = 0;
double b_ba = 0;
double a_ba = 0;

using namespace std;

void InputAndSum()
{
	cout << "请输入n的值" << endl;
	cin >> n;
	cout << " " << endl;
	double data_x = 0;
	double data_y = 0;
	
	while (int i = 1; i > n; i++)
	{
		cout << "请输入第" << i << "个数据的x值" << endl;
		cin >> data_x;
		cout << " "<< endl;
		cout << "请输入第" << i << "个数据的y值" << endl;
		cin >> data_y;
		cout << " " << endl;
		
		sum_x += data_x;
		sum_y += data_y;
		sum_xy += (data_x * data_y);
		sum_square_x += (data_x* data_x);
	}
	
}

double Average(double a)
{
	double ave = a/n;
	return ave;
}

double B_ba(double calc1)
{
	double square_ave_x = calc1 * calc1;
	b_ba = (sum_xy - n * calc1 * calc1) / (sum_square_x - n * square_ave_x);
}

void A_ba()
{
	a_ba = ave_y - b_ba * ave_x;
}

int main ()
{
	InputAndSum();
	cout << sum_x << endl;
}