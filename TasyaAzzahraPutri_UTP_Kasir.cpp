#include <iostream>
using namespace std;

void depan(){
	cout<<"----------------------------------------------------"<<endl;
	cout<<"\t\tSURYA MINIMARKET"<<endl;
	cout<<"Jl.Gatot Subroto No.14, Labuhan Ratu, Bandar Lampung"<<endl;
	cout<<"----------------------------------------------------"<<endl;
} 

int main(){
	depan();
    int input;
    float harga[10], jumlah[10],totalharga=0,totaljumlah=0,totalbelanja=0,hasildiskon,diskon=0;
    string pilih,nama,barang[10];

    cout<<"Member atau non member <iya/tidak>: ";cin>>pilih;
    cout<<"--------------------------------------"<<endl<<endl;
    if(pilih=="iya"){
        cout<<"---------------Hallo Member-------------"<<endl;
        cout<<"Nama pembeli		: ";cin>>nama;
        cout<<"Jumlah jenis barang	: ";cin>>input;
            for(int i=0; i<input; i++){
                cout<<"--------------------------------------"<<endl;
                cout<<"Nama barang	: "; cin>>barang[i];
                cout<<"Harga		: "; cin>>harga[i];
                cout<<"jumlah		: "; cin>>jumlah[i];
                totalbelanja+=harga[i]*jumlah[i];
            }

                if(totalbelanja>=100000){
                    diskon=0.05*totalbelanja;
                    hasildiskon=totalbelanja-diskon;
                        cout<<"--------------Pembayaran-------------"<<endl;
                        cout<<"Jenis member	: iya"<<endl;
                        cout<<"Nama pelanggan	: "<<nama<<endl;
                        cout<<"Jumlah belanja	: "<<totalbelanja<<endl;
                        cout<<"Diskon (5%)	: "<<diskon<<endl;
                        cout<<"Total harga belanja sebelum diskon: "<<totalbelanja<<endl;
                        cout<<"Total harga belanja setelah diskon: "<<hasildiskon<<endl;
                        cout<<"--------------------------------------"<<endl;
                }else{
                        cout<<"--------------Pembayaran--------------"<<endl;
                        cout<<"Jenis member	: iya"<<endl;
                        cout<<"Nama pelanggan	: "<<nama<<endl;
                        cout<<"Diskon		: - "<<endl;
                        cout<<"Total belanja	: "<<totalbelanja<<endl;
                        cout<<"--------------------------------------"<<endl;
                }

    } else if (pilih=="tidak"){
        cout<<"---------------Non Member-------------"<<endl;
        cout<<"Nama pembeli		: ";cin>>nama;
        cout<<"Jumlah jenis barang	: ";cin>>input;
            for(int i=0; i<input; i++){
                cout<<"--------------------------------------"<<endl;
				cout<<"Nama barang	: "; cin>>barang[i];               
                cout<<"Harga		: "; cin>>harga[i];
                cout<<"jumlah		: "; cin>>jumlah[i];
                totalbelanja+=harga[i]*jumlah[i];
            }
                 cout<<"--------------Pembayaran--------------"<<endl;
                 cout<<"Jenis member	: Tidak"<<endl;
                 cout<<"Nama pelanggan	: "<<nama<<endl;
                 cout<<"Diskon		: - "<<endl;
                 cout<<"Total belanja	: "<<totalbelanja<<endl;
                 cout<<"--------------------------------------"<<endl;


    }else{
         cout<<"Data yang anda masukan salah"<<endl;
     }

}

//Kelompok 10, Kelas C
//Nama: Tasya Azzahra Putri
//NPM	: 2117051043
//	
//Nama: Muhamad Ramadhan Kamal
//NPM	: 2157051001
