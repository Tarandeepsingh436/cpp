#include<conio.h>
#include<iostreamh>
#include<math.h>
#include<iomanip.h>
int main()
{
int a;
cout<<" Enter a given Number: ";
cin >> a;
float b = sqrt(a);
float c = pow(a,3);
cout <<"Square root = \t"<<Set precision(2)<<b<<endl;
cout <<"Cube =        \t"<< c;
getch();
return 0;
}






















