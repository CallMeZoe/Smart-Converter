/* 	Kelompok 14
	Ahmad Zufar Ashshiddiqqi 1906300662
	Fathurrahman Irwansa 1906381501*/

#include "header.h"

//function main
int main(){
	// Fungsi utama
	mainMenu();
	return 0;
}
//Menu Utama
void mainMenu(){
	int pilih, x, y;
	mainMenu:
	system("cls");
	printf(BLUE_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||              SELAMAT DATANG              ||\n");
	printf("\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||         SMART CONVERTER PROGRAM          ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(PINK_TEXT"\t\t\t============================================================\n");
	printf("\t\t\t||                        MAIN MENU                       ||\n");
	printf("\t\t\t============================================================\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                    1. Mulai Program                    ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||             2. Petunjuk Penggunaan Program             ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                    3. Keluar Program                   ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t============================================================\n"RESET);
	printf(YELLOW_TEXT"\n\t\t\t\t     >>>PILIH ANGKA YANG KAMU INGINKAN<<<"RESET);
	
	pilih = (getch()-'0');
	//Switch Case
	switch(pilih){
		case 1:
			mulai:
			mulai();
			printf("\n\n");
			system("pause");
			system("cls");
			printf(YELLOW_TEXT"\n\t\t\t============================================================\n");
			printf("\t\t\t||                                                        ||\n");
			printf("\t\t\t||     Tekan Apapun Jika Ingin Kembali Memulai Program    ||\n");
			printf("\t\t\t||                                                        ||\n");
			printf("\t\t\t||    Tekan  2 Untuk Menuju Petunjuk Penggunaan Program   ||\n");
			printf("\t\t\t||                                                        ||\n");
			printf("\t\t\t||            Tekan 0 Untuk Keluar Dari Program           ||\n");
			printf("\t\t\t||                                                        ||\n");
			printf("\t\t\t============================================================\n"RESET);
			x = (getch()-'0');
			if(x==0){
				goto exit;
			}
			else if(x==2){
				loadingScreen();
				system("cls");
				goto help;
			}
			else{
				loadingScreen();
				system("cls");
				goto mulai;
			}
			break;
		case 2:
			help:
			petunjuk();
			system("pause");
			system("cls");
			goto mainMenu;
			break;
		case 3:
			exit:
			system("cls");
			printf(PINK_TEXT"\n\t\t\t============================================================\n");
			printf("\t\t\t||                                                        ||\n");
			printf("\t\t\t||              APAKAH ANDA YAKIN INGIN KELUAR?           ||\n");
			printf("\t\t\t||                                                        ||\n");
			printf("\t\t\t||                          1. Ya                         ||\n");
			printf("\t\t\t||                                                        ||\n");
			printf("\t\t\t||                         2. Tidak                       ||\n");
			printf("\t\t\t||                                                        ||\n");
			printf("\t\t\t============================================================\n"RESET);
			printf(YELLOW_TEXT"\n\t\t\t\t    >>>PILIH ANGKA YANG KAMU INGINKAN<<<"RESET);
			y = (getch()-'0');
			if(y==1){
				keluar();
			}
			else if(y==2){
				loadingScreen();
				goto mainMenu;
			}
			else{
				printf(TANGERINE_TEXT"\n\t\t\t   Tombol yang kamu tekan salah, silahkan tekan enter\n\n"RESET);
				system("pause");
				goto exit;
			}
			keluar();
			break;
		default: //Error Handling
			printf(TANGERINE_TEXT"\n\t\t\t     Tombol yang kamu tekan salah, silahkan tekan enter\n\n"RESET);
			system("pause");
			goto mainMenu;
	}
}
//Function Memulai Program
void mulai(){
	int pilihan;
	// Main Menu
	// Memilih jenis satuan apa yang ingin dikonversi
	startProgram:
	system("cls");
	printf(BLUE_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||              CONVERSION MENU             ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(YELLOW_TEXT"\t\t\t============================================================\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                    1. Konversi Suhu                    ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                   2. Konversi Panjang                  ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                    3. Konversi Luas                    ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                   4. Konversi Volume                   ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                    5. Konversi Massa                   ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                    6. Konversi Data                    ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                   7. Penghitung  BMI                   ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t============================================================\n"RESET);
	printf(PINK_TEXT"\n\t\t\t\t     >>>PILIH ANGKA YANG KAMU INGINKAN<<<"RESET);
	
	pilihan = (getch()-'0');
	switch(pilihan){
		case 1:
			loadingScreen();
			convertSuhu();
			break;
		case 2:
			loadingScreen();
			menuPanjang();
			break;
		case 3:
			loadingScreen();
			menuLuas();
			break;
		case 4:
			loadingScreen();
			menuVolume();
			break;
		case 5:
			loadingScreen();
			menuMassa();
			break;
		case 6:
			loadingScreen();
			menuData();
			break;
		case 7:
			loadingScreen();
			hitungBMI();
			break;
		default: //Error Handling
			printf(TANGERINE_TEXT"\n\t\t\t   Tombol yang kamu tekan salah, silahkan tekan enter\n\n"RESET);
			system("pause");
			goto startProgram;
	}
}
//function menu petunjuk penggunaan program
void petunjuk(){
	int pilihan;
	//Pentunjuk program
	helpProgram:
	system("cls");
	printf(YELLOW_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||     MENU PETUNJUK PENGGUNAAAN PROGRAM    ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(PINK_TEXT"\t\t\t============================================================\n");
	printf("\t\t\t||           PETUNJUK PENGGUNAAN TIAP CONVERTER           ||\n");
	printf("\t\t\t============================================================\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                1. Petunjuk Konversi Suhu               ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||               2. Petunjuk Konversi Panjang             ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                3. Petunjuk Konversi Luas               ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||               4. Petunjuk Konversi Volume              ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                5. Petunjuk Konversi Massa              ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                6. Petunjuk Konversi Data               ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||               7. Petunjuk Penghitung  BMI              ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t============================================================\n"RESET);
	printf(BLUE_TEXT"\n\t\t\t\t     >>>PILIH ANGKA YANG KAMU INGINKAN<<<"RESET);
	
	pilihan = (getch()-'0');
	system("cls");
	
	switch(pilihan){
		case 1:
			petunjukSuhu();
			break;
		case 2:
			petunjukPanjang();
			break;
		case 3:
			petunjukLuas();
			break;
		case 4:
			petunjukVolume();
			break;
		case 5:
			petunjukMassa();
			break;
		case 6:
			petunjukData();
			break;
		case 7:
			petunjukBMI();
			break;
		default:
			printf(TANGERINE_TEXT"\n\t\t\t    Tombol yang kamu tekan salah, silahkan tekan enter\n\n"RESET);
			system("pause");
			goto helpProgram;
	}
}
//function untuk memulai convert suhu
void convertSuhu(){

	float suhu;
	char suhuAwal[50], suhuAkhir[50];
	char cel[10]="celcius";
	char rea[10]="reamur";
	char fah[15]="fahrenheit";
	char kel[10]="kelvin";
	
	awal:
	system("cls"); 
	printf(BLUE_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||               KONVERSI SUHU              ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(YELLOW_TEXT"\t\t\t============================================================\n");
	printf("\t\t\t||        Input Yang Dimasukkan Berupa Satuan Suhu        ||\n");
	printf("\t\t\t||         celcius / reamur / fahrenheit / kelvin         ||\n");
	printf("\t\t\t============================================================\n\n"RESET);

	printf("\t\t\tSilahkan masukkan satuan suhu awal\t>>> ");
	scanf("%s", &suhuAwal);
	strlwr(suhuAwal);
	
	if ((strcmp(suhuAwal,cel)!=0) && (strcmp(suhuAwal,rea)!=0) && (strcmp(suhuAwal,fah)!=0) && (strcmp(suhuAwal,kel)!=0)){
		printf(TANGERINE_TEXT"\n\t\t\tInput yang anda masukkan salah, silahkan tekan enter\n\n"RESET);
		system("pause");
		goto awal;
	}
	
	akhir:
	printf("\t\t\tSilahkan masukkan satuan suhu akhir\t>>> ");
	scanf("%s", &suhuAkhir);
	strlwr(suhuAkhir);
	
	if ((strcmp(suhuAkhir,cel)!=0) && (strcmp(suhuAkhir,rea)!=0) && (strcmp(suhuAkhir,fah)!=0) && (strcmp(suhuAkhir,kel)!=0)){
		printf(TANGERINE_TEXT"\n\t\t\tInput yang anda masukkan salah, silahkan tekan enter\n\n"RESET);
		system("pause");
		goto akhir;
	}
		
	printf("\n\t\t\tSilahkan masukkan suhu dalam derajat %s\t>>> ", suhuAwal);
	scanf("%f", &suhu);
	//program penghitungan convert suhu
	if (strcmp(suhuAwal,cel)==0){		//awal celcius
		suhu = suhu;
	}
	else if (strcmp(suhuAwal,rea)==0){	//awal reamur
		suhu = suhu*5/4;
	}
	else if (strcmp(suhuAwal,fah)==0){	//awal fahrenheit
		suhu = (suhu-32)*5/9;
	}
	else if (strcmp(suhuAwal,kel)==0){	//awal kelvin
		suhu = suhu-273;
	}
	//program penghitungan convert suhu
	if (strcmp(suhuAkhir,cel)==0){		//ke celcius
		suhu = suhu;
		printf("\t\t\tHasil Suhu dalam derajat %s adalah\t>>> %.2f", suhuAkhir, suhu);
		printf("%cC\n", 248);
	}
	else if (strcmp(suhuAkhir,rea)==0){	//ke reamur
		suhu = suhu*4/5;
		printf("\t\t\tHasil Suhu dalam derajat %s adalah\t>>> %.2f", suhuAkhir, suhu);
		printf("%cR\n", 248);
	}
	else if (strcmp(suhuAkhir,fah)==0){	//ke fahrenheit
		suhu = (suhu*9/5)+32;
		printf("\t\t\tHasil Suhu dalam derajat %s adalah\t>>> %.2f", suhuAkhir, suhu);
		printf("%cF\n", 248);
	}
	else if (strcmp(suhuAkhir,kel)==0){	//ke kelvin
		suhu = suhu+273;
		printf("\t\t\tHasil Suhu dalam derajat %s adalah\t>>> %.2f K\n", suhuAkhir, suhu);
	}

	
}
//function yang berisi awal konversi satuan panjang
void menuPanjang(){
	
	double nilaiAwal[6];
	int awalSatuan, akhirSatuan;

	menuPjg:
	system("cls");
	printf(PINK_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||              KONVERSI PANJANG            ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(BLUE_TEXT"\t\t\t============================================================\n");
	printf("\t\t\t||          Tekan Angka Pilihan Untuk Satuan Awal         ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                    1. Kilometer (Km)                   ||\n");
	printf("\t\t\t||                       2. Meter (m)                     ||\n");
	printf("\t\t\t||                   3. Centimeter  (Cm)                  ||\n");
	printf("\t\t\t||                    4. Milimeter (Mm)                   ||\n");
	printf("\t\t\t||                      5. Mikrometer                     ||\n");
	printf("\t\t\t||                    6. Nanometer  (nm)                  ||\n");
	printf("\t\t\t============================================================\n\n"RESET);
	printf("\t\t\t");
	awalSatuan = getch()-'0';
	//Memasukan nilai satuan awal yang ingin dikonversi
	switch(awalSatuan){
		case 1:
			printf("Masukkan ukuran dalam Kilometer (km) >>> ");
			scanf("%lf", &nilaiAwal[0]);
			nilaiAwal[3] = nilaiAwal[0] * pow(10,6);
			break;
		case 2:
			printf("Masukkan ukuran dalam Meter (m): ");
			scanf("%lf", &nilaiAwal[1]);
			nilaiAwal[3] = nilaiAwal[1] * pow(10,3);
			break;
		case 3:
			printf("Masukkan ukuran dalam Centimeter (cm) >>> ");
			scanf("%lf", &nilaiAwal[2]);
			nilaiAwal[3] = nilaiAwal[2] * pow(10,1);
			break;
		case 4:
			printf("Masukkan ukuran dalam Milimeter (mm) >>> ");
			scanf("%lf", &nilaiAwal[3]);
			break;
		case 5:
			printf("Masukkan ukuran dalam Micrometer >>> ");
			scanf("%lf", &nilaiAwal[4]);
			nilaiAwal[3] = nilaiAwal[4] * pow(10,(-3));
			break;
		case 6:
			printf("Masukkan ukuran dalam Nanometer (nm) >>> ");
			scanf("%lf", &nilaiAwal[5]);
			nilaiAwal[3] = nilaiAwal[5] * pow(10,(-6));
			break;
		default:  //error handling
			printf(TANGERINE_TEXT"Tombol yang kamu tekan salah, silahkan tekan enter\n\n"RESET);
			system("pause");
			goto menuPjg;
			break;
	}
	convertPanjang(nilaiAwal, awalSatuan);
}
//function yang berisi akhir konversi satuan panjang
void convertPanjang(double ukuran[6], int pilihAwal){
	
	int pilihAkhir;
	
	convert:
	printf(BLUE_TEXT"\n\t\t\t============================================================\n");
	printf("\t\t\t||          Tekan Angka Pilihan Untuk Satuan Akhir        ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                    1. Kilometer (Km)                   ||\n");
	printf("\t\t\t||                       2. Meter (m)                     ||\n");
	printf("\t\t\t||                   3. Centimeter  (Cm)                  ||\n");
	printf("\t\t\t||                    4. Milimeter (Mm)                   ||\n");
	printf("\t\t\t||                      5. Mikrometer                     ||\n");
	printf("\t\t\t||                    6. Nanometer  (nm)                  ||\n");
	printf("\t\t\t============================================================\n\n"RESET);
	printf("\t\t\t");
	
	pilihAkhir = getch()-'0';
	switch(pilihAkhir){
		case 1:		//Konversi ke Kilometer
			ukuran[0] = ukuran[3] * pow(10,(-6));
			if(pilihAwal == 1){			//awalnya kilometer
				printf("Ukuran dalam Kilometer >>> %.2lf km\n", ukuran[0]);
			}
			else if(pilihAwal == 2){	//awalnya meter
				printf("Ukuran dalam Kilometer >>> %.5lf km\n", ukuran[0]);
			}
			else if(pilihAwal == 3){	//awalnya centimeter
				printf("Ukuran dalam Kilometer >>> %.7lf km\n", ukuran[0]);
			}
			else if(pilihAwal == 4){	//awalnya milimeter
				printf("Ukuran dalam Kilometer >>> %.8lf km\n", ukuran[0]);
			}
			else if(pilihAwal == 5){	//awalnya micrometer
				printf("Ukuran dalam Kilometer >>> %.11lf km\n", ukuran[0]);
			}
			else{						//awalnya nanometer
				printf("Ukuran dalam Kilometer >>> %.14lf km\n", ukuran[0]);
			}
			break;
		case 2:		//Konversi ke meter
			ukuran[1] = ukuran[3] * pow(10,(-3));
			if(pilihAwal == 1){			//awalnya kilometer
				printf("Ukuran dalam Meter >>> %.2lf m\n", ukuran[1]);
			}
			else if(pilihAwal == 2){	//awalnya meter
				printf("Ukuran dalam Meter >>> %.2lf m\n", ukuran[1]);
			}
			else if(pilihAwal == 3){	//awalnya centimeter
				printf("Ukuran dalam Meter >>> %.4lf m\n", ukuran[1]);
			}
			else if(pilihAwal == 4){	//awalnya milimeter
				printf("Ukuran dalam Meter >>> %.5lf m\n", ukuran[1]);
			}
			else if(pilihAwal == 5){	//awalnya micrometer
				printf("Ukuran dalam Meter >>> %.8lf m\n", ukuran[1]);
			}
			else{						//awalnya nanometer
				printf("Ukuran dalam Meter >>> %.11lf m\n", ukuran[1]);
			}
			break;
		case 3:		//Konversi ke centimeter
			ukuran[2] = ukuran[3] * pow(10,(-1));
			if(pilihAwal == 1){			//awalnya kilometer
				printf("Ukuran dalam Centimeter >>> %.2lf cm\n", ukuran[2]);
			}
			else if(pilihAwal == 2){	//awalnya meter
				printf("Ukuran dalam Centimeter >>> %.2lf cm\n", ukuran[2]);
			}
			else if(pilihAwal == 3){	//awalnya centimeter
				printf("Ukuran dalam Centimeter >>> %.2lf cm\n", ukuran[2]);
			}
			else if(pilihAwal == 4){	//awalnya milimeter
				printf("Ukuran dalam Centimeter >>> %.3lf cm\n", ukuran[2]);
			}
			else if(pilihAwal == 5){	//awalnya micrometer
				printf("Ukuran dalam Centimeter >>> %.6lf cm\n", ukuran[2]);
			}
			else{						//awalnya nanometer
				printf("Ukuran dalam Centimeter >>> %.9lf cm\n", ukuran[2]);
			}
			break;
		case 4:		//konversi ke milimeter
			if(pilihAwal == 1){			//awalnya kilometer
				printf("Ukuran dalam Milimeter >>> %.2lf mm\n", ukuran[3]);
			}
			else if(pilihAwal == 2){	//awalnya meter
				printf("Ukuran dalam Milimeter >>> %.2lf mm\n", ukuran[3]);
			}
			else if(pilihAwal == 3){	//awalnya centimeter
				printf("Ukuran dalam Milimeter >>> %.2lf mm\n", ukuran[3]);
			}
			else if(pilihAwal == 4){	//awalnya milimeter
				printf("Ukuran dalam Milimeter >>> %.2lf mm\n", ukuran[3]);
			}
			else if(pilihAwal == 5){	//awalnya micrometer
				printf("Ukuran dalam Milimeter >>> %.5lf mm\n", ukuran[3]);
			}
			else{						//awalnya nanometer
				printf("Ukuran dalam Milimeter >>> %.8lf mm\n", ukuran[3]);
			}
			break;
		case 5:		//konversi ke micrometer
			ukuran[4] = ukuran[3] * pow(10,3);
			if(pilihAwal == 1){			//awalnya kilometer
				printf("Ukuran dalam Micrometer >>> %.2lf micrometer\n", ukuran[4]);
			}
			else if(pilihAwal == 2){	//awalnya meter
				printf("Ukuran dalam Micrometer >>> %.2lf micrometer\n", ukuran[4]);
			}
			else if(pilihAwal == 3){	//awalnya centimeter
				printf("Ukuran dalam Micrometer >>> %.2lf micrometer\n", ukuran[4]);
			}
			else if(pilihAwal == 4){	//awalnya milimeter
				printf("Ukuran dalam Micrometer >>> %.2lf micrometer\n", ukuran[4]);
			}
			else if(pilihAwal == 5){	//awalnya micrometer
				printf("Ukuran dalam Micrometer >>> %.2lf micrometer\n", ukuran[4]);
			}
			else{						//awalnya nanometer
				printf("Ukuran dalam Micrometer >>> %.5lf micrometer\n", ukuran[4]);
			}
			break;
		case 6:		//konversi ke nanometer
			ukuran[5] = ukuran[3] * pow(10,6);
			if(pilihAwal == 1){			//awalnya kilometer
				printf("Ukuran dalam Nanometer >>> %.2lf nm\n", ukuran[5]);
			}
			else if(pilihAwal == 2){	//awalnya meter
				printf("Ukuran dalam Nanometer >>> %.2lf nm\n", ukuran[5]);
			}
			else if(pilihAwal == 3){	//awalnya centimeter
				printf("Ukuran dalam Nanometer >>> %.2lf nm\n", ukuran[5]);
			}
			else if(pilihAwal == 4){	//awalnya milimeter
				printf("Ukuran dalam Nanometer >>> %.2lf nm\n", ukuran[5]);
			}
			else if(pilihAwal == 5){	//awalnya micrometer
				printf("Ukuran dalam Nanometer >>> %.2lf nm\n", ukuran[5]);
			}
			else{						//awalnya nanometer
				printf("Ukuran dalam Nanometer >>> %.2lf nm\n", ukuran[5]);
			}
			break;
		default:
			printf(TANGERINE_TEXT"Tombol yang kamu tekan salah, silahkan tekan enter\n\n"RESET);
			system("pause");
			goto convert;
			break;
	}
}
//function yang berisi awal konversi satuan luas
void menuLuas(){
	
	double nilaiAwal[5];
	int awalSatuan, akhirSatuan;
	
	menuArea:
	system("cls");
	printf(YELLOW_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||                KONVERSI LUAS             ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(BLUE_TEXT"\t\t\t============================================================\n");
	printf("\t\t\t||          Tekan Angka Pilihan Untuk Satuan Awal         ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                1. Kilometer Persegi (Km^2)             ||\n");
	printf("\t\t\t||                   2. Meter Persegi (m^2)               ||\n");
	printf("\t\t\t||               3. Centimeter  Persegi (Cm^2)            ||\n");
	printf("\t\t\t||                4. Milimeter Persegi (Mm^2)             ||\n");
	printf("\t\t\t||                      5. Hektar (Ha)                    ||\n");
	printf("\t\t\t============================================================\n\n"RESET);
	printf("\t\t\t");
	
	awalSatuan = getch()-'0';
	//Memasukan nilai awal yang ingin dikonversi
	switch(awalSatuan){
		case 1:
			printf("Masukkan ukuran dalam Kilometer Persegi (km^2) >>> ");
			scanf("%lf", &nilaiAwal[0]);
			nilaiAwal[1] = nilaiAwal[0] * pow(10,6);
			break;
		case 2:
			printf("Masukkan ukuran dalam Meter Persegi (m^2) >>> ");
			scanf("%lf", &nilaiAwal[1]);
			break;
		case 3:
			printf("Masukkan ukuran dalam Centimeter Persegi (cm^2) >>> ");
			scanf("%lf", &nilaiAwal[2]);
			nilaiAwal[1] = nilaiAwal[2] * pow(10,(-4));
			break;
		case 4:
			printf("Masukkan ukuran dalam Milimeter Persegi (mm^2) >>> ");
			scanf("%lf", &nilaiAwal[3]);
			nilaiAwal[1] = nilaiAwal[3] * pow(10,(-6));
			break;
		case 5:
			printf("Masukkan ukuran dalam Hektar (Ha) >>> ");
			scanf("%lf", &nilaiAwal[4]);
			nilaiAwal[1] = nilaiAwal[4] * pow(10,4);
			break;
		default:
			printf(TANGERINE_TEXT"Tombol yang kamu tekan salah, silahkan tekan enter\n\n"RESET);
			system("pause");
			goto menuArea;
			break;
	}
	convertLuas(nilaiAwal, awalSatuan);
}
//function yang berisi akhir konversi satuan luas
void convertLuas(double ukuran[5], int pilihAwal){
	
	int pilihAkhir;
	
	//Satuan akhir yang ingin dituju
	convert:
	printf(BLUE_TEXT"\t\t\t============================================================\n");
	printf("\t\t\t||          Tekan Angka Pilihan Untuk Satuan Akhir        ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                1. Kilometer Persegi (Km^2)             ||\n");
	printf("\t\t\t||                   2. Meter Persegi (m^2)               ||\n");
	printf("\t\t\t||               3. Centimeter  Persegi (Cm^2)            ||\n");
	printf("\t\t\t||                4. Milimeter Persegi (Mm^2)             ||\n");
	printf("\t\t\t||                      5. Hektar (Ha)                    ||\n");
	printf("\t\t\t============================================================\n\n"RESET);
	printf("\t\t\t");
	
	pilihAkhir = getch()-'0';
	switch(pilihAkhir){
		case 1:		//Satuan akhir Kilometer persegi
			ukuran[0] = ukuran[1] * pow(10,(-6));
			if(pilihAwal == 1){			//awalnya kilometer persegi
				printf("Ukuran dalam Kilometer Persegi >>> %.2lf km^2\n", ukuran[0]);
			}
			else if(pilihAwal == 2){	//awalnya Meter Persegi
				printf("Ukuran dalam Kilometer Persegi >>> %.8lf km^2\n", ukuran[0]);
			}
			else if(pilihAwal == 3){	//awalnya Centimeter Persegi
				printf("Ukuran dalam Kilometer Persegi >>> %.12lf km^2\n", ukuran[0]);
			}
			else if(pilihAwal == 4){	//Awalnya milimeter Persegi
				printf("Ukuran dalam Kilometer Persegi >>> %.14lf km^2\n", ukuran[0]);
			}
			else{						//Awalnya Hektar
				printf("Ukuran dalam Kilometer Persegi >>> %.4lf km^2\n", ukuran[0]);
			}
			break;
		case 2:		//Satuan akhir Meter Persegi
			if(pilihAwal == 1){			//Awalnya kilometer persegi
				printf("Ukuran dalam Meter Persegi >>> %.2lf m^2\n", ukuran[1]);
			}
			else if(pilihAwal == 2){	//awalnya meter persegi
				printf("Ukuran dalam Meter Persegi >>> %.2lf m^2\n", ukuran[1]);
			}
			else if(pilihAwal == 3){	//awalnya centimeter persegi
				printf("Ukuran dalam Meter Persegi >>> %.6lf m^2\n", ukuran[1]);
			}
			else if(pilihAwal == 4){	//awalnya milimeter persegi
				printf("Ukuran dalam Meter Persegi >>> %.8lf m^2\n", ukuran[1]);
			}
			else{						//awalnya hektar
				printf("Ukuran dalam Meter Persegi >>> %.2lf m^2\n", ukuran[1]);
			}
			break;
		case 3:		//satuan akhir centimeter persegi
			ukuran[2] = ukuran[1] * pow(10,4);
			if(pilihAwal == 1){			//awalnya kilometer persegi
				printf("Ukuran dalam Centimeter Persegi >>> %.2lf cm^2\n", ukuran[2]);
			}
			else if(pilihAwal == 2){	//awalnya meter persegi
				printf("Ukuran dalam Centimeter Persegi >>> %.2lf cm^2\n", ukuran[2]);
			}
			else if(pilihAwal == 3){	//awalnya centimeter persegi
				printf("Ukuran dalam Centimeter Persegi >>> %.2lf cm^2\n", ukuran[2]);
			}
			else if(pilihAwal == 4){	//awalnya milimeter persegi
				printf("Ukuran dalam Centimeter Persegi >>> %.4lf cm^2\n", ukuran[2]);
			}
			else{						//awalnya hektar
				printf("Ukuran dalam Centimeter Persegi >>> %.2lf cm^2\n", ukuran[2]);
			}
			break;
		case 4:		//satuan akhir milimeter persegi
			ukuran[3] = ukuran[1] * pow(10,6);
			if(pilihAwal == 1){			//awalnya kilometer persegi
				printf("Ukuran dalam Milimeter Persegi >>> %.2lf mm^3\n", ukuran[3]);
			}
			else if(pilihAwal == 2){	//awalnya meter persegi
				printf("Ukuran dalam Milimeter Persegi >>> %.2lf mm^3\n", ukuran[3]);
			}
			else if(pilihAwal == 3){	//awalnya centimeter persegi
				printf("Ukuran dalam Milimeter Persegi >>> %.2lf mm^3\n", ukuran[3]);
			}
			else if(pilihAwal == 4){	//awalnya milimeter persegi
				printf("Ukuran dalam Milimeter Persegi >>> %.2lf mm^3\n", ukuran[3]);
			}
			else{						//awalnya hektar
				printf("Ukuran dalam Milimeter Persegi >>> %.2lf mm^3\n", ukuran[3]);
			}
			break;
		case 5:		//satuan akhir hektar
			ukuran[4] = ukuran[1] * pow(10,-4);
			if(pilihAwal == 1){			//awalnya kilometer persegi
				printf("Ukuran dalam Hektar >>> %.2lf L\n", ukuran[4]);
			}
			else if(pilihAwal == 2){	//awalnya meter persegi
				printf("Ukuran dalam Hektar >>> %.6lf L\n", ukuran[4]);
			}
			else if(pilihAwal == 3){	//awalnya cenimeter persegi
				printf("Ukuran dalam Hektar >>> %.10lf L\n", ukuran[4]);
			}
			else if(pilihAwal == 4){	//awalnya milimeter persegi
				printf("Ukuran dalam Hektar >>> %.12lf L\n", ukuran[4]);
			}
			else{						//awalnya hektar
				printf("Ukuran dalam Hektar >>> %.2lf L\n", ukuran[4]);
			}
			break;
		default:	//error handling
			printf(TANGERINE_TEXT"Tombol yang kamu tekan salah, silahkan tekan enter\n\n"RESET);
			system("pause");
			goto convert;
			break;
	}
}
//function yang berisi awal konversi satuan volume
void menuVolume(){
	
	double nilaiAwal[5];
	int awalSatuan, akhirSatuan;
	
	//Memilih satuan awal yang ingin dikonversi
	menuVol:
	system("cls");
	printf(LAWNGREEN_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||               KONVERSI VOLUME            ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(PINK_TEXT"\t\t\t============================================================\n");
	printf("\t\t\t||          Tekan Angka Pilihan Untuk Satuan Awal         ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                    1. Meter Kubik (m^3)                ||\n");
	printf("\t\t\t||                  2. Decimeter Kubik (Dm^3)             ||\n");
	printf("\t\t\t||                 3. Centimeter Kubik  (Cm^3)            ||\n");
	printf("\t\t\t||                  4. Milimeter Kubik (Mm^3)             ||\n");
	printf("\t\t\t||                        5. Liter (L)                    ||\n");
	printf("\t\t\t============================================================\n\n"RESET);
	printf("\t\t\t");
	
	awalSatuan = getch()-'0';
	
	switch(awalSatuan){
		case 1:
			printf("Masukkan ukuran dalam Meter Kubik (m^3) >>> ");
			scanf("%lf", &nilaiAwal[0]);
			nilaiAwal[2] = nilaiAwal[0] * pow(10,6);
			break;
		case 2:
			printf("Masukkan ukuran dalam Decimeter Kubik (dm^3) >>> ");
			scanf("%lf", &nilaiAwal[1]);
			nilaiAwal[2] = nilaiAwal[1] * pow(10,3);
			break;
		case 3:
			printf("Masukkan ukuran dalam Centimeter Kubik (dm^3) >>> ");
			scanf("%lf", &nilaiAwal[2]);
			break;
		case 4:
			printf("Masukkan ukuran dalam Milimeter Kubik (mm^3) >>> ");
			scanf("%lf", &nilaiAwal[3]);
			nilaiAwal[2] = nilaiAwal[3] * pow(10,(-3));
			break;
		case 5:
			printf("Masukkan ukuran dalam Liter (L) >>> ");
			scanf("%lf", &nilaiAwal[4]);
			nilaiAwal[2] = nilaiAwal[4] * pow(10,3);
			break;
		default:
			printf(TANGERINE_TEXT"Tombol yang kamu tekan salah, silahkan tekan enter\n\n"RESET);
			system("pause");
			goto menuVol;
			break;
	}
	convertVolume(nilaiAwal, awalSatuan);
}
//function yang berisi akhir konversi satuan volume
void convertVolume(double ukuran[5], int pilihAwal){
	
	int pilihAkhir;
	
	//Memilih satuan hasil akhir konversi
	convert:
	printf(PINK_TEXT"\t\t\t============================================================\n");
	printf("\t\t\t||          Tekan Angka Pilihan Untuk Satuan Akhir        ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                    1. Meter Kubik (m^3)                ||\n");
	printf("\t\t\t||                  2. Decimeter Kubik (Dm^3)             ||\n");
	printf("\t\t\t||                 3. Centimeter Kubik  (Cm^3)            ||\n");
	printf("\t\t\t||                  4. Milimeter Kubik (Mm^3)             ||\n");
	printf("\t\t\t||                        5. Liter (L)                    ||\n");
	printf("\t\t\t============================================================\n\n"RESET);
	printf("\t\t\t");
	
	pilihAkhir = getch()-'0';
	switch(pilihAkhir){
		case 1:		//satuan akhir meter kubik
			ukuran[0] = ukuran[2] * pow(10,(-6));
			if(pilihAwal == 1){			//satuan awal meter kubik
				printf("Ukuran dalam Meter Kubik >>> %.2lf m^3\n", ukuran[0]);
			}
			else if(pilihAwal == 2){	//satuan awal decimeter kubik
				printf("Ukuran dalam Meter Kubik >>> %.5lf m^3\n", ukuran[0]);
			}
			else if(pilihAwal == 3){	//satuan awal centimeter kubik
				printf("Ukuran dalam Meter Kubik >>> %.8lf m^3\n", ukuran[0]);
			}
			else if(pilihAwal == 4){	//satuan awal milimeter kubik
				printf("Ukuran dalam Meter Kubik >>> %.11lf m^3\n", ukuran[0]);
			}
			else{						//satuan awal liter
				printf("Ukuran dalam Meter Kubik >>> %.5lf m^3\n", ukuran[0]);
			}
			break;
		case 2:		//satuan akhir decimeter kubik
			ukuran[1] = ukuran[2] * pow(10,(-3));
			if(pilihAwal == 1){			//satuan awal meter kubik
				printf("Ukuran dalam Decimeter Kubik >>> %.2lf dm^3\n", ukuran[1]);
			}
			else if(pilihAwal == 2){	//satuan awal decimeter kubik
				printf("Ukuran dalam Decimeter Kubik >>> %.2lf dm^3\n", ukuran[1]);
			}
			else if(pilihAwal == 3){	//satuan awal centimeter kubik
				printf("Ukuran dalam Decimeter Kubik >>> %.5lf dm^3\n", ukuran[1]);
			}
			else if(pilihAwal == 4){	//satuan awal milimeter kubik
				printf("Ukuran dalam Decimeter Kubik >>> %.8lf dm^3\n", ukuran[1]);
			}
			else{						//satuan awal liter
				printf("Ukuran dalam Decimeter Kubik >>> %.2lf dm^3\n", ukuran[1]);
			}
			break;
		case 3:		//satuan akhir centimeter kubik
			if(pilihAwal == 1){			//satuan awal meter kubik
				printf("Ukuran dalam Centimeter Kubik >>> %.2lf cm^3\n", ukuran[2]);
			}
			else if(pilihAwal == 2){	//satuan awal decimeter kubik
				printf("Ukuran dalam Centimeter Kubik >>> %.2lf cm^3\n", ukuran[2]);
			}
			else if(pilihAwal == 3){	//satuan awal centimeter kubik
				printf("Ukuran dalam Centimeter Kubik >>> %.2lf cm^3\n", ukuran[2]);
			}
			else if(pilihAwal == 4){	//satuan awal milimeter kubik
				printf("Ukuran dalam Centimeter Kubik >>> %.5lf cm^3\n", ukuran[2]);
			}
			else{						//satuan awal liter
				printf("Ukuran dalam Centimeter Kubik >>> %.2lf cm^3\n", ukuran[2]);
			}
			break;
		case 4:		//satuan akhir milimeter kubik
			ukuran[3] = ukuran[2] * pow(10,3);
			if(pilihAwal == 1){			//satuan awal meter kubik
				printf("Ukuran dalam Milimeter Kubik >>> %.2lf mm^3\n", ukuran[3]);
			}
			else if(pilihAwal == 2){	//satuan awal decimeter kubik
				printf("Ukuran dalam Milimeter Kubik >>> %.2lf mm^3\n", ukuran[3]);
			}
			else if(pilihAwal == 3){	//satuan awal centimeter kubik
				printf("Ukuran dalam Milimeter Kubik >>> %.2lf mm^3\n", ukuran[3]);
			}
			else if(pilihAwal == 4){	//satuan awal milimeter kubik
				printf("Ukuran dalam Milimeter Kubik >>> %.2lf mm^3\n", ukuran[3]);
			}
			else{						//satuan awal liter
				printf("Ukuran dalam Milimeter Kubik >>> %.2lf mm^3\n", ukuran[3]);
			}
			break;
		case 5:		//satuan akhir liter
			ukuran[4] = ukuran[2] * pow(10,(-3));
			if(pilihAwal == 1){			//satuan awal meter kubik
				printf("Ukuran dalam Liter >>> %.2lf L\n", ukuran[4]);
			}
			else if(pilihAwal == 2){	//satuan awal decimeter kubik
				printf("Ukuran dalam Liter >>> %.2lf L\n", ukuran[4]);
			}
			else if(pilihAwal == 3){	//satuan awal centimeter kubik
				printf("Ukuran dalam Liter >>> %.5lf L\n", ukuran[4]);
			}
			else if(pilihAwal == 4){	//satuan awal milimeter kubik
				printf("Ukuran dalam Liter >>> %.8lf L\n", ukuran[4]);
			}
			else{						//satuan awal liter
				printf("Ukuran dalam Liter >>> %.2lf L\n", ukuran[4]);
			}
			break;
		default:	//error handling
			printf(TANGERINE_TEXT"Tombol yang kamu tekan salah, silahkan tekan enter\n\n"RESET);
			system("pause");
			goto convert;
			break;
	}
}
//function yang berisi awal dari konversi satuan massa
void menuMassa(){
	
	double nilaiAwal[5];
	int awalSatuan, akhirSatuan;
	
	//Memilih satuan awal yang ingin dikonversi
	menuBerat:
	system("cls");
	printf(YELLOW_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||               KONVERSI MASSA             ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(BLUE_TEXT"\t\t\t============================================================\n");
	printf("\t\t\t||          Tekan Angka Pilihan Untuk Satuan Awal         ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                        1. Ton (T)                      ||\n");
	printf("\t\t\t||                     2. Kilogram (Kg)                   ||\n");
	printf("\t\t\t||                       3. Gram  (g)                     ||\n");
	printf("\t\t\t||                     4. Miligram (Mg)                   ||\n");
	printf("\t\t\t||                      5. Quintal (Q)                    ||\n");
	printf("\t\t\t============================================================\n\n"RESET);
	printf("\t\t\t");
	
	awalSatuan = getch()-'0';
	
	switch(awalSatuan){
		case 1:
			printf("Masukkan ukuran dalam Ton (T) >>> ");
			scanf("%lf", &nilaiAwal[0]);
			break;
		case 2:
			printf("Masukkan ukuran dalam Kilogram (kg) >>> ");
			scanf("%lf", &nilaiAwal[1]);
			nilaiAwal[0] = nilaiAwal[1] * pow(10,(-3));
			break;
		case 3:
			printf("Masukkan ukuran dalam Gram (g) >>> ");
			scanf("%lf", &nilaiAwal[2]);
			nilaiAwal[0] = nilaiAwal[2] * pow(10,(-6));
			break;
		case 4:
			printf("Masukkan ukuran dalam Miligram (mg) >>> ");
			scanf("%lf", &nilaiAwal[3]);
			nilaiAwal[0] = nilaiAwal[3] * pow(10,(-9));
			break;
		case 5:
			printf("Masukkan ukuran dalam Quintal (Q) >>> ");
			scanf("%lf", &nilaiAwal[4]);
			nilaiAwal[0] = nilaiAwal[4] * pow(10,(-1));
			break;
		default:
			printf(TANGERINE_TEXT"Tombol yang kamu tekan salah, silahkan tekan enter\n\n"RESET);
			system("pause");
			goto menuBerat;
			break;
	}
	convertMassa(nilaiAwal, awalSatuan);
}
//function yang berisi akhir dari konversi satuan massa
void convertMassa(double ukuran[5], int pilihAwal){
	
	int pilihAkhir;
	
	//memilih satuan akhir dari hasil konversi
	convert:
	printf(BLUE_TEXT"\t\t\t============================================================\n");
	printf("\t\t\t||          Tekan Angka Pilihan Untuk Satuan Awal         ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                        1. Ton (T)                      ||\n");
	printf("\t\t\t||                     2. Kilogram (Kg)                   ||\n");
	printf("\t\t\t||                       3. Gram  (g)                     ||\n");
	printf("\t\t\t||                     4. Miligram (Mg)                   ||\n");
	printf("\t\t\t||                      5. Quintal (Q)                    ||\n");
	printf("\t\t\t============================================================\n\n"RESET);
	printf("\t\t\t");
	
	pilihAkhir = getch()-'0';
	switch(pilihAkhir){
		case 1:		//satuan akhir Ton
			if(pilihAwal == 1){			//Satuan awalnya Ton
				printf("Ukuran dalam Ton >>> %.2lf Ton\n", ukuran[0]);
			}
			else if(pilihAwal == 2){	//Satuan awalnya kilogram
				printf("Ukuran dalam Ton >>> %.5lf Ton\n", ukuran[0]);
			}
			else if(pilihAwal == 3){	//Satuan awalnya Gram
				printf("Ukuran dalam Ton >>> %.8lf Ton\n", ukuran[0]);
			}
			else if(pilihAwal == 4){	//Satuan awalnya miligram
				printf("Ukuran dalam Ton >>> %.11lf Ton\n", ukuran[0]);
			}
			else{						//satuan awalnya quintal
				printf("Ukuran dalam Ton >>> %.3lf Ton\n", ukuran[0]);
			}
			break;
		case 2:		//satuan akhir kilogram
			ukuran[1] = ukuran[0] * pow(10,3);
			if(pilihAwal == 1){			//satuan awalnya ton
				printf("Ukuran dalam Kilogram >>> %.2lf kg\n", ukuran[1]);
			}
			else if(pilihAwal == 2){	//satuan awalnya kilogram
				printf("Ukuran dalam Kilogram >>> %.2lf kg\n", ukuran[1]);
			}
			else if(pilihAwal == 3){	//satuan awalnya gram
				printf("Ukuran dalam Kilogram >>> %.5lf kg\n", ukuran[1]);
			}
			else if(pilihAwal == 4){	//satuan awalnya miligram
				printf("Ukuran dalam Kilogram >>> %.8lf kg\n", ukuran[1]);
			}
			else{						//satuan awalnya quintal
				printf("Ukuran dalam Kilogram >>> %.2lf kg\n", ukuran[1]);
			}
			break;
		case 3:		//satuan akhir gram
			ukuran[2] = ukuran[0] * pow(10,6);
			if(pilihAwal == 1){			//satuan awalnya ton
				printf("Ukuran dalam Gram >>> %.2lf g\n", ukuran[2]);
			}
			else if(pilihAwal == 2){	//satuan awalnya kilogram
				printf("Ukuran dalam Gram >>> %.2lf g\n", ukuran[2]);
			}
			else if(pilihAwal == 3){	//satuan awlanya gram
				printf("Ukuran dalam Gram >>> %.2lf g\n", ukuran[2]);
			}
			else if(pilihAwal == 4){	//satuan awalnya miligram
				printf("Ukuran dalam Gram >>> %.5lf g\n", ukuran[2]);
			}
			else{						//satuan awalnya quintal
				printf("Ukuran dalam Gram >>> %.2lf g\n", ukuran[2]);
			}
			break;
		case 4:		//satuan akhir miligram
			ukuran[3] = ukuran[0] * pow(10,9);
			if(pilihAwal == 1){			//satuan awalnya ton
				printf("Ukuran dalam Miligram >>> %.2lf mg\n", ukuran[3]);
			}
			else if(pilihAwal == 2){	//satuan awalnya kilogram
				printf("Ukuran dalam Miligram >>> %.2lf mg\n", ukuran[3]);
			}
			else if(pilihAwal == 3){	//satuan awalnya gram
				printf("Ukuran dalam Miligram >>> %.2lf mg\n", ukuran[3]);
			}
			else if(pilihAwal == 4){	//satuan awalnya miligram
				printf("Ukuran dalam Miligram >>> %.2lf mg\n", ukuran[3]);
			}
			else{						//satuan awalnya quintal
				printf("Ukuran dalam Miligram >>> %.2lf mg\n", ukuran[3]);
			}
			break;
		case 5:		//satuan akhir quintal
			ukuran[4] = ukuran[0] * 10;
			if(pilihAwal == 1){			//satuan awalnya ton
				printf("Ukuran dalam Quintal >>> %.2lf Q\n", ukuran[4]);
			}
			else if(pilihAwal == 2){	//satuan awalnya kilogram
				printf("Ukuran dalam Quintal >>> %.5lf Q\n", ukuran[4]);
			}
			else if(pilihAwal == 3){	//satuan awalnya gram
				printf("Ukuran dalam Quintal >>> %.8lf Q\n", ukuran[4]);
			}
			else if(pilihAwal == 4){	//satuan awalnya miligram
				printf("Ukuran dalam Quintal >>> %.11lf Q\n", ukuran[4]);
			}
			else{						//satuan awalnya quintal
				printf("Ukuran dalam Quintal >>> %.2lf Q\n", ukuran[4]);
			}
			break;
		default:	//error handling
			printf(TANGERINE_TEXT"Tombol yang kamu tekan salah, silahkan tekan enter\n\n"RESET);
			system("pause");
			goto convert;
			break;
	}
}
//function yang berisi awal dari konversi satuan data
void menuData(){
	
	double nilaiAwal[6];
	int awalSatuan, akhirSatuan;
	
	//memilih satuan awal data yang ingin dikonversi
	dataMenu:
	system("cls");
	printf(BLUE_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||                KONVERSI DATA             ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(LAWNGREEN_TEXT"\t\t\t============================================================\n");
	printf("\t\t\t||          Tekan Angka Pilihan Untuk Satuan Awal         ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                        1. Bit (b)                      ||\n");
	printf("\t\t\t||                       2. Byte  (B)                     ||\n");
	printf("\t\t\t||                     3. KiloByte (KB)                   ||\n");
	printf("\t\t\t||                     4. MegaByte (MB)                   ||\n");
	printf("\t\t\t||                     5. GigaByte (GB)                   ||\n");
	printf("\t\t\t||                     6. TeraByte (TB)                   ||\n");
	printf("\t\t\t============================================================\n\n"RESET);
	printf("\t\t\t");
	
	awalSatuan = getch()-'0';
	switch(awalSatuan){
		case 1:
			printf("Masukkan ukuran dalam Bit (b) >>> ");
			scanf("%lf", &nilaiAwal[0]);
			nilaiAwal[3] = (nilaiAwal[0] * pow(10,(-6))) / 8;
			break;
		case 2:
			printf("Masukkan ukuran dalam Byte (B) >>> ");
			scanf("%lf", &nilaiAwal[1]);
			nilaiAwal[3] = nilaiAwal[1] * pow(10,(-6));
			break;
		case 3:
			printf("Masukkan ukuran dalam KiloByte (KB) >>> ");
			scanf("%lf", &nilaiAwal[2]);
			nilaiAwal[3] = nilaiAwal[2] * pow(10,(-3));
			break;
		case 4:
			printf("Masukkan ukuran dalam MegaByte (MB) >>> ");
			scanf("%lf", &nilaiAwal[3]);
			break;
		case 5:
			printf("Masukkan ukuran dalam GigaByte (GB) >>> ");
			scanf("%lf", &nilaiAwal[4]);
			nilaiAwal[3] = nilaiAwal[4] * pow(10,3);
			break;
		case 6:
			printf("Masukkan ukuran dalam TeraByte (TB) >>> ");
			scanf("%lf", &nilaiAwal[5]);
			nilaiAwal[3] = nilaiAwal[5] * pow(10,6);
			break;
		default:  //error handling
			printf(TANGERINE_TEXT"Tombol yang kamu tekan salah, silahkan tekan enter\n\n"RESET);
			system("pause");
			goto dataMenu;
			break;
	}
	convertData(nilaiAwal, awalSatuan);
}
//function yang berisi akhir dari konveri satuan data
void convertData(double ukuran[6], int pilihAwal){
	
	int pilihAkhir;
	
	//memilih satuan akhir yang menjadi hasil konversi
	convert:
	printf(LAWNGREEN_TEXT"\t\t\t============================================================\n");
	printf("\t\t\t||          Tekan Angka Pilihan Untuk Satuan Awal         ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||                        1. Bit (b)                      ||\n");
	printf("\t\t\t||                       2. Byte  (B)                     ||\n");
	printf("\t\t\t||                     3. KiloByte (KB)                   ||\n");
	printf("\t\t\t||                     4. MegaByte (MB)                   ||\n");
	printf("\t\t\t||                     5. GigaByte (GB)                   ||\n");
	printf("\t\t\t||                     6. TeraByte (TB)                   ||\n");
	printf("\t\t\t============================================================\n\n"RESET);
	printf("\t\t\t");
	
	pilihAkhir = getch()-'0';
	switch(pilihAkhir){
		case 1:		//satuan akhir Bit
			ukuran[0] = (ukuran[3] * pow(10,6)) / 8;
			if(pilihAwal == 1){			//satuan awalnya bit
				printf("Ukuran dalam Bit >>> %.2lf b\n", ukuran[0]);
			}
			else if(pilihAwal == 2){	//satuan awalnya byte
				printf("Ukuran dalam Bit >>> %.3lf b\n", ukuran[0]);
			}
			else if(pilihAwal == 3){	//satuan awalnya kilobyte
				printf("Ukuran dalam Bit >>> %.2lf b\n", ukuran[0]);
			}
			else if(pilihAwal == 4){	//satuan awalnya megabyte
				printf("Ukuran dalam Bit >>> %.2lf b\n", ukuran[0]);
			}
			else if(pilihAwal == 5){	//satuan awalnya gigabyte
				printf("Ukuran dalam Bit >>> %.2lf b\n", ukuran[0]);
			}
			else{						//satuan awalnya terabyte
				printf("Ukuran dalam Bit >>> %.2lf b\n", ukuran[0]);
			}
			break;
		case 2:		//satuan akhir byte
			ukuran[1] = ukuran[3] * pow(10,6);
			if(pilihAwal == 1){			//satuan awlanya bit
				printf("Ukuran dalam Byte >>> %.3lf B\n", ukuran[1]);
			}
			else if(pilihAwal == 2){	//satuan awalnya byte
				printf("Ukuran dalam Byte >>> %.2lf B\n", ukuran[1]);
			}
			else if(pilihAwal == 3){	//satuan awlanya kilobyte
				printf("Ukuran dalam Byte >>> %.2lf m\n", ukuran[1]);
			}
			else if(pilihAwal == 4){	//satuan awalnya megabyte
				printf("Ukuran dalam Byte >>> %.2lf m\n", ukuran[1]);
			}
			else if(pilihAwal == 5){	//satuan awlanya gigabyte
				printf("Ukuran dalam Byte >>> %.2lf m\n", ukuran[1]);
			}
			else{						//satuan awalnya terabyte
				printf("Ukuran dalam Byte >>> %.2lf m\n", ukuran[1]);
			}
			break;
		case 3:		//satuan akhir kilobyte
			ukuran[2] = ukuran[3] * pow(10,3);
			if(pilihAwal == 1){			//satuan awalnya bit
				printf("Ukuran dalam KiloByte >>> %.6lf KB\n", ukuran[2]);
			}
			else if(pilihAwal == 2){	//satuan awalnya byte
				printf("Ukuran dalam KiloByte >>> %.5lf KB\n", ukuran[2]);
			}
			else if(pilihAwal == 3){	//satuan awalnya kilobyte
				printf("Ukuran dalam KiloByte >>> %.2lf KB\n", ukuran[2]);
			}
			else if(pilihAwal == 4){	//satuan awalnya megabyte
				printf("Ukuran dalam KiloByte >>> %.2lf KB\n", ukuran[2]);
			}
			else if(pilihAwal == 5){	//satuan awalnya gigabyte
				printf("Ukuran dalam KiloByte >>> %.2lf KB\n", ukuran[2]);
			}
			else{						//satuan awalnya terabyte
				printf("Ukuran dalam KiloByte >>> %.2lf KB\n", ukuran[2]);
			}
			break;
		case 4:		//satuan akhir megabyte
			if(pilihAwal == 1){			//satuan awalnya bit
				printf("Ukuran dalam MegaByte >>> %.9lf MB\n", ukuran[3]);
			}
			else if(pilihAwal == 2){	//satuan awlanya byte
				printf("Ukuran dalam MegaByte >>> %.8lf MB\n", ukuran[3]);
			}
			else if(pilihAwal == 3){	//satuan awalnya kilobyte
				printf("Ukuran dalam MegaByte >>> %.5lf MB\n", ukuran[3]);
			}
			else if(pilihAwal == 4){	//satuan awalnya megabyte
				printf("Ukuran dalam MegaByte >>> %.2lf MB\n", ukuran[3]);
			}
			else if(pilihAwal == 5){	//satuan awalnya gigabyte
				printf("Ukuran dalam MegaByte >>> %.2lf MB\n", ukuran[3]);
			}
			else{						//satuan awalnya terabyte
				printf("Ukuran dalam MegaByte >>> %.2lf MB\n", ukuran[3]);
			}
			break;
		case 5:		//satuan akhir gigabyte
			ukuran[4] = ukuran[3] * pow(10,(-3));
			if(pilihAwal == 1){			//satuan awlanya bit
				printf("Ukuran dalam GigaByte >>> %.12lf GB\n", ukuran[4]);
			}
			else if(pilihAwal == 2){	//satuan awalnya byte
				printf("Ukuran dalam GigaByte >>> %.11lf GB\n", ukuran[4]);
			}
			else if(pilihAwal == 3){	//satuan awlanya kilobyte
				printf("Ukuran dalam GigaByte >>> %.8lf GB\n", ukuran[4]);
			}
			else if(pilihAwal == 4){	//satuan awalnya megabyte
				printf("Ukuran dalam GigaByte >>> %.5lf GB\n", ukuran[4]);
			}
			else if(pilihAwal == 5){	//satuan awlanya gigabyte
				printf("Ukuran dalam GigaByte >>> %.2lf GB\n", ukuran[4]);
			}
			else{						//satuan awalnya terabyte
				printf("Ukuran dalam GigaByte >>> %.2lf GB\n", ukuran[4]);
			}
			break;
		case 6:		//satuan akhir terabyte
			ukuran[5] = ukuran[3] * pow(10,(-6));
			if(pilihAwal == 1){			//satuan awalnya bit
				printf("Ukuran dalam TeraByte >>> %.15lf TB\n", ukuran[5]);
			}
			else if(pilihAwal == 2){	//satuan awalnya byte
				printf("Ukuran dalam TeraByte >>> %.12lf TB\n", ukuran[5]);
			}
			else if(pilihAwal == 3){	//satuan awalnya kilobyte
				printf("Ukuran dalam TeraByte >>> %.11lf TB\n", ukuran[5]);
			}
			else if(pilihAwal == 4){	//satuan awlanya megabyte
				printf("Ukuran dalam TeraByte >>> %.8lf TB\n", ukuran[5]);
			}
			else if(pilihAwal == 5){	//satuan awalnya gigabyte
				printf("Ukuran dalam TeraByte >>> %.5lf TB\n", ukuran[5]);
			}
			else{						//satuan awalnya terabyte
				printf("Ukuran dalam TeraByte >>> %.2lf TB\n", ukuran[5]);
			}
			break;
		default:	//error handling
			printf("Tombol yang kamu tekan salah, silahkan tekan enter\n\n");
			system("pause");
			goto convert;
			break;
	}
}
//function untuk memulai menghitung BMI
void hitungBMI(){
	system("cls");
	float tinggi, berat, beratSeharusnya, selisihBerat, bmi;
	
	system("cls"); 
	printf(PINK_TEXT"\n\t\t\t\t|============================================|\n");
	printf("\t\t\t\t||               PENGHITUNG BMI             ||\n");
	printf("\t\t\t\t|============================================|\n\n\n"RESET);
	printf(BLUE_TEXT"\t\t\t============================================================\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t||   Input Yang Dimasukkan Berupa Berat dan  Tinggi Anda  ||\n");
	printf("\t\t\t||  (BMI Dihitung Berdasarkan Perhitungan WHO Tahun 2000) ||\n");
	printf("\t\t\t||                                                        ||\n");
	printf("\t\t\t============================================================\n\n"RESET);
	
	printf("\t\t\tSilahkan masukkan berat anda  (dalam kg) >>> ");
	scanf("%f", &berat);
	printf("\t\t\tSilahkan masukkan tinggi anda (dalam cm) >>> ");
	scanf("%f", &tinggi);
	
	tinggi = tinggi / 100;
	bmi = berat / (tinggi * tinggi);
	
	printf("\n\t\t\t============================================================\n");
	
	printf("\t\t\t\t         >>>> BMI Anda adalah %.2f <<<<\n\t\t", bmi);
	
	if(bmi < 18.50){
		beratSeharusnya = 18.51 * tinggi * tinggi;
		selisihBerat = beratSeharusnya - berat;
		printf(RED_TEXT"Underweight, Anda perlu menaikkan menaikkan berat badan Anda sebesar %.2f kg"RESET, selisihBerat);
	}
	else if (bmi >= 18.50 && bmi < 25.00){
		printf(LAWNGREEN_TEXT"\t\t\t>>>> Berat Badan  Anda Ideal <<<<"RESET);
	}
	else if (bmi >= 25.00 && bmi < 30.00){
		beratSeharusnya = 24.99 * tinggi * tinggi;
		selisihBerat = berat - beratSeharusnya;
		printf(RED_TEXT"     Overweight, Anda perlu menurunkan berat badan Anda sebesar %.2f kg"RESET, selisihBerat);
	}
	else if (bmi >= 30.00 && bmi < 35.00){
		beratSeharusnya = 24.99 * tinggi * tinggi;
		selisihBerat = berat - beratSeharusnya;
		printf(RED_TEXT"       Obes I, Anda perlu menurunkan berat badan Anda sebesar %.2f kg"RESET, selisihBerat);
	}
	else if (bmi >= 35.00 && bmi < 40.00){
		beratSeharusnya = 24.99 * tinggi * tinggi;
		selisihBerat = berat - beratSeharusnya;
		printf(RED_TEXT"      Obes II,  Anda perlu menurunkan berat badan Anda sebesar %.2f kg"RESET, selisihBerat);
	}
	else {
		beratSeharusnya = 24.99 * tinggi * tinggi;
		selisihBerat = berat - beratSeharusnya;
		printf(RED_TEXT"      Obes III, Anda perlu menurunkan berat badan Anda sebesar %.2f kg"RESET, selisihBerat);
	}
}

