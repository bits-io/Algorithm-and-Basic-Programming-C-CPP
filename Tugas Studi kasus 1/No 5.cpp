//Nama: M Dobith Syadad Riyadi
//NIPD: 2002510040041
//Kelas: IK20
//Deskripsi program: program menghitung gaji pegawai yang mempunyai komponen gaji (Tugas studi kasus 1, No. 5)


#include <stdio.h>
#include <conio.h>

main(){
	//mendeklarasikan variabel
	int tugas, quis, uts, uas, hasil;
	
	printf("Menghitung nilai rata rata mahasiswa");
	printf("\n======================================================\n");
	
	//menginput nilai
	printf("Nilai tugas :"); scanf("%d", &tugas);
	printf("Nilai uts :"); scanf("%d", &uts);
	printf("Nilai uas :"); scanf("%d", &uas);
	printf("Nilai quis :"); scanf("%d", &quis);
	
	/*
	menghitung rata-rata, asumsikan bahwa:
	tugas:25/100
	uts:25/100
	quis:20/100
	uas:30/100
	*/
	tugas*=0.25;
	uts*=0.25;
	quis*=*0.2;
	uas*=0.3;
	
	hasil=tugas+uts+quis+uas;
	
	printf("\n======================================================\n");
	printf("Nilai rata ratanya adalah %d", hasil);
	
	getch();
}
