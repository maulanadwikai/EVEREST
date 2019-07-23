#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

//tipe data
struct data {
    char nama[100],alamat[100],jenis_kelamin[1];
    string id,no_telp;
    }bio;
    string tipe_kamar []={"Tipe Standar","Tipe Deluxe ","Tipe Premium"};
    string fasilitas []={"1. AC \n\t 2. Lemari Pakaian", "3. Televisi \n\t 4. Kulkas", "5. Wi-Fi area"};
    string jumlah_ranjang []={" Single Bad", " Double Bad", " Triple Bad"};
    int harga_kamar[3]={250000, 1500000, 2000000};
	int harga_ranjang[3]={0, 100000, 150000};
    int n,ranjang,jumlah_harga, checkin,checkout,lama, total_harga,awal,waktu,random;;
    string username,password,konfir,pastikan,kembali,user,pass,salah;


//HEADER
void garis(){
    cout <<"\t#=====================================================#"<<endl;
}
void header(){
    system("color 1a");
    cout <<setw(40)<<"EVEREST APP"<<setw(23)<<endl;
    cout <<setw(41)<<"\tAplikasi Reservasi Hotel"<<setw(18)<<endl;
    cout<<endl;
}
void header2(){
cout <<"\n\n\n\n";
    header();
    cout <<"\t\t  Tekan Enter Untuk Masuk ke Aplikasi ";
    getch();}

//PROSES
void biodata(){
    header();
     garis();{
    cout<<"\t#    "<<"Silahkan Isi Form Sesuai Kartu Identitas Anda"<<"    #"<<endl;
    garis();
    cout<<endl;
    cin.get();
    cout<<"\t Nama Pemesan\t\t: ";
    cin.getline(bio.nama, sizeof(bio.nama));
    cout<<endl;
    cout<<"\t ID Pemesan\t\t: ";cin>>bio.id;cout<<endl;
    cout<<"\t Jenis Kelamin [L/P]\t: ";cin>>bio.jenis_kelamin;cout<<endl;
    cout<<"\t Nomor Telp/HP\t\t: ";cin>>bio.no_telp;cout<<endl;
    cin.get();
    cout<<"\t Alamat\t\t\t: ";cin.getline(bio.alamat, sizeof (bio.alamat));cout<<endl;
    cout <<"\t Pastikan Data Anda Sudah Benar [Y/T] ";
    cin >>pastikan;
        if (pastikan=="T" || pastikan=="t"){
            system("cls");
            biodata();
}
     }
}

void cek (){
    header();
    garis();
    cout<<"\t#"<<setw(35)<<"Daftar Tipe Kamar"<<setw(19)<<"#"<<endl;
    garis();
    cout<<endl;
    cout <<"\t 1. tipe Standart"<<endl;
    cout <<"\t 2. tipe Deluxe"<<endl;
    cout <<"\t 3. tipe premium"<<endl;
    cout<<"\n\t Pilih Tipe Kamar : ";
    cin>>n;
    cout<<endl;
    garis();
    cout<<"\t#"<<"  Silahkan Pilih jumlah ranjang yang anda inginkan"<<"   #"<<endl;
    garis();
    cout<<endl;
    cout <<"\t 1. Single "<<endl;
    cout <<"\t 2. Double "<<endl;
    cout <<"\t 3. Triple "<<endl;
    cout<<endl;
    garis();
    cout<<"\n\t Masukkan Pilihan : ";
    cin>>ranjang;
    cout<<endl;
    system("cls");
    header();
        garis();
    cout <<"\t#"<<"     Anda Memilih Kamar "<<tipe_kamar[n-1]<<jumlah_ranjang[ranjang-1]<<"      #"<<endl;
    garis();
    cout<<endl;
    cout<<"\t Fasilitas kamar "<<tipe_kamar[n-1]<<setw(12)<<":"<<endl;
    cout <<"\t ------------------------------------------------------"<<endl;
        for (int a=0; a<n; a++)
        cout <<"\t "<<fasilitas[a]<<endl;
        cout<<endl;
         cout <<"\t Harga Kamar per Malam\t\t\t: "<<harga_kamar[n-1]<<endl;
         cout <<"\t Harga Ranjang \t\t\t\t: "<<harga_ranjang[ranjang-1]<<endl;

}

void kamar(){
    cout<<random<<" ";
}

void pilihan(){
cout <<"\n\n1. Cek Kamar"<<"\t2. Menu Utama"<<endl;
            cout<<" "<<endl;
            cin >>kembali;
            }

void buat_akun(){
    header();
    cout <<"\t\t======================================="<<endl;
    cout<<"\t\t\t       Buat Akun"<<endl;
    cout <<"\t\t======================================="<<endl;
    cout <<"\n\t        Username\t\t: ";
    cin >>username;
    cout <<"\n\t        Password\t\t: ";
    cin >>password;
    do {
        cout <<"\n\t\tKonfirmasi Password\t: ";
        cin >>konfir;
            if(konfir!=password){
                cout << "\n\t\tMasukan Ulang Password Anda : " <<endl;
        }
    }while (konfir != password);
}

//output
void printout(){
    int waktu,random;
    header();
    cout<<endl;
    cout <<"\t Nama Pemesan\t\t\t: "<<bio.nama<<endl;
    cout <<"\t ID Pemesan\t\t\t: "<<bio.id<<endl;
    cout <<"\t Jenis Kelamin [L/P]\t\t: "<<bio.jenis_kelamin<<endl;
    cout <<"\t Nomor Telp/HP\t\t\t: "<<bio.no_telp<<endl;
    cout <<"\t Alamat\t\t\t\t: "<<bio.alamat<<endl;
    cout <<"\t Tipe Kamar\t\t\t: "<<tipe_kamar[n-1]<<"/"<<jumlah_ranjang[ranjang-1]<<endl;
        srand(time(0));
        waktu=(n+ranjang)*100;
        random=rand()%waktu;
    cout <<"\t No. Kamar\t\t\t: "<<random<<endl;
    cout <<"\t Tanggal Check In [DDMMYY]\t: "<<checkin<<endl;
    cout <<"\t Tanggal Check Out [DDMMYY]\t: "<<checkout<<endl;
    cout <<"\t Lama Menginap\t\t\t: "<<lama<<endl;
    cout <<"\t Harga Kamar Per malam\t\t: "<<harga_kamar[n-1]<<endl;
    cout <<"\t Harga Ranjang \t\t\t: "<<harga_ranjang[ranjang-1]<<endl;
     jumlah_harga=harga_kamar[n-1]*lama;
     total_harga=jumlah_harga+harga_ranjang[ranjang-1];
    cout <<"\t---------------------------------------------------------"<<endl;
    cout <<endl;
    cout <<"\t Total Harga\t\t\t: "<<total_harga<<endl;
    cout << endl;
    cout <<"\t====== Terima Kasih Telah Menginap di Everest Hotel ======"<<endl;
    }

//program utama
main(){
    string akun;
    header2();
    system("cls");

    header();

ulang:
    cout<<"\n\t\t       Masuk / Buat Akun [M/B] : ";
    cin>>akun;
    if (akun=="B" || akun=="b"){
            system("cls");
             buat_akun();
             system("cls");
    }else if (akun=="M" || akun=="m"){
        system("cls");

        }
        else {
            system("cls");
            header();
            cout <<"\n\t\t\tUlangi Perintah Anda";
            goto ulang;
        }

   int i;
   string user,pass,salah;
   int login=0;
   i = 1;

log_in :
   header();
    cout<<"\t\t\t      Masuk Akun"<<endl;
   do {
       cout <<"\n\t         Username\t\t: ";
       cin >> user;
       cout <<"\n\t         Password\t\t: ";
       cin >> pass;
       if (user==username && pass == password) {
            system("cls");
           goto home;
           i=4;
           login=1;
           }
       else {
            system("cls");
             header();
            cout <<"\t\t======================================="<<endl;
            cout<<"\t\t     Username & Password Anda Salah"<<endl;
            cout <<"\t\t======================================="<<endl;
           i = i +1;
       }
    }while (i <= 3);
    system("cls");
    if(login != 1){
        header();
       cout<<"\t Anda Telah 3x Memasukan USERNAME & PASSWORD Yang Salah\n";
       cout << "\t\t\tBuat Akun [Y/T] : ";
       cin >>salah;
       system("cls");
       if (salah=="Y" || salah=="y"){
        buat_akun();
        system("cls");
        goto home;
       }
       else if(salah=="T" || salah=="t"){
           header2();
           getch();
           goto ulang;
       }

home:
    int perintah;
    string logout;
    header();
    garis();
    cout<<"\t#"<<setw(31)<<"Menu Utama"<<setw(23)<<"#"<<endl;
    garis();
    cout <<"\t 1. Cek Tipe, Fasilitas & Harga kamar"<<endl;
    cout <<"\t 2. Pesan Kamar"<<endl;
    cout <<"\n\t Masukan Perintah Anda : ";
    cin >>perintah;
    system("cls");
        if (perintah==2){
            biodata();
            system("cls");
        }

        else if (perintah==1){
            cek();
            pilihan();
            if (kembali=="1"){
                system("cls");
                cek();
                pilihan();
            }
            system("cls");
            goto home;
    }
            else {
            cout <<"Ulangi Perintah Anda";
            getch();
            system("cls");
            goto home;
        }
    cek();
    cout <<"\t--------------------------------------------------------"<<endl;
    cout <<"\t Total\t\t\t\t\t: "<<harga_kamar[n-1]+harga_ranjang[ranjang-1]<<endl;
    cout <<endl;
    cout <<"\t Lama Menginap\t\t\t\t: ";
    cin >>lama;
    cout <<"\n\t Tanggal Check In [DDMMYY]\t\t: ";
    cin >>checkin;
    cout <<"\n\t Tanggal Check Out [DDMMYY]\t\t: ";
    cin >>checkout;
        system("cls");
        printout();
         cout <<"\t Tunjukan Hasil Print Out Kepada Resepsionis"<<endl;
        cout <<"\n\nlog out [Y/T] : ";
        cin >>logout;
        system("cls");
        if (logout=="Y" || logout=="y"){
            system("cls");
            header2();
            getch();
            system("cls");
            header();
            goto ulang;
            system("cls");
        }
        else {
            goto home;

        }

}
}


