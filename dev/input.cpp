#include <iostream>
#include <fstream>
#include "../base.h"
using namespace std;

void :input(){
			 cout << "Berapa data yang ingin dimasukkan pada jenis buku Novel ? ";
    cin >> jumnovel;
    cout << "Masukkan data buku dengan nama buku lalu nama pengarang ! \n";
         for(int i = 0; i<jumnovel; i++){
         	cout << "Masukkan data = ";
         	cin >> A[i];
		 }   
		 
	cout << "Berapa data yang ingin dimasukkan pada jenis buku Komik ? ";
    cin >> jumkomik;
    cout << "Masukkan data buku dengan nama buku lalu nama pengarang ! \n";
         for(int o = 0; o<jumkomik; o++){
         	cout << "Masukkan data = ";
         	cin >> komik[o];
		 }   
	
	cout << "Berapa data yang ingin dimasukkan pada jenis buku Ensiklopedia ? ";
    cin >> jumlensk;
    cout << "Masukkan data buku dengan nama buku lalu nama pengarang ! \n";
         for(int e = 0; e<jumlensk; e++){
         	cout << "Masukkan data = ";
         	cin >> ensk[e];
         }
 }

