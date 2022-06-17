#include <cstdlib>
#include <iostream>
using namespace std;

class sk9{
	public:
		void input();
		void output();
		void proses();
	private : 
	string A[12];
    string B[10][10];
    string komik[12];
    string komikk[10][10];
    string ensk[12];
    string enskk[10][10];
    string cari;
    int jumnovel, jumkomik, jumlensk;
    string jenisbuku, nama, pengarang;
};

void sk9::input(){
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

void sk9::proses(){
	int i = 0;
    while(i<9){
    
            for(int j=0; j<5; j++){
                    for(int k=0;k<2; k++){
                            B[j][k]=A[i];
                            i++;
                            }
                    }
            }
            
	int o=0;
    while(o<9){
    	
            for(int j=0; j<5; j++){
                    for(int k=0;k<2; k++){
                            komikk[j][k]=komik[o];
                            o++;
                            }
                    }
            }

            
	int e = 0;
    while(e<9){
    	
    
            for(int j=0; j<5; j++){
                    for(int k=0;k<2; k++){
                            enskk[j][k]=ensk[e];
                            e++;
                            }
                    }
            }
}

void sk9::output(){
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
