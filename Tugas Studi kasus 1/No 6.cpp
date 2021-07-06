//Nama: M Dobith Syadad Riyadi
//NIPD: 2002510040041
//Kelas: IK20
//Deskripsi program: program untuk mencetak N buah bilangan (Tugas studi kasus 1, No. 6)



//memanggil library
#include <stdio.h>

int main(){
	
	//deklarasi variabel
	int j;
	//input suku ke-N
	printf("Masukkan bilangan Ke-N :");scanf("%d", &j);
	
	//menggunakan for
    for(int i = 1; i <= j; i++){
        printf("Bilangan ke-%i\n", i); //output hasil suku
    }
    
    return 0;
}
