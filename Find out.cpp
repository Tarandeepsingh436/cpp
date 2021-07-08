// find out display dearness, rent, gross salary
#include<iostream>
using namespace std;
int main()
{
    double bas_sal;
    clrscr();
    cout<<"Enter a basic salary: ";
    cin >> bas_sal;
    double dear_all = 0.40* bas_sal;
    double hou_rent = 0.20* bas_sal;
    double gro_sal = bas_sal + dear_sal + _hou_rent;
    cout<<setw(20)<<"Dearness Allowance = "<<setw(10)<<dear_all<<endl;
    cout<<setw(20)<<"House Rent =         "<<setw(10)<<hou_rent<<endl;
    cout<<setw(20)<<"Gross Pay  =         "<<setw(10)<<gro_sal<<endl;
    getch();
    return 0;
}




















