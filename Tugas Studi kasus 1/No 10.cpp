//Nama: M Dobith Syadad Riyadi
//NIPD: 2002510040041
//Kelas: IK20
//Deskripsi program: program mencetak pasangan x dan y dari y=x^3-2x+1 (Tugas studi kasus 1, No. 10)

//memanggil library
#include <stdio.h>

int main()
{
	//deklarasi variabel
	int x;
	
	
	for (x=-10; x<=10; x++)
	{
		printf("y = %i^3 - 2*%i + 1 = %i\n", x, x, x^3-2*x+1); //set dan output hasil
	}
	
	
	return 0;
}
