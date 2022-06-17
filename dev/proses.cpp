#include <iostream>
#include "../base.h"
using namespace std;

		void proses (){
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


