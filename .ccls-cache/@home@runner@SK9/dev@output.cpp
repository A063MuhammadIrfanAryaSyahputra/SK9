#include "../base.h"
#include <iostream>
using namespace std;

		void output(){
			cout << endl;
cout << endl;
cout << "Jenis Buku    ||         Nama Buku         ||       Pengarang     || \n";
cout << " NOVEL ";  
for(int i=0; i<5; i++){
            for(int j=0; j<2; j++){
            	cout << "                    ";
                    cout << B[i][j] << "   ";
                    }
                    cout << endl;
            }
cout << "=======================================================\n";
cout << " KOMIK ";
for(int i=0; i<5; i++){
            for(int j=0; j<2; j++){
            	cout << "                  ";
                    cout << komikk[i][j] << " ";
                    }
                    cout << endl;
            }
cout << "=======================================================\n";
cout << " ENSIKLOPEDIA ";
    for(int i=0; i<5; i++){
            for(int j=0; j<2; j++){
            	cout << "                  ";
                    cout << enskk[i][j] << " ";
                    }
                    cout << endl;
            }
            
    cout<<"===========================================\n";
  cout<<"Masukan Nama buku yang ingin anda baca : ";
  cin >> cari;

 for (int i = 0; i < 3; i++) {
  	for (int j = 0; j < 3; j++){
	  
    if (cari == B[i][j]) {
      jenisbuku = "Novel";
      nama = B[i][j];
      pengarang= B[i][j+1];
    } 
    else if (cari == komikk[i][j]) {
      jenisbuku = "Komik";
      nama = komikk[i][j];
      pengarang =komikk[i][j+1];
    } 
    else if (cari == enskk[i][j]) {
      jenisbuku = "Ensiklopedia";
      nama = enskk[i][j];
      pengarang = enskk[i][j+1];
    }
    }
  }
    cout << "\n=================HASIL PENCARIAN=================";
  cout << "\nJenis Karyawan    : " <<jenisbuku;
  cout << "\nNama              : " <<nama;
  cout << "\nPengarang         : " <<pengarang;
  cout<<"\n===================================================\n";
		}


