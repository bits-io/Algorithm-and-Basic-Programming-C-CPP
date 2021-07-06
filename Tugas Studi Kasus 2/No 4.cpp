//Nama: M Dobith Syadad Riyadi
//NIPD: 2002510040041
//Kelas: IK20
//Deskripsi program: program mengkonversi detik menjadi jam-menit-detik (Tugas studi kasus 2, No. 4)


#include <stdio.h>
#include <conio.h>


main(){
	
	//mendeklarasikan variabel
	int jam, menit, detik, sec;
	
	//memasukkan detik yang akan dihitung
	printf("Masukan detik :"); scanf("%d", &detik);
	
	printf("___________________________________________\n");
	
	
	//mengkonversi detik ke jam, menit, detik menggunakan modulo
	jam=detik/3600;
	menit=(detik%3600)/60;
	sec=(detik%3600)%60;
	
	//menampilkan hasil
	printf("Jam  :%d \n", jam);
	printf("Menit  :%d \n", menit);
	printf("Detik  :%d", sec);
	
	getch();
}