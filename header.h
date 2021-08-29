//declare Header
#include <stdio.h>
#include <math.h>
#include <string.h>

//Define untuk warna text pada program
#define RESET "\x1b[0m"
#define LAWNGREEN_TEXT "\x1B[38;2;124;252;0m"
#define YELLOW_TEXT "\x1B[38;2;249;215;28m"
#define BLUE_TEXT "\x1B[38;2;0;170;238m"
#define TANGERINE_TEXT "\x1B[38;2;242;133;0m"
#define PINK_TEXT "\x1B[38;2;255;105;180m"
#define RED_TEXT "\x1B[31m"

//Declare Function
void mainMenu();
void mulai();
void petunjuk();
void convertSuhu();
void menuPanjang();
void convertPanjang(double ukuran[6], int pilihAwal);
void menuLuas();
void convertLuas(double ukuran[5], int pilihAwal);
void menuVolume();
void convertVolume(double ukuran[5], int pilihAwal);
void menuMassa();
void convertMassa(double ukuran[5], int pilihAwal);
void menuData();
void convertData(double ukuran[6], int pilihAwal);
void hitungBMI();
void petunjukSuhu();
void petunjukPanjang();
void petunjukLuas();
void petunjukVolume();
void petunjukMassa();
void petunjukData();
void petunjukBMI();
void loadingScreen();
void keluar();

//funtion yang berisi petunjuk penggunaan konversi Suhu
void petunjukSuhu(){
	
	system("cls");
	printf(BLUE_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||           PETUNJUK KONVERSI SUHU         ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(YELLOW_TEXT"  ==========================================================================================================\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||             1. Program ini digunakan untuk menkonversi suhu ke satuan suhu yang diinginkan           ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                       2. Untuk memulai program pilih angka 1 pada menu konversi                      ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||  3. Begitu halaman konversi terbuka, ketik satuan suhu sebelum dan sesudah konversi yang diinginkan  ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                         4. Kemudian masukan angka derajat suhu yang diinginkan                       ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                5. Terakhir, setelah hasil ditampilkan, pilih menu lainnya yang tertera               ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ==========================================================================================================\n\n\n"RESET);
}
//funtion yang berisi petunjuk penggunaan konversi panjang
void petunjukPanjang(){
	
	system("cls");
	printf(PINK_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||         PETUNJUK KONVERSI PANJANG        ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(LAWNGREEN_TEXT"  ==========================================================================================================\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||      1. Program ini digunakan untuk menkonversi besaran panjang ke satuan lain yang diinginkan       ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                       2. Untuk memulai program pilih angka 2 pada menu konversi                      ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                     3. Begitu halaman konversi terbuka, pilih satuan panjang awal                    ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                4. Setelah itu, masukan bilangan yang merupakan panjang untuk dikonversi              ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                 5. Kemudian pilih satuan panjang yang diinginkan untuk hasil konversi                ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                6. Terakhir, setelah hasil ditampilkan, pilih menu lainnya yang tertera               ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ==========================================================================================================\n\n\n"RESET);
}
//funtion yang berisi petunjuk penggunaan konversi luas
void petunjukLuas(){
	
	system("cls");
	printf(PINK_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||           PETUNJUK KONVERSI LUAS         ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(BLUE_TEXT"  ==========================================================================================================\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||        1. Program ini digunakan untuk menkonversi besaran luas ke satuan lain yang diinginkan        ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                       2. Untuk memulai program pilih angka 3 pada menu konversi                      ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                      3. Begitu halaman konversi terbuka, pilih satuan luas awal                      ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                4. Setelah itu, masukan bilangan yang merupakan luas untuk dikonversi                 ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                  5. Kemudian pilih satuan luas yang diinginkan untuk hasil konversi                  ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                6. Terakhir, setelah hasil ditampilkan, pilih menu lainnya yang tertera               ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ==========================================================================================================\n\n\n"RESET);
}
//funtion yang berisi petunjuk penggunaan konversi volume
void petunjukVolume(){
	
	system("cls");
	printf(LAWNGREEN_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||         PETUNJUK KONVERSI VOLUME         ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(YELLOW_TEXT"  ==========================================================================================================\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||      1. Program ini digunakan untuk menkonversi besaran volume ke satuan lain yang diinginkan        ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                       2. Untuk memulai program pilih angka 4 pada menu konversi                      ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                     3. Begitu halaman konversi terbuka, pilih satuan volume awal                     ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||               4. Setelah itu, masukan bilangan yang merupakan volume untuk dikonversi                ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                 5. Kemudian pilih satuan volume yang diinginkan untuk hasil konversi                 ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                6. Terakhir, setelah hasil ditampilkan, pilih menu lainnya yang tertera               ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ==========================================================================================================\n\n\n"RESET);
}
//funtion yang berisi petunjuk penggunaan konversi massa
void petunjukMassa(){
	
	system("cls");
	printf(YELLOW_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||          PETUNJUK KONVERSI MASSA         ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(BLUE_TEXT"  ==========================================================================================================\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||       1. Program ini digunakan untuk menkonversi besaran Massa ke satuan lain yang diinginkan        ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                       2. Untuk memulai program pilih angka 5 pada menu konversi                      ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                      3. Begitu halaman konversi terbuka, pilih satuan massa awal                     ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||               4. Setelah itu, masukan bilangan yang merupakan massa untuk dikonversi                 ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                 5. Kemudian pilih satuan massa yang diinginkan untuk hasil konversi                  ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                6. Terakhir, setelah hasil ditampilkan, pilih menu lainnya yang tertera               ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ==========================================================================================================\n\n\n"RESET);
}
//funtion yang berisi petunjuk penggunaan konversi data
void petunjukData(){
	
	system("cls");
	printf(BLUE_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||           PETUNJUK KONVERSI DATA         ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(LAWNGREEN_TEXT"  ==========================================================================================================\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||        1. Program ini digunakan untuk menkonversi besaran Data ke satuan lain yang diinginkan        ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                       2. Untuk memulai program pilih angka 6 pada menu konversi                      ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                       3. Begitu halaman konversi terbuka, pilih satuan data awal                     ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                4. Setelah itu, masukan bilangan yang merupakan data untuk dikonversi                 ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                  5. Kemudian pilih satuan data yang diinginkan untuk hasil konversi                  ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                6. Terakhir, setelah hasil ditampilkan, pilih menu lainnya yang tertera               ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ==========================================================================================================\n\n\n"RESET);
}
//funtion yang berisi petunjuk penggunaan penghitung BMI
void petunjukBMI(){
	
	system("cls");
	printf(PINK_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||           PETUNJUK PENGHITUNG BMI        ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(YELLOW_TEXT"  ==========================================================================================================\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                       1. Program ini digunakan untuk menghitung Body Mass Index                      ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                       2. Untuk memulai program pilih angka 7 pada menu konversi                      ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                3. Begitu halaman konversi terbuka, masukkan berat serta tinggi badan anda            ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                               4. Lalu program akan menampilkan BMI anda                              ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||   5. Selain itu, program juga akan menampilkan berat badan yang harus ditambah/dikurangi agar ideal  ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ||                6. Terakhir, setelah hasil ditampilkan, pilih menu lainnya yang tertera               ||\n");
	printf("  ||                                                                                                      ||\n");
	printf("  ==========================================================================================================\n\n\n"RESET);
}
//Function loading Screen
void loadingScreen(){
	int i, j;
	
	system("cls");
	printf("\n");
	printf(TANGERINE_TEXT"\t   ========  ||    ||   ||==     ||   =========   =========  ||    ||      ||    ||      ====      \n");
	printf("\t      ||     ||    ||   || ==    ||   ||          ||         ||    ||      ||    ||     ||  ||     \n");
	printf("\t      ||     ||    ||   ||  ==   ||   ||    ===   ||    ===  ||    ||        ====     ||     ||    \n");
	printf("\t      ||     ||    ||   ||    == ||   ||     ||   ||     ||  ||    ||         ||     ||=======||   \n");
	printf("\t      ||      ======    ||     ==||   =========   =========   ======          ||    ||         ||  \n\n"RESET);
	for(i=1; i<=50; i++){
    	Sleep(10);
    	printf("\r");
    	printf(LAWNGREEN_TEXT"\t\t\t["RESET);
    	for(j=1; j<=i; j++)
    	{   
        	printf(BLUE_TEXT"|"RESET);
    	}
	}
    printf(LAWNGREEN_TEXT"]"RESET);
}
//Exit function
void keluar(){
	
	system("cls");
	printf(BLUE_TEXT"\n\t\t\t\t|=================================================|\n");
	printf("\t\t\t\t||                                               ||\n");
	printf("\t\t\t\t||   Terima Kasih Telah Menggunakan Program Ini  ||\n");
	printf("\t\t\t\t||                                               ||\n");
	printf("\t\t\t\t|=================================================|\n"RESET);
	Sleep(500);
}
