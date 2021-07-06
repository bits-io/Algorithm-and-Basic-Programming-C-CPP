//Nama: M Dobith Syadad Riyadi
//NIPD: 2002510040041
//Kelas: IK20
//Deskripsi program: program menghitung selisih waktu dari dua buah jam (Tugas studi kasus 2, No. 5)


#include <stdio.h>
#include <conio.h>

main(){
	
	//mendeklarasikan variabel
	int selisih;
	int h1, h2;
	
	
	//memasukkan nilai jam, menit, detik
	 printf("Jam 1 \t : ");
            scanf("%d",&h1);
	printf("Jam 2 \t : ");
            scanf("%d",&h2);
            
    printf("===========================================\n");
    
    //menghitung selisih
    selisih=h1-h2;
    
    
    printf("Hasinya adalah %d jam", selisih);
    
    getch();
    
}
