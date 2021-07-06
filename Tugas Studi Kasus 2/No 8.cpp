//Nama: M Dobith Syadad Riyadi
//NIPD: 2002510040041
//Kelas: IK20
//Deskripsi program: program menghitung besar cicilan pembelian kredit komputer (Tugas studi kasus 2, No. 8)


#include <stdio.h>
#include <conio.h>

main(){
	//mendeklarasikan variabel
	int cicilan, harga, waktu;
	float bunga;
	//memasukkan nilai
	printf("Masukkan harga komputer  :"); scanf("%d", &harga);
	printf("Masukkan bunga yang disepakati  :"); scanf("%d", &bunga);
	printf("Masukkan lama pembayaran per bulan  :"); scanf("%d", &waktu);
	printf("==========================================\n");
	
	//menghitung cicilan
	
	cicilan=(harga+harga*bunga)/waktu;
	
	//menampilkan hasil
	printf("Total cicilannya adalah %d", cicilan);
	
	getch();
}
