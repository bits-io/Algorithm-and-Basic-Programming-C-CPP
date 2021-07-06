//Nama: M Dobith Syadad Riyadi
//NIPD: 2002510040041
//Kelas: IK20
//Deskripsi program: program  menghitung luas lingkaran (Tugas studi kasus 2, No. 2)


#include <stdio.h>
#include <conio.h>

//untuk mengawali suatu program
main(){
	int r, luas;
	float pi;      //memasukan konstanta pi
	
	pi=3.1415;  //nilai dari constanta pi

	//memasukkan nilai jari-jari
	printf("Masukan jari-jari   :  ");
	scanf("%d", &r);
	
	
	printf("----------------------------------------\n");
	
	//menghitung luas
	luas=pi*r^2;
	
	//menampilkan hasil
	printf("Jadi, luas lingkaran adalah %d", luas);
	
	getch();
	
}
	
	
	
