//Nama: M Dobith Syadad Riyadi
//NIPD: 2002510040041
//Kelas: IK20
//Deskripsi program: program menghitung faktorial dari suatu bilangan (Tugas studi kasus 1, No. 9)

//memanggil library
#include <stdio.h>

int main()
{
	//deklarasi variabel
	int in, i, fac = 1;
	//input nilai
	printf("Masukkan angka faktorial :");
	scanf("%d", &in);
	//menghitung faktorial menggunakan for
	for(i = 1; i <= in; i++)
	{
		fac = fac * i;
	}
	//output hasil
	printf("Faktorial dari %d adalah %d", in, fac);
}
