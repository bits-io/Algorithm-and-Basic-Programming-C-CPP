//Nama: M Dobith Syadad Riyadi
//NIPD: 2002510040041
//Kelas: IK20
//Deskripsi program: program  melakukan konversi jam ke menit (Tugas studi kasus 1, No. 3)


#include <stdio.h>
#include <conio.h>

main(){
	/*membuat variabel dengan
	h adalah jam
	m adalah menit
	hasil adalah hasil
	*/
	int h, m, hasil;   
	
	//untuk memasukan nilai jam
	printf("Masukan Jam   :");
	scanf("%d", &h);
	
	//untuk memasukan nilai menit
	printf("Masukan Menit   :");
	scanf("%d", &m);

	//untuk menghitung masukan
	hasil=h*60+m;
	
	//untuk menampilkan hasil
	printf("Hasilnya %d menit");
	
	getch();
}
