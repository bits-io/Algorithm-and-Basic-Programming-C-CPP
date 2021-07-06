//Nama: M Dobith Syadad Riyadi
//NIPD: 2002510040041
//Kelas: IK20
//Deskripsi program: program menghitung jumlah N suku (Tugas studi kasus 1, No. 8)


//memanggil library
#include <stdio.h>

int main(){
	//deklarasi variabel
	int j, k, l = 0;
	
	printf("Deret Aritmatika Sn=3+5+7+11+...+(4n-1)\n");
	//input suku ke-N
	printf("Masukkan suku ke-N :");scanf("%d", &j);
	//Set
	k=2*j+1;
	
    for(int i = 3; i <= k; i+=2){
        l = l + i;
    }
    //output hasil
    printf("Sn = %d ", l);
    
    return 0;
    
}
