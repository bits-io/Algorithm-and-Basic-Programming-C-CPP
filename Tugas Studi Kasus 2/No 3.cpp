//Nama: M Dobith Syadad Riyadi
//NIPD: 2002510040041
//Kelas: IK20
//Deskripsi program: program mengkonversi jam-menit-detik (hh:mm:ss) menjadi total detik (Tugas studi kasus 2, No. 3)


#include <stdio.h>
#include <conio.h>



main(){
	
	//mendeklarasikan variabel
	int h, m, s, hasil;
	
	printf("Menghitung jumlah detik\n");
	printf("==========================\n");
	
	
	//memasukkan nilai jam, menit, detik
	printf("Masukan jam   :"); 
	scanf("%d", &h);
	
	printf("Masukan Menit   :"); 
	scanf("%d", &m);
	
	printf("Masukan Detik   :");
	scanf("%d", &s);
	
	//mengkonversi ke detik
	hasil=h*3600+m*60+s;
	
	
	//menampilkan hasil
	printf("==========================\n");
	printf("Hasil adalah %d", hasil);
	
	getch();

}
