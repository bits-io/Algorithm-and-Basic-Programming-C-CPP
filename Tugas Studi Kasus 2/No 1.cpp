//Nama: M Dobith Syadad Riyadi
//NIPD: 2002510040041
//Kelas: IK20
//Deskripsi program: program  menghitung luas segitiga (Tugas studi kasus 2, No. 1)


#include <stdio.h>
#include <conio.h>

//untuk mengawali suatu program
main(){
	
	//untuk mendeklarasikan variabel
	int a, t, luas;
	
	//untuk memasukkan nilai variabel
	printf("Masukkan alas  :"); scanf("%d", &a);
	printf("Masukkan tinggi  :"); scanf("%d", &t);
	printf("--------------------------------------\n");
	
	//untuk menghitung nilai luas
	luas=0.5*a*t;
	
	//untuk menampilkan luas segitiga
	printf("Jadi, luas segitiga adalah %d", luas); 
	
	getch();
	
	
}
