//Nama: M Dobith Syadad Riyadi
//NIPD: 2002510040041
//Kelas: IK20
//Deskripsi program: program menghitung gaji pegawai yang mempunyai komponen gaji (Tugas studi kasus 2, No. 7)


#include <stdio.h>
#include <conio.h>

main(){
	//mendeklarisikan variabel
	int gj, tun, mak, tr, htng, iurkop, total;
	
	//memasukkan nilai
	printf("Masukkan gaji pokok  :"); scanf("%d", &gj);
	printf("Masukkan tunjangan  :"); scanf("%d", &tun);
	printf("Masukkan uang makan  :"); scanf("%d", &mak);
	printf("Masukkan uang transportasi  :"); scanf("%d", &tr);

	printf("===================================================\n"); 
	printf("Masukkan hutang  :"); scanf("%d", &htng);
	printf("Masukkan iuran koperasi  :"); scanf("%d", &iurkop);
	
	//menghitung total gaji
	total=(gj-htng-iurkop)+tun+mak+tr;
	
	//menampilkan hasil
	printf("===================================================\n");
	printf("Total gajinya adalah %d", total);
	
	
	getch();
}
