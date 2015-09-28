#include <iostream>
using namespace std;
int main() {
int quantity1, quantity2, quantity3, quantity4, quantity5, quantity6;
int stock, stock1, stock2, stock3, stock4, stock5, stock6;

cout<<"Please input stock values for each shop:"<<endl;
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

stock = (stock1 + stock2 + stock3 + stock4 + stock5 + stock6) * 5;

cout<<"The total stock for all products is:"<<stock<<endl;

cout<<"============================================="<<endl;

cout<<"Please input quantity purchased for each shop for:"<<endl;
cout<<"Kshs. 10:"<<endl;
cin>>quantity1;
quantity1 = quantity1 * 5;
stock = (stock - quantity1);

cout<<"Kshs. 20:"<<endl;
cin>>quantity2;
quantity2 = quantity2 * 5;
stock = (stock - quantity2);

cout<<"Kshs. 50:"<<endl;
cin>>quantity3;
quantity3 = quantity3 * 5;
stock = (stock - quantity3);

cout<<"Kshs. 100:"<<endl;
cin>>quantity4;
quantity4 = quantity4 * 5;
stock = (stock - quantity4);

cout<<"Kshs. 250:"<<endl;
cin>>quantity5;
quantity5 = quantity5 * 5;
stock = (stock - quantity5);

cout<<"Kshs. 500:"<<endl;
cin>>quantity6;
quantity6 = quantity6 * 5;
stock = (stock - quantity6);

cout<<"Total remaining stock across all stores is:"<<stock<<endl;

return 0;
}

