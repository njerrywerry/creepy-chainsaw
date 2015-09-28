#include <iostream>
using namespace std;
int main ()
{
string fname, sname, reg_no, gender;
int SMA2100, SMA2104, STA2100, ICS2607, ICS2104, average;

cout<<"Please enter student name:"<<endl;
cin>>fname>>sname;
cout<<"Please enter registration number:"<<endl;
cin>>reg_no;
cout<<"Please enter gender:"<<endl;
cin>>gender;
cout<<"Enter grade for SMA2100:"<<endl;
cin>>SMA2100;
cout<<"Enter grade for SMA2104:"<<endl;
cin>>SMA2104;
cout<<"Enter grade for STA2100:"<<endl;
cin>>STA2100;
cout<<"Enter grade for ICS2607:"<<endl;
cin>>ICS2607;
cout<<"Enter grade for ICS2104:"<<endl;
cin>>ICS2104;

average = (SMA2100 + SMA2104 + STA2100 + ICS2607 + ICS2104)/5;

if (average >=50)
cout<<fname<<":Passed. Average grade:"<<average<<endl;
else
cout<<fname<<":Failed. Average grade:"<<average<<endl;

return 0;
}
