#include<iostream>
//#include<stdio.h>
//#include<conio.h>
using namespace std;
int main()
{
	int banyak;
	char x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11;
    char nama[100];
    char umur[100];
    char nik[100];
    char alamat[100];
    char nomortelepon[100];
    {
    cout<<"\tSELAMAT DATANG DI PROGRAM PEMERIKSAAN GEJALA TERINFEKSI VIRUS CORONA "<<endl;
    cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"Berapa Jumlah Pasien :";
    cin>>banyak;
    for(int i = 1; i <= banyak; i++){
    	
    	cout<<"Pasien ke-" << i << endl;
    	
    	cout <<" Nama\t\t : ";
        cin.getline(nama, sizeof(nama));
        cout <<" Umur\t\t : ";
        cin.getline(umur, sizeof(umur));
        cout <<" NIK\t\t : ";
        cin.getline(nik, sizeof(nik));
        cout <<" Alamat\t\t : ";
        cin.getline(alamat, sizeof(alamat));
        cout <<" Nomor Telepon\t : ";
        cin.getline(nomortelepon, sizeof(nomortelepon));
        cout<<endl<<endl;
        
        
        cout << "Tulis Y/y jika pernyataan berikut benar, atau T/t jika salah" << endl;
			cout << "apakah" " " << nama << " " << "batuk kering?";
			cin >> x1;
			
			
			cout << "apakah" << " " << nama << " " << "batuk lendir?";
			cin >> x2;
		
			
			cout << "apakah" << " " << nama << " " << "bersin?";
			cin >> x3;
			
			
			cout << "apakah" << " " << nama << " " << "pilek?";
			cin >> x4;
			
			
			cout << "apakah" << " " << nama << " " << "sakit tubuh?";
			cin >> x5;
			
			cout << "apakah" << " " << nama << " " << "kelemahan otot?";
			cin >> x6;
			
			cout << "apakah" << " " << nama << " " << "demam ringan?";
			cin >> x7;
			
			cout << "apakah" << " " << nama << " " << "nyeri tubuh?";
			cin >> x8;
			
			cout << "apakah" << " " << nama << " " << "demam tinggi?";
			cin >> x9;
			
			cout << "apakah" << " " << nama << " " << "kesulitan bernapas?";
			cin >> x10;
			
			cout << "apakah" << " " << nama << " " << "kehilangan indra pengecap dan perasa?";
			cin >> x11;
			
			cout << endl;
			
			if (x1 == 'Y'|| x1 == 'y' && x3 == 'Y'|| x3 == 'y' ){
				
				cout << "Indikasi penyakit adalah dikarenakan" << " " << "Polusi Udara" << endl;
			}
			
			else if(x1 == 'Y'|| x1 == 'y' && x2 == 'Y'|| x2 == 'y' && x3 == 'Y'|| x3 == 'y' && x4 == 'Y'|| x4 == 'y' ){
				
				cout << "Indikasi penyakit adalah dikarenakan" << " " << "Pilek Biasa" << endl;
			}
			
			else if(x1 == 'Y'|| x1 == 'y' && x2 == 'Y'|| x2 == 'y' && x3 == 'Y'|| x3 == 'y' && x4 == 'Y'|| x4 == 'y' && x5 == 'Y'|| x5 == 'y' && x6 == 'Y'|| x6 == 'y' && x7 == 'Y'|| x7 == 'y' ){
				
				cout << "Indikasi penyakit adalah dikarenakan" << " " << "Sakit Flu" << endl;
			}
			
			else if(x1 == 'Y'|| x1 == 'y' && x3 == 'Y'|| x3 == 'y' && x8 == 'Y'|| x8 == 'y' && x6 == 'Y'|| x6 == 'y' && x9 == 'Y'|| x9 == 'y' && x10 == 'Y'|| x10 == 'y' && x11 == 'Y'|| x11 == 'y' ){
				
				cout << "Indikasi penyakit adalah dikarenakan" << " " << "Virus Corona" << endl;
			}
			cout << endl;
		}
		cout << endl;
}
        
        
       	}
    
    

