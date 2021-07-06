//Nama: M Dobith Syadad Riyadi
//NIPD: 2002510040041
//Kelas: IK20
//Deskripsi program: program  mencetak teks sesuai masukan yang diinginkan (Tugas studi kasus 1, No. 2)


#include <stdio.h>
#include <conio.h>

main(){
	
	//untuk memesan space atau memory
	char teks[20];   
	
	//untuk menginput huruf
	printf("Masukan Tulisan   :");       
	scanf("%s", teks);                   
	
	printf("================================\n");
	
	//untuk menampilkan huruf yang ditulis
	printf(teks);        
	
	getch();
}
