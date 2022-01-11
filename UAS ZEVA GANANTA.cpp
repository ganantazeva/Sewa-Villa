 /*
Nama        : Zeva Gananta Putra
Kelas       : 1B
Nim         : 2130511078
Matkul      : Dasar pemrograman
Program     : penyewaan villa
*/

#include <iostream>
using namespace std;
#define pembuka "=================VILLA UJANG======================="
#define penutup "Selamat menikmati Liburan Anda"

int main(){
    int pilihan, hargaVilla, hariSewa, totalBayar, hasil = 0;
    char pilihanVilla, yaTidak;
    string namaPenyewa, noHp, tanggal;
    
    int y = 0;
    int totalSewaan[y];
    
    cout << endl;
    cout << pembuka << endl;
    cout << endl;
    cout << "Masukan Nama Anda     : ";
    cin >> namaPenyewa;
    cout << "Masukan No Hp Anda    : ";
    cin >> noHp;
    cout << "Masukan Tanggal Sewa     : ";
    cin >> tanggal;
    cout << endl;
    cout << "===============================" << endl;
    cout << "|       Daerah Villa          |" << endl;
    cout << "===============================" << endl;
    cout << "| 1. Pantai Ujung Genteng     |" << endl;
    cout << "| 2. Pantai Geopark           |" << endl;
    cout << "===============================" << endl;;
    
    do
    {
         cout << "Pilih Daerah Villa : ";
         cin >> pilihan;    
         switch (pilihan)
         {   
                case 1:
                     cout << endl;
                     cout << "        Pantai Ujung Genteng          " << endl;
                     cout << "======================================" << endl;
                     cout << " 1. Satu Kamar : Rp.300.000,00        " << endl;
                     cout << " 2. Dua Kamar  : Rp.450.000,00        " << endl;
                     cout << " 3. Full House : Rp.700.000,00        " << endl;
                     cout << "--------------------------------------" << endl;
                     cout << "Pilih Kamar Yang Ingin Anda Sewa : ";
                     cin >> pilihanVilla;
                     
                     if (pilihanVilla == '1' || pilihanVilla == '1')
                     {
                        hargaVilla = 300000;
                        }
                     else if ( pilihanVilla == '2' || pilihanVilla == '2')
                        {
                        hargaVilla = 450000;
                        }
                     else if ( pilihanVilla == '3' || pilihanVilla == '3')
                       {
                        hargaVilla = 700000;
                        }
                     else 
                       {
                          cout << "Kamar Anda Tidak Tersedia" << endl;
                          }
                          
                          cout << "Berapa Hari Anda Ingin Sewa Villa : ";
                          cin >> hariSewa;
                     
                     totalSewaan[y] = hargaVilla * hariSewa;
                     
                     cout << endl << "Apakah Anda Ingin Sewa Villa Lainnya (Y/T) : ";
                     cin >> yaTidak;
                     
                     cout << endl;
                     break;
                case 2:
                     cout << endl;
                     cout << "           Pantai Geopark             " << endl;
                     cout << "======================================" << endl;
                     cout << " 1. Satu Kamar : Rp.350.000,00        " << endl;
                     cout << " 2. Dua Kamar  : Rp.450.000,00        " << endl;
                     cout << " 3. Full House : Rp.750.000,00        " << endl;
                     cout << "----------------------------------------" << endl;
                     cout << "Pilih Kamar Yang Ingin Anda Sewa : ";
                     cin >> pilihanVilla;
                     
                     if (pilihanVilla == '1' || pilihanVilla == '1')
                     {
                        hargaVilla = 350000;
                        }
                     else if ( pilihanVilla == '2' || pilihanVilla == '2')
                        {
                        hargaVilla = 450000;
                        }
                     else if ( pilihanVilla == '3' || pilihanVilla == '3')
                       {
                        hargaVilla = 750000;
                        }
                     else 
                       {
                          cout << "Kamar Anda Tidak Tersedia" << endl;
                          }
                          
                          cout << "Berapa Hari Anda Ingin Sewa Villa : ";
                          cin >> hariSewa;
                     
                     totalSewaan[y] = hargaVilla * hariSewa;
                     
                     cout << endl << "Apakah Anda Ingin Sewa Villa Lainnya (Y/T) : ";
                     cin >> yaTidak;
                     
                     cout << endl;
                     break;
                     }
                     y++;
                   } while (yaTidak == 'Y' || yaTidak == 'y');
                     
                cout << "|        PEMBAYARAN          |" << endl;
                cout << "==============================" << endl;
                
                for (int i = 0; i < y; i++)
                {
                    hasil = hasil + totalSewaan[i];
                    }
                
                cout << "| Nama Penyewa : " << namaPenyewa << endl;
                cout << "| No Handpone  : " << noHp << endl;
                cout << "| Tanggal Sewa : " << tanggal << endl;
                cout << "| Hari Sewa    : " << hariSewa << endl;
                cout << "==============================" << endl;
                cout << "Total Harga  : Rp. " << hasil << endl;
                cout << "Jumlah uang  : Rp. ";
                cin >> totalBayar;
                cout << "Kembalian    : Rp. " << totalBayar - hasil<< " " << endl;
                cout << "==============================" << endl;
                cout << "Pembayaran Berhasil, " << penutup << endl;
                
                return 0;
}
