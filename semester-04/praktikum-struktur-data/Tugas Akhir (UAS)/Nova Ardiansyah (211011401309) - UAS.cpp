#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void delay(void) {
	int delay;
	delay = 1;
	while(delay<50000000)	{	
		delay++;
	}
}

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

// * Clear halaman kiri
void clear_kiri() {
	int i, n = 22;
	for(i=8; i < n; i++)
	{
		gotoxy(4,i);
		cout<<"                                  ";
	}
	gotoxy(44,10);
}

// * Clear halaman kanan
void clear_kanan() {
	int i, n = 22;
	for(i=8; i < n; i++)
	{
		gotoxy(42,i);
		cout<<"                                                          ";
	}
	gotoxy(44,10);
}

struct nasabah
{
	char nama[50];
	char alamat[30];
	long int norek;
	double saldo;
};
	
void ATM()
{
	    int n=0;
	    nasabah nas[50];
	    int i,pil,x,pos;
	    long int no;
	    double setor,tarik;
	    bool ketemu=false;

	    menu:
	    	
		clear_kiri();
	    gotoxy(12,8);
	    cout<<"Menu Transaksi";
	    gotoxy(5,10);
	    cout<<"1. Pendaftaran Nasabah";
	    gotoxy(5,12);
	    cout<<"2. Menabung";
	    gotoxy(5,14);
	    cout<<"3. Penarikan";
	    gotoxy(5,16);
	    cout<<"4. Cetak Daftar Nasabah";
	    gotoxy(5,18);
	    cout<<"5. Cari Nasabah";
	    gotoxy(5,20);
	    cout<<"6. Keluar";
	    
	    gotoxy(44,9);
	    cout<<"Pilihan Anda : "; cin>>pil;
	    clear_kanan();
	    if(pil==1)
	    {
	        lagi:
	        cout<<endl;
	        gotoxy(44,9);
	        cout<<"Masukan Nomer Rekening : "; cin>>no;
	        for(i=0; i<n; i++)
	            {
	                if(no==nas[i].norek)
	                ketemu=true;
	            else
	            ketemu=false;
	            }
	        if(ketemu)
	            {
	            	gotoxy(44,11);
	                cout<<"Nomer Rekening Tersebut Sudah Ada, Ulangi Lagi";
					getch();
			        clear_kanan();
	            	goto lagi;
	            }
	        else
	            {
	            	gotoxy(44,11);
	                cout<<"Masukan Nama Anda      : "; cin>>nas[n].nama;
	                gotoxy(44,13);
	                cout<<"Masukan Saldo Awal     : Rp."; cin>>nas[n].saldo;
	            }
	        n=n+1;
	        nas[i].norek=no;
	    	gotoxy(44,15);
	        cout<<"Rekening berhasil dibuat!  "; 
	        getch();
	        clear_kanan();
	        goto menu;
        }
        else if(pil==2)
        {
            gotoxy(44,9);
            cout<<" Masukan Nomer Rekening  : "; cin>>no;
            for(i=0; i<n; i++)
            {
                if(no==(nas[i].norek))
                    {
                        pos=i;
                        ketemu=true;
                        break;
                    }
                else
                ketemu=false;
            }
            if(ketemu)
                {
                	gotoxy(44,11);
                    cout<<"Masukan Nominal Setoran : Rp."; cin>>setor;
                    nas[pos].saldo=nas[pos].saldo+setor;
                    gotoxy(44,13);
                    cout<<"Setoran Behasil";
                    gotoxy(44,15);
                    cout<<"Jumlah Saldo Anda       : Rp."<<nas[pos].saldo;
                }
            else
            {
	            gotoxy(44,11);
	            cout<<"Nomer Rekening Tidak Ditemukan";  	
			}
            getch();
	        clear_kanan();
            goto menu;
        }
        else if(pil==3)
        {
            gotoxy(44,9);
            cout<<"Masukan Nomer Rekening   : "; cin>>no;
            for(i=0; i<n; i++)
                {
                    if(no==(nas[i].norek))
                        {
                            pos=i;
                            ketemu=true;
                            break;
                        }
                    else
                    ketemu=false;
                }
            if(ketemu)
                {
                	gotoxy(44,11);
                    cout<<"Masukan Jumlah Penarikan : Rp."; cin>>tarik;
                    if(tarik<(nas[pos].saldo))
                        {
                            nas[pos].saldo=nas[pos].saldo-tarik;
                            gotoxy(44,13);
                            cout<<"Penarikan Berhasil";
                            gotoxy(44,15);
                            cout<<"Sisa Saldo Anda          : Rp."<<nas[pos].saldo;
                        }
                    else
					{
                    	gotoxy(44,13);
                        cout<<"Maaf Saldo Anda Tidak Mencukupi";
                    }
                }
            else
			{
            	gotoxy(44,9);
            	cout<<"Nomer Rekening Tidak Ditemukan";
        	}
        	getch();
	        clear_kanan();
            goto menu;
        }	
        else if(pil==4)
        {
        	gotoxy(60,8);
            cout<<"DAFTAR NASABAH BANK";
            gotoxy(42,10);
			cout<<"|====|=================|==============|=================|"<<endl;
			gotoxy(42,11);
			cout<<"| No |   No Rekening   |     Nama     |   Total Saldo   |"<<endl;
			gotoxy(42,12);
			cout<<"|====|=================|==============|=================|"<<endl;
	        for(i=0; i<n; i++)
            {
            	gotoxy(44,13 + i);
                cout<<i+1;;
                gotoxy(50,13 + i);
                cout<<nas[i].norek;
                gotoxy(68,13 + i);
                cout<<nas[i].nama;
                gotoxy(84,13 + i);
                cout<<((nas[i].saldo)+(nas[i].saldo*0.1));
            }
	        gotoxy(42,20);
			cout<<"|====|=================|==============|=================|";
		    gotoxy(44,21);
		    cout<<"Jumlah Total Saldo Diatas Setelah Ditambah Bunga 10%";
		    getch();
		    clear_kanan();
		    goto menu;
	    }
	    else if(pil==5)
	    {
		    gotoxy(44,9);
		    cout<<"Masukan Nomer Rekening Yang Akan Dicari : "; cin>>no;
	        for(i=0; i<n; i++)
            {
                if(no==(nas[i].norek))
                    {
                        pos=i;
                        ketemu=true;
                        break;
                	}
            	else
                    ketemu=false;
            }
	        if(ketemu)
        	{
        		gotoxy(44,11);
                cout<<"Nomer Rekening             : "<<nas[pos].norek<<endl;
                gotoxy(44,12);
                cout<<"Nama Nasabah               : "<<nas[pos].nama<<endl;
                gotoxy(44,13);
                cout<<"Saldo                      : Rp."<<nas[pos].saldo<<endl;
                gotoxy(44,14);
                cout<<"Total  Saldo Setelah Bunga : Rp."<<((nas[i].saldo)+(nas[i].saldo*0.1))<<endl<<endl;
            }
	        else
	        {
	        	gotoxy(44,11);
	            cout<<"Nomer Rekening Tidak Ditemukan";
			}
	        getch();
	        clear_kanan();
			goto menu;
		}
	    else
        {
        	gotoxy(44,9);
            cout<<"Terima Kasih Telah Bertransaksi Disini......";
            getch();
            clear_kanan();
        }
	
}

//Aplikasi Sorting
void sorting(){	
	int i, j, k, N;
	
	gotoxy(63,8);
	cout<<"Aplikasi Sorting";
	
	int Nilai[N];
	int temp;
	bool tukar;
	
	gotoxy(44,10);
	cout << "Masukkan banyak data : ";
	cin >> N;
	
	for (i = 0; i < N; i++) {
		gotoxy(44,12);
		cout << "Masukkan data ke - " << i + 1 << " : ";
		cin >> Nilai[i];
	 	if(i != N-1) {
			gotoxy(44,12);
			cout<<"                          ";
		}
	}
	
	gotoxy(44,14);
	cout << "Data sebelum diurutkan : ";
	for (i = 0; i < N; i++)
	{
	cout << Nilai[i] << " ";
	}
	
	i = 0;
	for (j = N -1; j >= 0; j--)
	{
	tukar = false;
	for (k = 0; k < j; k++) {
	  if (Nilai[k] > Nilai[k + 1]) {
	    temp = Nilai[k];
	    Nilai[k] = Nilai[k + 1];
	    Nilai[k + 1] = temp;
	    tukar = true;
	  }
	}
	
	if (tukar == false) {
	  break;
	}
	
	cout << endl;
	i++;
	}
	
	gotoxy(44,15);
	cout << "Data setelah diurutkan : ";
	for (i = 0; i < N; i++)
	{
	cout << Nilai[i] << " ";
	}

  getch();
}

void searching()
{
  int Nilai[15];
  int i, N, angka, Bilangan;
  gotoxy(63,8);
  cout<<"Aplikasi Searching";
  gotoxy(44,10);
  cout << "Masukkan banyaknya data : ";
  cin >> N;
  
  for (i = 0; i < N; i++) {
  	gotoxy(44,12);
    cout << "Masukkan data ke-" << i + 1 << " : ";
    cin >> Nilai[i];
    if(i != N-1) {
		gotoxy(44,12);
		cout<<"                          ";
	}
  }
  
  gotoxy(44,14);
  cout << "Data yang telah dimasukkan adalah : ";
  for (i = 0; i < N; i++) {
    cout << Nilai[i] << " ";
  }
  
  gotoxy(44,16);
  cout << "Masukkan nilai yang akan dicari : ";
  cin >> Bilangan;

  i = 0;
  do {
    if (Nilai[i] == Bilangan) angka = i;
    i++;
  } while (i < N);
  
  gotoxy(44,18);
  if (Nilai[angka] == Bilangan) {
    cout << "Data ditemukan pada indeks ke - " << angka << endl;
  } else {
    cout << "Data tidak ditemukan" << endl;
  }

}

void calculator()
{
	string play_again = "Y";
	do {
			int bil1,bil2, pil;
			float hasil;
			string operasi;
			string ulang = "y";
			clear_kiri();
			gotoxy(10,8);
			cout<<"PILIH OPERATOR ARITMATIKA"<<endl;
			gotoxy(5,10);
			cout<<"1. Penjumlahan"<<endl;
			gotoxy(5,12);
			cout<<"2. Pengurangan"<<endl;
			gotoxy(5,14);
			cout<<"3. Perkalian"<<endl;
			gotoxy(5,16);
			cout<<"4. Pembagian"<<endl;
			gotoxy(5,18);
			cout<<"5. Modulus"<<endl;
			cout<<endl;
			gotoxy(44,9);
			cout<<"Masukan Pilihan : ";
			cin>>pil;
			gotoxy(44,11);
			cout<<"Masukan Bilangan pertama : ";
			cin>>bil1;
			gotoxy(44,13);
			cout<<"Masukan Bilangan kedua : ";
			cin>>bil2;	
				switch(pil){
				    case 1 : hasil=bil1+bil2;
						operasi='+';
						break;
					case 2 : hasil=bil1-bil2;
						operasi='-';
						break;
					case 3 : hasil=bil1*bil2;
						operasi='*';
						break;
					case 4 : hasil=bil1/bil2;
						operasi='/';
						break;
					case 5 : hasil=bil1%bil2;
						 operasi='%';
						break;
					default :
						gotoxy(44,15);
						cout<<"Angka yang anda masukan salah"<<endl;
				}
				gotoxy(44,16);
				cout<<"-----------------------------"<<endl;
				gotoxy(44,17);
				cout<<"    "<<bil1<<" "<<operasi<<" "<<bil2<<" = "<<" "<<hasil<<endl;
				gotoxy(44,18);
				cout<<"-----------------------------"<<endl;
		gotoxy(44,20);
	  cout << "Apakah anda ingin memulai ulang? [Y/N] : ";
	  cin>>play_again;
	  clear_kanan();
	}
	while(play_again=="y");
}

int main()
{
	atas :

	system("color B");
	system("cls");
	int i,j,pilih;
	char ulang = 'y';
	
	gotoxy(43,12);
	cout<<"\tLoading ....\n";
	 char a=177, b=219;
	 cout<<"\t\t\t\t\t\t";
	 for (int i=0;i<=15;i++)
	 cout<<a;
	 cout<<"\r";
	 cout<<"\t\t\t\t\t\t";
	 for (int i=0;i<=15;i++)
	 {
	  cout<<b;
	  for (int j=0;j<=1e8;j++); // * Sleep
	 }
	
	
	do {
		system("cls");
		
		// * Line Atas
		for(i=2; i<= 100; i++){
			gotoxy(i,2);
			printf("=");
			gotoxy(i,5);
			printf("=");
			gotoxy(i,7);
			printf("=");
			gotoxy(i,22);
			printf("=");
			gotoxy(i,25);
			printf("=");
			gotoxy(i,27);
			printf("=");
		}
		
		// * Line kanan-kiri
		for(i=2; i<=27; i++){
			gotoxy(2,i);
			printf("|");
			gotoxy(100,i);
			printf("|");
		}
		
		// * Line Tengah
		for(i=7; i <=  22; i++){
			gotoxy(40,i);
			printf("|");
		}
		
		gotoxy(40,3);
		cout<<"Nama\t: Nova Ardiansyah";
		gotoxy(40,4);
		cout<<"NIM\t: 211011401309";
		gotoxy(43,6);
		cout<<"APLIKASI UAS";
		gotoxy(35,26);
		cout<<"=== Create By @Nova Ardiansyah ===";
		
		// * Menu Kiri
		gotoxy(16,8);
		cout<<"Menu Utama";
		gotoxy(5,10);
		cout<<"1. Aplikasi Sorting";	
		gotoxy(5,12);
		cout<<"2. Aplikasi Searching";
		gotoxy(5,14);
		cout<<"3. Aplikasi Mesin ATM";
		gotoxy(5,16);
		cout<<"4. Aplikasi Kalkulator";
		gotoxy(5,18);
		cout<<"5. Exit";
		gotoxy(5,20);
		cout<<"Sebutkan Pilihan Anda : ";
		cin>>pilih;	
		
		switch(pilih)
		{
			case 1:
				sorting();
				break;
			case 2:
				searching();
				break;
			case 3:
				ATM();
				clear_kiri();
				break;
			case 4:
				calculator();
				break;
			case 5:
				gotoxy(1,29);
				exit(0);
				break;
			default:
				gotoxy(55,8);
				cout<<"Maaf, anda salah pilih kode .. !!";
				break;
		}
		
		gotoxy(48,23);
		cout<<"Mau lanjut aplikasi atau tidak [Y/N] : ";
		cin>>ulang;
	
	} while (ulang == 'y');
	
	gotoxy(1,29);
	exit(0);
	return 0;
}
