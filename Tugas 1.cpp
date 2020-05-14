#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
main()
{
    char a[10];
    int a1;
    cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<" ~ Konfrensi Kilometer ke Meter ~\n";
	cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<" \n";
    cout<<" Masukan bilangan yang ingin di konfrensikan: "; cin>>a;
    a1=atoi(a)*1000;
    cout<<"\n ---Hasilnya adalah---\n";
    cout<<"\n";
    cout<<a<<"km sama dengan "<<a1<<"m\n";
    cout<<a1<<"m sama dengan "<<a<<"km";
    getch(); 
}
