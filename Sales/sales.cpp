#include <iostream>
using namespace std;
int main() {
int den, quantity;
int stock1, stock2, stock3, stock4, stock5, stock6;

cout<<"Please input stock values for:"<<endl;
cout<<"Kshs. 10:"<<endl;
cin>>stock1;
cout<<"Kshs. 20:"<<endl;
cin>>stock2;
cout<<"Kshs. 50:"<<endl;
cin>>stock3;
cout<<"Kshs. 100:"<<endl;
cin>>stock4;
cout<<"Kshs. 250:"<<endl;
cin>>stock5;
cout<<"Kshs. 500:"<<endl;
cin>>stock6;

cout<<"Please input credit card denomination you wish to purchase:"<<endl;
cin>>den;
cout<<"Please input quantity:"<<endl;
cin>>quantity;

switch (den)
{
case 10:
if (stock1 < quantity)
cout<<"Sorry,"<<" "<<den<<" "<<"is less than what you require"<<endl;
else
stock1 = stock1 - quantity;
cout<<"Stock of Ksh. 10 is now:"<<stock1<<endl;
break;
case 20:
if (stock2 < quantity)
cout<<"Sorry,"<<" "<<den<<" "<<"is less than what you require"<<endl;
else
stock2 = stock2 - quantity;
cout<<"Stock of Ksh. 20 is now:"<<stock2<<endl;
break;
case 50:
if (stock3 < quantity)
cout<<"Sorry,"<<" "<<den<<" "<<"is less than what you require"<<endl;
else
stock3 = stock3 - quantity;
cout<<"Stock of Ksh. 50 is now:"<<stock3<<endl;
break;
case 100:
if (stock4 < quantity)
cout<<"Sorry,"<<" "<<den<<" "<<"is less than what you require"<<endl;
else
stock4 = stock4 - quantity;
cout<<"Stock of Ksh. 100 is now:"<<stock4<<endl;
break;
case 250:
if (stock5 < quantity)
cout<<"Sorry,"<<" "<<den<<" "<<"is less than what you require"<<endl;
else
stock5 = stock5 - quantity;
cout<<"Stock of Ksh. 250 is now:"<<stock5<<endl;
break;
case 500:
if (stock6 < quantity)
cout<<"Sorry,"<<" "<<den<<" "<<"is less than what you require"<<endl;
else
stock6 = stock6 - quantity;
cout<<"Stock of Ksh. 500 is now:"<<stock6<<endl;
break;
default:
cout<<"Invalid stock"<<endl;
}

return 0;
}

