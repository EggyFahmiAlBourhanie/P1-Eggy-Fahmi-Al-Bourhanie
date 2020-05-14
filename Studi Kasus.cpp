#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
char nama1[25], nim1[15], nama2[25], nim2[15], nama3[25], nim3[15], nama4[25], nim4[15], nama5[25], nim5[15]; 
float l, r, phi, y, terkecil;
int a, b, c;
cout << "~~~~~~~~~~~~Input Nama dan NIM Anggota Kelompok~~~~~~~~~~~~";
cout << "\n";
cout << "Masukkan Nama: "; 
cin.getline(nama1, 25); 
cout << "Masukan NIM: ";
cin.getline(nim1, 15);
cout << "Masukkan Nama: "; 
cin.getline(nama2, 25); 
cout << "Masukan NIM: ";
cin.getline(nim2, 15);
cout << "Masukkan Nama: "; 
cin.getline(nama3, 25); 
cout << "Masukan NIM: ";
cin.getline(nim3, 15);
cout << "Masukkan Nama: "; 
cin.getline(nama4, 25); 
cout << "Masukan NIM: ";
cin.getline(nim4, 15);
cout << "Masukkan Nama: "; 
cin.getline(nama5, 25); 
cout << "Masukan NIM: ";
cin.getline(nim5, 15);
cout << "\n";
cout << "~~~~~~~~~~~~Output~~~~~~~~~~~~";
cout << "\n";
cout <<"\nNama Ketua   =  "<<nama1;
cout <<"\nNIM Ketua    =  "<<nim1;
cout <<"\nNama Anggota =  "<<nama2;
cout <<"\nNIM Anggota  =  "<<nim2;
cout <<"\nNama Anggota =  "<<nama3;
cout <<"\nNIM Anggota  =  "<<nim3;
cout <<"\nNama Anggota =  "<<nama4;
cout <<"\nNIM Anggota  =  "<<nim4;
cout <<"\nNama Anggota =  "<<nama5;
cout <<"\nNIM Anggota  =  "<<nim5;
cout << "\n";
cout<< "\n~~~~~~~No1. Program Menghitung Luas Lingkaran Kelompok 9~~~~~~~\n";
cout << "\n";
phi = 3.14;
cout << "Masukkan jari-jari lingkaran sesuai nomor kelompok: ";
cin >> r;
l = phi*r*r;
cout << "\nLuas Lingkaran adalah: "<< l;
cout << "\n";
cout<< "\n~~~~~~~No2. Menentukan Nilai Y~~~~~~~\n";
cout<<"Diketahui: \n Nilai c=19 \nDitanya: \n a=.....\n b=.....\n Y=.....";
cout <<"\nMasukan 1 Digit terakhir NIM ketua untuk mencari incrementnya atau nilai a: ";
cin >>a;
a++;
cout <<"Nilai a= "<<a<<endl;
cout <<"\nMasukan No Kelompok untuk mencari decrementnya atau nilai b: ";
cin >>b;
b--;
cout <<"Nilai b= "<<b<<endl;
c = 19; // dua digit terakhir tahun angkatan //
cout <<"\n~~~~~Mencari Nilai Y~~~~~";
y = sqrt(2*pow(b,2)+pow(c,2))/sqrt(4*a);
cout << "\nNilai Y= "<<y;
cout << "\n";
cout << "\n~~~~~~~Mencari Perbandingan nilai terkecil antara No1 dan No2~~~~~~~\n";
terkecil = (y<l)?y:l;
cout<<"Nilai yang paling kecil adalah "<<terkecil;
getch(); 
}
