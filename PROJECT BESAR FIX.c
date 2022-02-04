#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

char lagi = 'y';
int nomor, harga, bayar, i = 1,j =1, jumlah_orang = 0, total_akhir = 0, pilihan;
char pilih = 'Y';
char nama[99][99]; //sudah termasuk string dan array

int menumakan()
{
	system("cls");
	printf("PILIH MENU ANDA	: \n");
	printf("1. AYAM BAKAR KECAP      	Rp15.000\n2. MIE GORENG		        Rp10.000\n3.IKAN GURAME      		Rp25.000\n4.BAKSO TITIL		 	Rp8.000\n5.OSENG OSENG KANGKUNG		Rp10.000\n");
pilih:
pilih = 'Y';
	while (pilih == 'Y')
	{
		printf("-----------------------------------------\n");
		printf("MASUKKAN PESANAN : ", i);
		i=i+1;
		scanf("%d", &nomor);
		printf("-----------------------------------------\n");

		if (nomor == 1)
		{
			int total, jumlah; ///UNTUK HASIL HARGA DI KALI PORSI/JUMLAH YANG DI BELI
			harga = 15000;
			printf("AYAM BAKAR = %d\n", harga);
			printf("jumlah yang di beli : ");
			scanf("%d", &jumlah);
			if (jumlah > 5)
			{
				printf("anda mendapat diskon karena membeli lebih dari 5 porsi\n");
				total = harga * jumlah * 0.80;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
			else
			{
				total = harga * jumlah;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
		}
		else if (nomor == 2)
		{
			int total, jumlah;
			harga = 10000;
			printf("2. MIE GORENG =%d\n", harga);
			printf("jumlah yang di beli : ");
			scanf("%d", &jumlah);
			if (jumlah > 5)
			{
				printf("anda mendapat diskon karena membeli lebih dari 5 porsi\n");
				total = harga * jumlah * 0.80;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
			else
			{
				total = harga * jumlah;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
		}
		else if (nomor == 3)
		{
			int total, jumlah;
			harga = 25000;
			printf("IKAN GURAME = %d\n", harga);
			printf("jumlah yang di beli : ");
			scanf("%d", &jumlah);
			if (jumlah > 5)
			{
				printf("anda mendapat diskon karena membeli lebih dari 5 porsi\n");
				total = harga * jumlah * 0.80;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
			else
			{
				total = harga * jumlah;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
		}
		else if (nomor == 4)
		{
			int total, jumlah;
			harga = 8000;
			printf("BAKSO TITIL = %d\n", harga);
			printf("jumlah yang di beli : ");
			scanf("%d", &jumlah);
			if (jumlah > 5)
			{
				printf("anda mendapat diskon karena membeli lebih dari 5 porsi\n");
				total = harga * jumlah * 0.80;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
			else
			{
				total = harga * jumlah;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
		}
		else if (nomor == 5)
		{
			int total, jumlah;
			harga = 10000;
			printf("OSENG OSENG KANGKUNG = %d\n", harga);
			printf("jumlah yang di beli : ");
			scanf("%d", &jumlah);
			if (jumlah > 5)
			{
				printf("anda mendapat diskon karena membeli lebih dari 5 porsi\n");
				total = harga * jumlah * 0.80;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
			else
			{
				total = harga * jumlah;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
		}
		else
		{
			printf("TIDAK ADA DI MENU !!");
			break;
		}
		printf("---	i=i+1;--------------------------------------\n");
		printf("MAU NAMBAH MENU LAGI (Y/N): ");
		scanf(" %c", &pilih);
		if (pilih == 'Y')
			main();
		else if (pilih == 'N')
			akhiran();
	}
}

int menuminum()
{
	system("cls");
naik:
	printf("PILIH MINUMAN ANDA	: \n");
	printf("1. ES TEH		Rp2. 000\n2. ES DOGER		Rp5.000\n3. ES TEH		Rp2000\n4. ES KELAPA MUDA	Rp5.000\n");
	pilih = 'Y';
	while (pilih == 'Y')
	{
		printf("-----------------------------------------\n");
		printf("MASUKKAN PESANAN : ", j);
			j=j+1;
		scanf("%d", &nomor);
		printf("-----------------------------------------\n");

		if (nomor == 1)
		{
			int total, jumlah;
			harga = 2000;
			printf("ES TEH = %d\n", harga);
			printf("jumlah yang di beli : ");
			scanf("%d", &jumlah);
			if (jumlah > 7)
			{
				printf("anda mendapat diskon karena membeli lebih dari 7 gelas\n");
				total = harga * jumlah * 0.80;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
			else
			{
				total = harga * jumlah;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
		}
		else if (nomor == 2)
		{
			int total, jumlah;
			harga = 5000;
			printf("ES DOGER = %d\n", harga);
			printf("jumlah yang di beli : ");
			scanf("%d", &jumlah);
			if (jumlah > 7)
			{
				printf("anda mendapat diskon karena membeli lebih dari 7 gelas\n");
				total = harga * jumlah * 0.80;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
			else
			{
				total = harga * jumlah;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
		}
		else if(nomor == 3)
		{
			int total, jumlah;
			harga = 2000;	printf("BARANG YANG DI BELI :%d\n", nomor);
			printf("ES TEH = %d\n", harga);
			printf("jumlah yang di beli : ");
			scanf("%d", &jumlah);
			if (jumlah > 7)
			{
				printf("anda mendapat diskon karena membeli lebih dari 7 gelas\n");
				total = harga * jumlah * 0.80;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
			else
			{
				total = harga * jumlah;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
		}
		else if(nomor == 4)
		{
			int total, jumlah;
			harga = 5000;
			printf("ES KELAPA MUDA = %d\n", harga);
			printf("jumlah yang di beli : ");
			scanf("%d", &jumlah);
			if (jumlah > 7)
			{
				printf("anda mendapat diskon karena membeli lebih dari 7 gelas\n");
				total = harga * jumlah * 0.80;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
			else
			{
				total = harga * jumlah;
				printf("total : %d\n", total);
				total_akhir = total_akhir + total;
			}
		}
		else
		{
			printf("TIDAK ADA DI MENU !!");
			goto naik;
		}
		printf("-----------------------------------------\n");
		printf("MAU NAMBAH MENU LAGI (Y/N): ");
		scanf(" %c", &pilih);
		if (pilih == 'Y')
			main();
		else if (pilih == 'N')
			akhiran();
	}
}

int akhiran()
{
	system("cls");
	printf("ATAS NAMA : ");
	fflush(stdin);
	scanf("%[^\n]", nama[jumlah_orang]);
	jumlah_orang++;
	printf("TOTAL HARGA = %d\n", total_akhir);
	bayar_lagi://goto nya
	printf("TUNAI :");
	scanf(" %d", &bayar);
	if (bayar < total_akhir)
	{
		printf("-----------------------------------------\n");
		printf("UANG ANDA KURANG !!!!\n");
		printf("-----------------------------------------\n");
		goto bayar_lagi;
	}
	else
	{
		do{
		printf("KEMBALIAN : %d\n", bayar - total_akhir);
		}
		while (total_akhir = 0);
	}
		printf("=============================================\n");
		printf("== TERIMKASIH SUDAH MEMBELI DI WARUNK KAMI ==\n");
		printf("==        KAMI SANGAT SENANG DENGAN        ==\n");
		printf("==             KEDATANGAN ANDA             ==\n");
		printf("==                                         ==\n");
		printf("==                                         ==\n");
		printf("== Jln.soedirman no 57.                    ==\n");
		printf("== WARUNK WAREGKILO                        ==\n");
		printf("== WA : 081329614383.                      ==\n");
		printf("=============================================\n");
		printf("\ntekan apapun untuk lanjut ke manu\n");
		getch();
		return 0;
	}



int list_harian()
{
	for (i = 0; i < jumlah_orang; i++)
	{
		printf("%d atas nama : %s\n", i + 1, nama[i]);
	}
	do
	{
		printf("tekan [y] untuk kembali ke menu [t] untuk exit: ");
		fflush(stdin);
		scanf("%c", &lagi);
		if (lagi == 'y')
		{
			main();
		}
		else if (lagi == 't')
		{
			printf("=============================================\n");
			printf("== TERIMKASIH SUDAH MEMBELI DI WARUNK KAMI ==\n");
			printf("==        KAMI SANGAT SENANG DENGAN        ==\n");
			printf("==             KEDATANGAN ANDA             ==\n");
			printf("==                                         ==\n");
			printf("==                                         ==\n");
			printf("== Jln.soedirman no 57.                    ==\n");
			printf("== WARUNK WAREGKILO                        ==\n");
			printf("== WA : 081329614383.                      ==\n");
			printf("=============================================\n");
			return 0;
		}
	}
	while (lagi != 'y');
}

int main()
{
menu1:

	printf("pilihan:          =");
	printf("\n1) Makanan        =");
	printf("\n2) Minuman        =");
	printf("\n3) Bayar          =");
	printf("\n4) list pembeli   =\n");
	printf("===================");
	printf("\npilihan : ");
	scanf("%d", &pilihan);

	switch (pilihan)
	{
	case 1:
		menumakan();
		goto menu1;
		break;

	case 2:
		menuminum();
		goto menu1;
		break;
	case 3:
		akhiran();
		goto menu1;
		break;
	case 4:
		list_harian();
		break;
	}
}
