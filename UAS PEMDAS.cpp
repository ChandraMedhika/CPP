#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

int sort[100], w, i, j;
struct{
    char kodbar[100];
    char nabar[100];
    char harbar[100];
}
tabel[6];
char b,x;
int a, n, s, kb, uang, p, nnt[50];
int jum_beli,bayar,diskon,jumlah[100]; 
string nama_barang[100];
string nama[50];
int harga[100];
int tot[100], subtot, ppn, gt;
char nn[10];
int angka=0;


void bubbleSort(int sort[], int w){
  int i, j, tmp;
  for (i = 0; i < n; i++){
    for (j = 0; j < n - i - 1; j++){
      if (sort[j] > sort[j + 1]){
        tmp = sort[j];
        sort[j] = sort[j + 1];
        sort[j + 1] = tmp;
      }
    }
  }
}

int Diskon(int z){
	if(z>5000000){
		return (z*30)/100;
	}else if(z>2000000){
		return (z*15)/100;
	}else{
		return 0;
	}
}
int Ppn(int x,int y){
	return (x-y)*0.1;
}
int Gt(int x, int y, int z){
	return x-y+z;
}
int main(){
    cout<<"__________________________________________"<<endl;
    cout<<"|        Salinan Barang Dan Harga        |"<<endl;
    cout<<"|________________________________________|"<<endl;
    cout<<"|Meja(87) dengan harga Rp1.500.000       |"<<endl;
    cout<<"|Kursi(76) dengan harga Rp300.000        |"<<endl;
    cout<<"|Lemari(98) dengan harga Rp2.500.000     |"<<endl;
    cout<<"|Rak(24) dengan harga Rp2.200.000        |"<<endl;
    cout<<"|Sofa(33) dengan harga Rp2.750.000       |"<<endl;
    cout<<"|Springbed(58) dengan harga Rp6.230.000  |"<<endl;
    cout<<"|________________________________________|"<<endl;
    cout<<endl<<endl;

    cout<<"*NB: Harap Isi Data Dari Salinan Ke Daftar Tabel\n"<<endl<<endl;
    
    cout<<"Ketik 'Y' untuk mengisi data ke daftar tabel : ";
    cin>>b;
    cout<<endl;
    b=(char)toupper(b);
    if(b=='Y'){
        cout<<"Input Jumlah Pencacatan Barang:";cin>>n;
        cout<<endl<<endl;
        for(a=0;a<n;a++){	
            cout<<"Input Kode Barang  :";
            cin>>tabel[a].kodbar;
            cout<<"Input Nama Barang  :";
            cin>>tabel[a].nabar;
            cout<<"Input Harga Barang :";
            cin>>tabel[a].harbar;
            cout<<endl<<endl;
        }
        
        cout<<"Cetak Daftar Tabel"<<endl;
        cout<<left<<"|"<<"  "<<"Kode barang"<<"  "<<setw(5)<<"|"<<setw(20)<<"Nama barang"<<setw(5)<<" |"<<setw(23)<<"Harga Barang"<<"  "<<"|"<<endl;
        for(a=0;a<n;a++){
        cout<<left<<"|"<<"\t"<<tabel[a].kodbar<<setw(10)<<"\t  |"<<setw(20)<<tabel[a].nabar<<setw(5)<<"|"<<setw(8)<<tabel[a].harbar<<setw(5)<<"\t  "<<"|"<<endl;
        }
    }else if(b=!'Y'){
        cout<<"404 input not found, please try again";
    }
    cout<<endl<<endl;
    cout<<"Masukan Jumlah Percetakan Struk :";
    cin>>p;
    for(int i=0;i<p;i++){
    cout<<"Masukan Nama Pembeli :";
    cin.ignore();
    getline(cin,nama[i]);
    cout<<"Nomor Nota Struk :";
    cin>>nnt[i];
    cout<<endl;
    cout<<"Masukan Jumlah Jenis Barang Yang Akan Dibeli: ";
    cin>>jum_beli;
    subtot=0;
        for(int i=0;i<jum_beli;i++){
            cout<<endl;
		    cout<<"Masukan Barang Ke-"<<i+1<<endl;
		    cout<<endl;

            cout<<"Nama Barang : ";
            cin>>nama_barang[i];
		
		    cout<<"Jumlah      : ";
		    cin>>jumlah[i]; 
		
		    cout<<"Harga       : ";
		    cin>>harga[i]; 

        
            tot[i]=jumlah[i]*harga[i];
            //sub_tot[i]=0;
		    //sub_tot[i]+=tot[i];
		    subtot=subtot+tot[i];
        }
        cout<<endl;
        back:
        cout<<"1. Cetak Struk"<<endl;
        cout<<"2. Inisialisai Kode Barang"<<endl;
        cout<<"3. Cek Harga Barang"<<endl;
        cout<<"4. Urutkan Kode Barang"<<endl;
        cout<<"Masukan Pilihan: ";cin>>x;
        cout<<endl;
        if(x=='1'){
        cout<<"Struk ke-"<<i<<endl;
        cout<<"No.nota :"<<" "<<nnt[i]<<endl;
        cout<<"Nama :"<<nama[i]<<endl;
	    cout<<"STRUK BELANJA TOKO SUMBER MAKMUR"<<endl;
	    cout<<"---------------------------------------------------------"<<endl;
	    cout<<"No   Barang    Jumlah     Harga       Total"<<endl;
	         for (int i=0;i<jum_beli;i++){
		           cout<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<tot[i]<<endl; //Menampilkan semua nilai array
	           }
	    cout<<"---------------------------------------------------------"<<endl;

	cout<<"Jumlah Bayar : Rp."<<tot[i]<<endl;
    cout<<"Subtotal      : Rp."<<subtot<<endl;
	cout<<"Diskon        : Rp."<<Diskon(subtot)<<endl;
    cout<<"PPN           : Rp."<<Ppn(subtot,Diskon(subtot))<<endl;
    cout<<"Grand Total   : Rp."<<Gt(subtot,Diskon(subtot),Ppn(subtot,Diskon(subtot)))<<endl; 
	cout<<"Total Bayar  : Rp."<<tot[i]-Diskon(subtot)<<endl;
	cout<<"Bayar        : Rp.";
	cin>>bayar; 
	cout<<"Kembali      : Rp."<<(bayar-(tot[i]-Diskon(subtot)))<<endl;
	cout<<"_____________________________________________________________"<<endl;
	cout<<"Terima Kasih Atas Kunjungan Anda                             "<<endl;
	cout<<"_____________________________________________________________"<<endl;
	cout<<endl<<endl;
	
	cout<<"Mencetak file..."<<endl<<endl;
	cout<<"Kembali ke menu utama?(tekan 3) atau Akhiri?(tekan 5) :";
        cin>>angka;
        cout<<endl<<endl<<endl;
        if (angka!=5)goto back;
	
	ofstream data_struk;
	data_struk.open("struk_belanja"+to_string(i)+".txt");
	data_struk<<"Struk ke-"<<i<<endl;
    data_struk<<"No.nota :"<<" "<<nnt[i]<<endl;
    data_struk<<"Nama :"<<nama[i]<<endl;
	data_struk<<"STRUK BELANJA TOKO SUMBER MAKMUR"<<endl;
	data_struk<<"---------------------------------------------------------"<<endl;
	data_struk<<"No   Barang    Jumlah     Harga       Total"<<endl;
	         for (int i=0;i<jum_beli;i++){
		           data_struk<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<tot[i]<<endl; //Menampilkan semua nilai array
	           }
	data_struk<<"---------------------------------------------------------"<<endl;
	
	data_struk<<"Jumlah Bayar : Rp."<<tot[i]<<endl;
    data_struk<<"Subtotal      : Rp."<<subtot<<endl;
	data_struk<<"Diskon        : Rp."<<Diskon(subtot)<<endl;
    data_struk<<"PPN           : Rp."<<Ppn(subtot,Diskon(subtot))<<endl;
    data_struk<<"Grand Total   : Rp."<<Gt(subtot,Diskon(subtot),Ppn(subtot,Diskon(subtot)))<<endl; 
	data_struk<<"Total Bayar  : Rp."<<tot[i]-diskon<<endl;
	data_struk<<"Bayar        : Rp."<<bayar<<endl;
	data_struk<<"Kembali      : Rp."<<(bayar-(tot[i]-diskon))<<endl;
	data_struk<<"_________________________________________________________"<<endl;
	data_struk<<"Terima Kasih Atas Kunjungan Anda                         "<<endl;
	data_struk<<"_________________________________________________________"<<endl;
	data_struk<<endl<<endl;
	    

    }else if(x=='2'){
    	cout<<"Masukan kode barang :";cin>>kb;
    	switch(kb){
    		case 87:
    		cout<<"Kode ini untuk Meja"<<endl<<endl;
    		break;
    		
    		case 76:
    		cout<<"Kode ini untuk Kursi"<<endl<<endl;
    		break;
    		
    		case 98:
    		cout<<"Kode ini untuk Lemari"<<endl<<endl;
    		break;
    		
    		case 24:
    		cout<<"Kode ini untuk Rak"<<endl<<endl;
    		break;
    		
    		case 33:
    		cout<<"Kode ini untuk Sofa"<<endl<<endl;
    		break;
    		
    		case 58:
    		cout<<"Kode ini untuk Springbed"<<endl<<endl;
    		break;
    		
    		default:
    		cout<<"Kode tidak ditemukan"<<endl<<endl;
		}
        cout<<"Kembali ke menu utama?(tekan 3) atau Akhiri?(tekan 5) :";
        cin>>angka;
        cout<<endl<<endl<<endl;
        if (angka!=5)goto back;
	}else if(x=='3'){
		cout<<"Masukan kode barang :";cin>>kb;
		switch(kb){
    		case 87:
    		uang=1500000;
    		cout<<"Kode ini untuk Meja dengan harga"<<" "<<"Rp."<<uang<<endl<<endl;
    		break;
    		
    		case 76:
    		uang=300000;
    		cout<<"Kode ini untuk Kursi dengan harga"<<" "<<"Rp."<<uang<<endl<<endl;
    		break;
    		
    		case 98:
    		uang=2500000;
    		cout<<"Kode ini untuk Lemari dengan harga"<<" "<<"Rp."<<uang<<endl<<endl;
    		break;
    		
    		case 24:
    		uang=2200000;
    		cout<<"Kode ini untuk Rak dengan harga"<<" "<<"Rp."<<uang<<endl<<endl;
    		break;
    		
    		case 33:
    		uang=2750000;
    		cout<<"Kode ini untuk Sofa dengan harga"<<" "<<"Rp."<<uang<<endl<<endl;
    		break;
    		
    		case 58:
    		uang=6230000;
    		cout<<"Kode ini untuk Springbed dengan harga"<<" "<<"Rp."<<uang<<endl<<endl;
    		break;
    		
    		default:
    		cout<<"Kode tidak ditemukan";
		}
        cout<<"Kembali ke menu utama?(tekan 3) atau Akhiri?(tekan 5) :";
        cin>>angka;
        cout<<endl<<endl<<endl;
        if (angka!=5)goto back;
	}else if(x=='4'){
          cout << "Masukkan banyak harga: ";
          cin >> w;
          cout << "Masukkan harga: \n";
          for (i = 0; i < w; i++){
          cin >> sort[i];
           }
          bubbleSort(sort, w);
          cout << "Hasil pengurutan harga dari yang termurah sampai yang termahal adalah sebagai berikut:\n";
          for (i = 0; i < w; i++){
          cout << sort[i] << " ";
         }
         cout<<endl;
         cout<<sort[1]<<" "<<"adalah nominal harga termurah"<<endl;
         
         cout << "\n";

         
         cout<<"Kembali ke menu utama?(tekan 3) atau Akhiri?(tekan 5) :";
         cin>>angka;
         cout<<endl<<endl<<endl;
         if (angka!=5)goto back;
       }

 }
  //return 0;
    getch();
}