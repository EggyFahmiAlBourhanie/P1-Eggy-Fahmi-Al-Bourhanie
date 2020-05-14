#include <iostream>
using namespace std;  
int main()
{
	int x, y;
	cout<<"2 digit terakhit NIM : ";
	cin>>x;
	cout<<"tanggal lahir : ";
	cin>>y;	
	
	if (x < y)
 	cout<< x <<" Adalah Bilangan Terkecil"; 
 	else if(y < x)
 	cout<< y <<" Adalah Bilangan Terkecil";
  	return 0;
			
}
