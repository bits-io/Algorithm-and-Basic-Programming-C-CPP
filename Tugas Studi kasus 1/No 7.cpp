//Nama: M Dobith Syadad Riyadi
//NIPD: 2002510040041
//Kelas: IK20
//Deskripsi program: program menentukan jenis akar dari pers. kuadrat (Tugas studi kasus 1, No. 7)

//memanggil library
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
	//deklarasi variabel
	float a, b, c, d, x, x1, x2;
	//input a
	printf("Masukkan nilai a: "); scanf("%d", &a);
	
	if(a == 0){
		printf("Bukan persamaan kuadrat");
	}else{
		printf("Masukkan nilai b: "); scanf("%d", &b);
		printf("Masukkan nilai c: "); scanf("%d", &c);
	
		d=(b*b)-(4*a*c);

			if(d < 0){
				printf("Akarnya imajiner");
			}
			else if(d == 0){
				x=(-b)/2*a;
				printf("x = %.0f\n", x);
			}else{
				x1=((-b)+sqrt(d))/2*a;
				x2=((-b)-sqrt(d))/2*a; 
		
				printf("x1 = %.0f\n", x1);
				printf("x2 = %.0f", x2);
			
			}
		
		}

	
	return 0;
 }  
