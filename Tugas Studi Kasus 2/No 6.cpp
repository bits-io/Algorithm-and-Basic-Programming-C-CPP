//Nama: M Dobith Syadad Riyadi
//NIPD: 2002510040041
//Kelas: IK20
//Deskripsi program: program menghitung biaya pecakapan (Tugas studi kasus 2, No. 6)


#include <stdio.h>
#include <conio.h>


main(){
	//mendeklarasikan variabel
	int m, mb, harga;
	
	//memasukkan nilai mb
	printf("Masukkan berapa megabyte yang digunakan untuk percakapan  :"); scanf("%d", &mb);
	
	printf("=====================================================\n");
	
	//menghitung biaya percakapan
	m=mb;
	harga=mb*1000;
	
	printf("Waktu percakapan   : %d \n", m);	
	printf("Biaya percakapan   : %d", harga);
	
	getch();
}
