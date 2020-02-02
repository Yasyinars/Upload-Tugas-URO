/*	Kelompok 4 Programming URO :
	1. Mohammad Yasyin A.R.S.	(16419224)
	2. Mochammad Nandika Pratama(16419180)
	3. Muhammad Alif Darmamulia	(16019420)	*/

#include <stdio.h>
#include <math.h>

void daftar_siang(int health, int happiness, int social, int hygiene, int money)
{
	printf("Daftar kegiatan :\t\t\t\t\tStatus Hilmys :\n");
	printf("1. Rebahan santuy \t 6. Latman\t\t\tHealth = %d\n", health);
	printf("2. Memberi sedekah \t 7. Makan siang\t\t\tHappiness = %d\n", happiness);
	printf("3. Mandi wajib \t\t 8. Jualan tahu bulat\t\tSocial = %d\n", social);
	printf("4. Ketemu doi \t\t 9. Tidur siang\t\t\tHygiene = %d\n", hygiene);
	printf("5. Hangout bareng \t 10. Bersih kamar\t\tMoney = %d\n\n", money);
}

void daftar_malam(int health, int happiness, int social, int hygiene, int money)
{
	printf("Daftar kegiatan :\t\t\t\t\tStatus Hilmys :\n");
	printf("1. Nabung di wc \t 6. Makan malam\t\t\tHealth = %d\n", health);
	printf("2. Begadang tugas \t 7. Ndugem\t\t\tHappiness = %d\n", happiness);
	printf("3. Ambis URO dong \t 8. Trading binomo\t\tSocial = %d\n", social);
	printf("4. Ngutang temen \t 9. Ibadah\t\t\tHygiene = %d\n", hygiene);
	printf("5. Tidur awal \t\t 10. Anjay mabar\t\tMoney = %d\n\n", money);
}

void daftar_status(int health, int happiness, int social, int hygiene, int money)
{
	printf("Status Hilmys : \n");
	printf("Health >> %d\n", health);
	printf("Happiness >> %d\n", happiness);
	printf("social >> %d\n", social);
	printf("Hygiene >> %d\n", hygiene);
	printf("Money >> %d\n\n", money);
}

void maxmin(int *status)
{
	if(*status > 100){
		*status = 100;
	}
	if(*status < 0){
		*status = 0;
	}
}

int main ()
{
	int mulai;
	int health, happiness, social, hygiene, money;
	health = happiness = social = hygiene = money = 50;
	
	int siang[5], malam[5], i;
	
	printf("\n\t~~~~~~~~~~~~~~~~~~~~ SELAMAT DATANG DI HILMYS'S LIFE ~~~~~~~~~~~~~~~~~~~~\n\n\n");
	printf("Peraturan :\n");
	printf("1. Anda bebas menyuruh hilmys untuk berbuat apa saja (yang ada di dalam daftar).\n");
	printf("2. Tiap kegiatan ada akibat dan syaratnya, misalkan makan siang menambah health tapi perlu uang,dll.\n");
	printf("3. Ada beberapa kegiatan tertentu yang hasil perubahan statusnya ACAK(misal trading dan latman).\n");
	printf("4. Daftar kegiatan dibagi menjadi 2 sesi (siang dan malam), 5 kegiatan tiap sesi.\n");
	printf("5. Jika health Hilmys habis, maka permainan  selesai.\n\n");
	do
	{
		printf("Tekan 1 untuk mulai : ");
		scanf("%d", &mulai);
	} while(mulai != 1);
	printf("\n\n\t\t~~~~~~~~~~~~~~~~~~~~ PERMAINAN DIMULAI ~~~~~~~~~~~~~~~~~~~~\n\n\n");
	
	while(health >  0)
	{
		printf("\t\t~~~~~~~~~~~~~~~~~~~~    SIANG HARI     ~~~~~~~~~~~~~~~~~~~~\n\n");
		
		for(i = 0; i < 5; i++)
		{
			printf("\t\t\t\t *****(KEGIATAN KE-%d)*****\n\n", i+1);
			daftar_siang(health, happiness, social, hygiene, money);
			printf("Masukkan pilihan : ");
			scanf("%d", &siang[i]);
			
			if(siang[i] == 1)
			{
				happiness += 5; maxmin(&happiness);
				health -= 2; maxmin(&health);
				hygiene -= 5; maxmin(&hygiene);
				social -= 5; maxmin(&social);
			}
			
			if(siang[i] == 2)
			{
				if(money >= 5)
				{
					money -= 5; maxmin(&money);
					health += 1; maxmin(&health);
					happiness += 7; maxmin(&happiness);
					social += 4; maxmin(&social);
				}
				else
				{
					printf("\nUangmu tidak cukup !! (Minimal money = 5. Social dan happiness berkurang !!)\n");
					happiness -= 17; maxmin(&happiness);
					social -= 8; maxmin(&social);
				}
			}
			
			if(siang[i] == 3)
			{
				hygiene += 15; maxmin(&hygiene);
			}
			
			if(siang[i] == 4)
			{
				if(social >= 50 && happiness >= 25)
				{
					health += 4; maxmin(&health);
					happiness += 20; maxmin(&happiness);
				}
				else
				{
					printf("\nSocial dan happiness mu tidak cukup !!\n");
					printf("(Minimal social = 50, happiness = 25. Health dan happiness berkurang !!\n");
					health -= 15; maxmin(&health);
					happiness -= 20; maxmin(&happiness);
				}
			}
			
			if(siang[i] == 5)
			{
				if(money >= 25 && social >= 50 && health >= 20)
				{
					money -= 20; maxmin(&money);
					happiness += 50; maxmin(&happiness);
					health -= 9; maxmin(&health);
					social += 17; maxmin(&social);
				}
				else
				{
					printf("\nStatus tidak cukup !!\n");
					printf("(Minimal money = 25, social = 50, health = 20. Social dan happiness berkurang !!\n");
					social -= 20; maxmin(&social);
					happiness -= 10; maxmin(&happiness);
				}
			}
			
			if(siang[i] == 6)
			{
				health += 5; maxmin(&health);
				hygiene -= 10; maxmin(&hygiene);
			}
			
			if(siang[i] == 7)
			{
				if(money >= 10)
				{
					health += 7; maxmin(&health);
					money -= 10; maxmin(&money);
				}
				else
				{
					printf("\nUangmu tidak cukup !! (Minimal 10).\n");
				}
			}
			
			if(siang[i] == 8)
			{
				health -= 23; maxmin(&health);
				happiness -= 19; maxmin(&happiness);
				hygiene -= 9; maxmin(&hygiene);
				social += 11; maxmin(&social);
				money += 30; maxmin(&money);
			}
			
			if(siang[i] == 9)
			{
				health += 7; maxmin(&health);
				hygiene -= 4; maxmin(&hygiene);
			}
			
			if(siang[i] == 10)
			{
				health -= 3; maxmin(&health);
				hygiene += 20; maxmin(&hygiene);
				happiness += 7; maxmin(&happiness);
			}
			printf("\n");
			
			if(health == 0){
				break;
			}		
		}
		
		daftar_status(health, happiness, social, hygiene, money);
		
		if(health == 0){
			break;
		}
			
		if(siang[0] != 7 && siang[1] != 7 && siang[2] != 7 && siang[3] != 7 && siang[4] != 7)
		{
			printf("Hilmys seharian tidak makan, akibatnya ia jatuh sakit dan harus berobat !!\n\n");
			health -= 45; maxmin(&health);
			money -= 30; maxmin(&money);
			daftar_status(health, happiness, social, hygiene, money);
		}
		if(health == 0){
			break;
		}
		
		if(siang[3] == 8)
		{
			printf("Saat berjualan tahu bulat tadi, pelanggan lebih banyak dari biasanya !! (Money bertambah)\n\n");
			money += 15; maxmin(&money);
			daftar_status(health, happiness, social, hygiene, money);
		}
		if(health == 0){
			break;
		}
		
		if(siang[2] == 6)
		{
			printf("Saat latman tadi siang, karena panas terik, Hilmys pingsan dan jatuh sakit !!\n\n");
			health -= 45; maxmin(&health);
			daftar_status(health, happiness, social, hygiene, money);
		}
		if(health == 0){
			break;
		}
		
		if(siang[0] == 10)
		{
			printf("saat beres kamar tadi pagi, Hilmys menemukan uang !!\n\n");
			money += 15; maxmin(&money);
			daftar_status(health, happiness, social, hygiene, money);
		}
		if(health == 0){
			break;
		}
		
		printf("\t\t~~~~~~~~~~~~~~~~~~~~    MALAM HARI     ~~~~~~~~~~~~~~~~~~~~\n\n");
		
		for(i = 0; i < 5; i++)
		{
			printf("\t\t\t\t *****(KEGIATAN KE-%d)*****\n\n", i+1);
			daftar_malam(health, happiness, social, hygiene, money);
			printf("Masukkan pilihan : ");
			scanf("%d", &malam[i]);
			
			if(malam[i] == 1)
			{
				happiness += 5; maxmin(&happiness);
				health += 2; maxmin(&health);
				hygiene += 5; maxmin(&hygiene);
			}
			
			if(malam[i] == 2)
			{
				health -= 3; maxmin(&health);
				happiness += 7; maxmin(&happiness);
			}
			
			if(malam[i] == 3)
			{
				health += 5; maxmin(&health);
				happiness += 7; maxmin(&happiness);
			}
			
			if(malam[i] == 4)
			{
				if(social >= 75 && happiness >= 25)
				{
					money += 25; maxmin(&money);
					social -= 20; maxmin(&social);
				}
				else
				{
					printf("\nSocial dan happiness mu tidak cukup, temanmu tak mau dihutangi !!\n");
					printf("(Minimal social = 75, happiness = 25. Social turun sedikit !!\n");
					social -= 15; maxmin(&social);
				}
			}
			
			if(malam[i] == 5)
			{
				if(malam[0] == 5 || malam[1] == 5)
				{
					printf("\nHilmys tidur awal, hari esok datang.\n");
					happiness += 20; maxmin(&happiness);
					health += 30; maxmin(&health);
					daftar_status(health, happiness, social, hygiene, money);
					printf("\n");
					break;
				}
				else
				{
					printf("\nIni sudah terlalu larut untuk tidur lebih awal !! (Tidur awal gagal)\n");
				}
			}
			
			if(malam[i] == 6)
			{
				if(money >= 10)
				{
					health += 7; maxmin(&health);
					money -= 10; maxmin(&money);
				}
				else
				{
					printf("\nUangmu tidak cukup !! (Minimal 10).\n");
				}
			}
			
			if(malam[i] == 7)
			{
				if(money >= 25 && social >= 50 && health >= 20)
				{
					money -= 20; maxmin(&money);
					happiness += 50; maxmin(&happiness);
					health -= 9; maxmin(&health);
					social += 17; maxmin(&social);
				}
				else
				{
					printf("\nStatus tidak cukup !!\n");
					printf("(Minimal money = 25, social = 50, health = 20. Social dan happiness berkurang !!\n");
					social -= 20; maxmin(&social);
					happiness -= 10; maxmin(&happiness);
				}
			}
			
			if(malam[i] == 8)
			{
				if(malam[1] == 8 || malam[3] == 8)
				{
					printf("\nSelamat, Hilmys mendapat money 50 !!\n");
					money += 50; maxmin(&money);
					happiness += 20; maxmin(&happiness);
				}
				else
				{
					printf("\nAduh, Hilmys kehilangan money 50 !!\n");
					money -= 50; maxmin(&money);
					happiness -= 20; maxmin(&happiness);
				}
			}
			
			if(malam[i] == 9)
			{
				health += 7; maxmin(&health);
				happiness += 14; maxmin(&happiness);
			}
			
			if(malam[i] == 10)
			{
				health -= 6; maxmin(&health);
				social += 20; maxmin(&social);
				happiness += 17; maxmin(&happiness);
			}
			printf("\n");
			
			if(health == 0){
				break;
			}
		}
		
		daftar_status(health, happiness, social, hygiene, money);
		
		if(health == 0){
			break;	
		}
		
		if(malam[0] != 6 && malam[1] != 6 && malam[2] != 6 && malam[3] != 6 && malam[4] != 6)
		{
			printf("Hilmys semalaman tidak makan, akibatnya ia jatuh sakit dan harus berobat !!\n\n");
			health -= 45; maxmin(&health);
			money -= 30; maxmin(&money);
			daftar_status(health, happiness, social, hygiene, money);
		}
		if(health == 0){
			break;
		}

	}

	printf("\n\n\t\t~~~~~~~~~~~~~~~~~~~~ HYLMYS MENINGGAL ~~~~~~~~~~~~~~~~~~~~\n\n\n");
	printf("\tHilmys kehabisan health !! Lain kali berhati-hati mengatur kegiatan yaa...");
	printf("\n\n\n\t\t~~~~~~~~~~~~~~~~~~~~ PERMAINAN SELESAI ~~~~~~~~~~~~~~~~~~~~\n\n\n");
	
	return 0;
}
