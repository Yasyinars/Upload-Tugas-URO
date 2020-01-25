// Tugas 2 URO Programming
// Mohammad Yasyin A. R. S	(FTTM/16419224)
// Rexy Gamaliel R			(STEI/16519132)
// Shela Anugrah Krista		(FTTM/16419292)

#include <iostream>
using namespace std;

int main(){
	home:
	int pil;
	char option;
	cout<<"SELAMAT DATANG DI KALKULATOR POLINOMIAL"<<endl;
	cout<<"Silakan pilih menu di bawah ini:"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Turunan"<<endl;
	cout<<"Pilihan anda: ";
	cin >>pil;
	cout<<endl;
	
	if(pil == 1){
		int k1, n1, k2, n2, k3;
	
		cout <<"Akan dicari hasil dari penjumlahan dua polinomial \n\nMasukkan derajat polinomial pertama : ";
		cin >> n1; int N1[n1];
		for(int i = 0; i < n1; i++)
		{
			cout <<"Masukkan koefisien x^"<< n1-i <<" : "; cin >> N1[i];
		}
		cout <<"Masukkan konstanta polinomial pertama : "; cin >> k1; cout <<"\n";
	
		//-----------------------------------------------------------------------------------------------------//
	
		cout <<"Masukkan derajat polinomial kedua : ";
		cin >> n2; int N2[n2];
		for(int i = 0; i < n2; i++)
		{
			cout <<"Masukkan koefisien x^"<< n2-i <<" : "; cin >> N2[i];
		}
		cout <<"Masukkan konstanta polinomial kedua : "; cin >> k2; cout <<"\n";
	
		//-----------------------------------------------------------------------------------------------------//
	
		cout <<"Polinomial pertama yang anda masukkan :\n";
		if(N1[0] != 0){
			cout << N1[0] <<"x^"<< n1;
		}
		for(int i = 1; i < n1; i++)
		{
			if(N1[i] < 0){
				cout <<" "<< N1[i] <<"x^"<< n1-i;
			} else if(N1[i] > 0){
				cout <<" +"<< N1[i] <<"x^"<< n1-i;
			}
		}
		if(k1 > 0){
			cout <<" +"<< k1 <<"\n\n";
		} else if(k1 < 0){
			cout <<" "<< k1 <<"\n\n";
		}
	
		//----------------------------------------------------------------------------------------------------//
	
		cout <<"Polinomial kedua yang anda masukkan :\n";
		if(N2[0] != 0){
			cout << N2[0] <<"x^"<< n2;
		}
		for(int i = 1; i < n2; i++)
		{
			if(N2[i] < 0){
				cout <<" "<< N2[i] <<"x^"<< n2-i;
			} else if(N2[i] > 0){
				cout <<" +"<< N2[i] <<"x^"<< n2-i;
			}
		}
		if(k2 > 0){
			cout <<" +"<< k2 <<"\n\n";
		} else if(k2 < 0){
			cout <<" "<< k2 <<"\n\n";
		}
	
		//---------------------------------------------------------------------------------------------------//
	
		cout <<"Hasil dari penjumlahan kedua polinomial adalah :\n";
		if(n1 >= n2){
			int M[n1];
			//-----------------------------------------------------------------------------------------------//
			for(int i = 0; i < n1; i++)
			{
				if(n2-1-i == -1){
					while(i < n1)
					{
						M[i] = N1[n1-1-i];
						i++;
					}
					break;
				}
				M[i] = N1[n1-1-i] + N2[n2-1-i];
			}
			k3 = k1 + k2;
			if(M[n1-1] != 0){
				cout << M[n1-1] <<"x^"<< n1;
			}
			for(int i = 1; i < n1; i++)
			{
				if(M[n1-1-i] < 0){
					cout <<" "<< M[n1-1-i] <<"x^"<< n1-i;
				} else if(M[n1-1-i] > 0){
					cout <<" +"<< M[n1-1-i] <<"x^"<< n1-i;
				}
			}
			if(k3 > 0){
				cout <<" +"<< k3 <<"\n";
			} else if(k3 < 0){
				cout <<" "<< k3 <<"\n";
			}
		} else if(n1 < n2){
			int M[n2];
			//-----------------------------------------------------------------------------------------------//
			for(int i = 0; i < n2; i++)
			{
				if(n1-1-i == -1){
					while(i < n2)
					{
						M[i] = N2[n2-1-i];
						i++;
					}
					break;
				}
				M[i] = N1[n1-1-i] + N2[n2-1-i];
			}
			k3 = k1 + k2;
			if(M[n2-1] != 0){
				cout << M[n2-1] <<"x^"<< n2;
			}
			for(int i = 1; i < n2; i++)
			{
				if(M[n2-1-i] < 0){
					cout <<" "<< M[n2-1-i] <<"x^"<< n2-i;
				} else if(M[n2-1-i] > 0){
				cout <<" +"<< M[n2-1-i] <<"x^"<< n2-i;
				}
			}
			if(k3 > 0){
				cout <<" +"<< k3 <<"\n";
			} else if(k3 < 0){
				cout <<" "<< k3 <<"\n";
			}
		}
		cout<<endl;
	} else if(pil == 2){
		int k1, n1, k2, n2, k3;
	
		cout <<"Akan dicari hasil dari pengurangan dua polinomial \n\nMasukkan derajat polinomial pertama : ";
		cin >> n1; int N1[n1];
		for(int i = 0; i < n1; i++)
		{
			cout <<"Masukkan koefisien x^"<< n1-i <<" : "; cin >> N1[i];
		}
		cout <<"Masukkan konstanta polinomial pertama : "; cin >> k1; cout <<"\n";
	
		//-----------------------------------------------------------------------------------------------------//
	
		cout <<"Masukkan derajat polinomial kedua : ";
		cin >> n2; int N2[n2];
		for(int i = 0; i < n2; i++)
		{
			cout <<"Masukkan koefisien x^"<< n2-i <<" : "; cin >> N2[i];
		}
		cout <<"Masukkan konstanta polinomial kedua : "; cin >> k2; cout <<"\n";
	
		//-----------------------------------------------------------------------------------------------------//
	
		cout <<"Polinomial pertama yang anda masukkan :\n";
		if(N1[0] != 0){
			cout << N1[0] <<"x^"<< n1;
		}
		for(int i = 1; i < n1; i++)
		{
			if(N1[i] < 0){
				cout <<" "<< N1[i] <<"x^"<< n1-i;
			} else if(N1[i] > 0){
				cout <<" +"<< N1[i] <<"x^"<< n1-i;
			}
		}
		if(k1 > 0){
			cout <<" +"<< k1 <<"\n\n";
		} else if(k1 < 0){
			cout <<" "<< k1 <<"\n\n";
		}
	
		//----------------------------------------------------------------------------------------------------//
	
		cout <<"Polinomial kedua yang anda masukkan :\n";
		if(N2[0] != 0){
			cout << N2[0] <<"x^"<< n2;
		}
		for(int i = 1; i < n2; i++)
		{
			if(N2[i] < 0){
				cout <<" "<< N2[i] <<"x^"<< n2-i;
			} else if(N2[i] > 0){
				cout <<" +"<< N2[i] <<"x^"<< n2-i;
			}
		}
		if(k2 > 0){
			cout <<" +"<< k2 <<"\n\n";
		} else if(k2 < 0){
			cout <<" "<< k2 <<"\n\n";
		}
	
		//---------------------------------------------------------------------------------------------------//
	
		cout <<"Hasil dari pengurangan kedua polinomial adalah :\n";
		if(n1 >= n2){
			int M[n1];
			//-----------------------------------------------------------------------------------------------//
			for(int i = 0; i < n1; i++)
			{
				if(n2-1-i == -1){
					while(i < n1)
					{
						M[i] = N1[n1-1-i];
						i++;
					}
					break;
				}
				M[i] = N1[n1-1-i] - N2[n2-1-i];
			}
			k3 = k1 - k2;
			if(M[n1-1] != 0){
				cout << M[n1-1] <<"x^"<< n1;
			}
			for(int i = 1; i < n1; i++)
			{
				if(M[n1-1-i] < 0){
					cout <<" "<< M[n1-1-i] <<"x^"<< n1-i;
				} else if(M[n1-1-i] > 0){
				cout <<" +"<< M[n1-1-i] <<"x^"<< n1-i;
				}
			}
			if(k3 > 0){
				cout <<" +"<< k3 <<"\n";
			} else if(k3 < 0){
				cout <<" "<< k3 <<"\n";
			}
		} else if(n1 < n2){
			int M[n2];
			//-----------------------------------------------------------------------------------------------//
			for(int i = 0; i < n2; i++)
			{
				if(n1-1-i == -1){
					while(i < n2)
					{
						M[i] = -N2[n2-1-i];
						i++;
					}
					break;
				}
				M[i] = N1[n1-1-i] - N2[n2-1-i];
			}
			k3 = k1 - k2;
			if(M[n2-1] != 0){
				cout << M[n2-1] <<"x^"<< n2;
			}
			for(int i = 1; i < n2; i++)
			{
				if(M[n2-1-i] < 0){
					cout <<" "<< M[n2-1-i] <<"x^"<< n2-i;
				} else if(M[n2-1-i] > 0){
				cout <<" +"<< M[n2-1-i] <<"x^"<< n2-i;
				}
			}
			if(k3 > 0){
				cout <<" +"<< k3 <<"\n";
			} else if(k3 < 0){
				cout <<" "<< k3 <<"\n";
			}
		}
		cout<<endl;
	} else if(pil == 3){
		int n1, n2;
	
		cout <<"Akan dicari hasil dari perkalian dua polinomial \n\nMasukkan derajat polinomial pertama : ";
		cin >> n1; int N1[n1+1];
		for(int i = 0; i < n1; i++)
		{
			cout <<"Masukkan koefisien x^"<< n1-i <<" : "; cin >> N1[i];
		}
		cout <<"Masukkan konstanta polinomial pertama : "; cin >> N1[n1]; cout <<"\n";
	
		//-----------------------------------------------------------------------------------------------------//
	
		cout <<"Masukkan derajat polinomial kedua : ";
		cin >> n2; int N2[n2+1];
		for(int i = 0; i < n2; i++)
		{
			cout <<"Masukkan koefisien x^"<< n2-i <<" : "; cin >> N2[i];
		}
		cout <<"Masukkan konstanta polinomial kedua : "; cin >> N2[n2]; cout <<"\n";
	
		//-----------------------------------------------------------------------------------------------------//
	
		cout <<"Polinomial pertama yang anda masukkan :\n";
		if(N1[0] != 0){
			cout << N1[0] <<"x^"<< n1;
		}
		for(int i = 1; i < n1; i++)
		{
			if(N1[i] < 0){
				cout <<" "<< N1[i] <<"x^"<< n1-i;
			} else if(N1[i] > 0){
				cout <<" +"<< N1[i] <<"x^"<< n1-i;
			}
		}
		if(N1[n1] > 0){
			cout <<" +"<< N1[n1] <<"\n\n";
		} else if(N1[n1] < 0){
			cout <<" "<< N1[n1] <<"\n\n";
		}
	
		//----------------------------------------------------------------------------------------------------//
	
		cout <<"Polinomial kedua yang anda masukkan :\n";
		if(N2[0] != 0){
			cout << N2[0] <<"x^"<< n2;
		}
		for(int i = 1; i < n2; i++)
		{
			if(N2[i] < 0){
				cout <<" "<< N2[i] <<"x^"<< n2-i;
			} else if(N2[i] > 0){
				cout <<" +"<< N2[i] <<"x^"<< n2-i;
			}
		}
		if(N2[n2] > 0){
			cout <<" +"<< N2[n2] <<"\n\n";
		} else if(N2[n2] < 0){
			cout <<" "<< N2[n2] <<"\n\n";
		}
	
		//---------------------------------------------------------------------------------------------------//
	
		cout <<"Hasil dari perkalian kedua polinomial adalah :\n";
		int P1[n1+1], P2[n2+1];
		for(int i = n1; i >= 0; i--)
		{
			P1[i] = n1-i;
		}
		for(int i = n2; i >= 0; i--)
		{
			P2[i] = n2-i;
		}
	
		if(N1[0]*N2[0] != 0){
			cout << N1[0]*N2[0] <<"x^"<< P1[0]+P2[0];
		}
		for(int i = 1; i <= n2; i++)
		{
			if(N1[0]*N2[i] < 0){
				cout <<" "<< N1[0]*N2[i] <<"x^"<< P1[0]+P2[i];
			} else if(N1[0]*N2[i] > 0){
			cout <<" +"<< N1[0]*N2[i] <<"x^"<< P1[0]+P2[i];
			}
		}
	
		for(int i = 1; i < n1; i++)
		{
			for(int j = 0; j <= n2; j++)
			{
				if(N1[i]*N2[j] < 0){
					cout <<" "<< N1[i]*N2[j] <<"x^"<< P1[i]+P2[j];
				} else if(N1[i]*N2[j] > 0){
					cout <<" +"<< N1[i]*N2[j] <<"x^"<< P1[i]+P2[j];
				}
			}
		}
	
		for(int i = 0; i < n2; i++)
		{
			if(N1[n1]*N2[i] < 0){
				cout <<" "<< N1[n1]*N2[i] <<"x^"<< P1[n1]+P2[i];
			} else if(N1[n1]*N2[i] > 0){
				cout <<" +"<< N1[n1]*N2[i] <<"x^"<< P1[n1]+P2[i];
			}
		}
		if(N1[n1]*N2[n2] < 0){
			cout <<" "<< N1[n1]*N2[n2] <<"\n\n";
		} else if(N1[n1]*N2[n2] > 0){
			cout <<" +"<< N1[n1]*N2[n2] <<"\n\n";
		}

	} else if(pil == 4){
		int k, n;
	
		cout <<"Akan dicari turunan dari polinomial \nMasukkan derajat polinomial : ";
		cin >> n; int N[n]; cout <<"\n";
	
		for(int i = 0; i < n; i++)
		{
			cout <<"Masukkan koefisien x^"<< n-i <<" : "; cin >> N[i];
		}
		cout <<"Masukkan konstanta polinomial : "; cin >> k; cout <<"\n";
		cout <<"Polinomial yang anda masukkan :\n";
		if(N[0] != 0){
			cout << N[0] <<"x^"<< n;
		}
		for(int i = 1; i < n; i++)
		{
			if(N[i] < 0){
				cout <<" "<< N[i] <<"x^"<< n-i;
			} else if(N[i] > 0){
				cout <<" +"<< N[i] <<"x^"<< n-i;
			}
		}
		if(k > 0){
			cout <<" +"<< k <<"\n\n";
		} else if(k < 0){
			cout <<" "<< k <<"\n\n";
		}
		cout <<"Turunan dari polinomial yang anda masukkan :\n";
		cout << N[0]*n <<"x^"<< n-1;
		for(int i = 1; i < n-1; i++)
		{
			if(N[i] < 0){
				cout <<" "<< N[i]*(n-i) <<"x^"<< n-i-1;
			} else if(N[i] > 0){
				cout <<" +"<< N[i]*(n-i) <<"x^"<< n-i-1;
			}
		}
		if(N[n-1] < 0){
			cout <<" "<< N[n-1];
		} else if(N[n-1] > 0){
			cout <<" +"<< N[n-1];
		}
		cout <<endl<<endl;
	}
	
	cout<<"Apakah anda ingin melakukan penghitungan lagi? (Y/N): ";
	cin >>option;
	cout<<endl;
	if (option == 'Y' || option == 'y'){
		goto home;
	}
	
	
	return 0;
}
