#include<iostream>
#include<cmath>
using namespace std;
void variance() {
    float x1 = 10.1, x2 = 9.8, x3 = 10.4, x4 = 10.5, x5 = 9.8, x6 = 10.8, x7 = 9.0;
	float avg, var, sum, sum1, sum2[7];
	int n = 20, i = 1;

    sum1 = x1 + x2 + x3 + x4 + x5 + x6 + x7;
    avg = (sum1) / 7;

	for(i=1;i<=7;i++)
	{
		float b= sum1-avg;
		sum2[i]=pow(b,2);
		sum += sum2[i];
		var = sum * (n / 7);
	}
	float y=0.95;
	//value to check from table to give you z
	float  cl=(1-y)/2;
	float z;
	cout<<"confidence level value is: \n"<<cl<<endl;
    //The z value from the table
	cout<<"Enter the z value as per the confidence level table\n"<<endl;
	cin>>z;

	float simulation =(pow(z,2))*(pow(5,2))/(pow(0.5,2));


	cout<<"Mean is:"<<avg<<endl;
	cout<<"Variance is:"<<var<<endl;
	cout<<"Simulation RUn (n) is:"<<simulation<<endl;
}

	int main()
	{
		variance();
		return 0;
	}
