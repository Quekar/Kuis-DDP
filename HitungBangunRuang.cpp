#include <cmath>
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    int pilih;
    double PI=3.14;
    double sisi;
    double panjang;
    double lebar;
    double tinggi;
    double diameter;
    double hasil;
    
        system("Cls");
        cout << "-============-" << endl;
        cout << "Selamat Datang" << endl;
        cout << "-============-" << endl;
        Sleep(3000);
    do{
        cout << endl << endl << "Pilih Bangun Ruang" << endl;
        cout <<                 "------------------" << endl;
        cout << "1. Kubus" << endl;
        cout << "2. Balok" << endl;
        cout << "3. Bola" << endl;
        cout << "4. Tabung" << endl;
        cout << "5. Kerucut" << endl;
        cout << "6. Limas" << endl;
        cout << "7. Segitiga" << endl;
        cout << "0. Keluar" << endl;

        cin >> pilih;
        if(pilih==1){
            cout << "Sisi : ";
            cin >> sisi;
            hasil = pow(sisi, 3);
            cout << "Volume : " << hasil;
        }
        else if(pilih==2){
            cout << "Panjang : ";
            cin >> panjang;
            cout << "Lebar : ";
            cin >> lebar;
            cout << "Tinggi : ";
            cin >> tinggi;
            hasil=panjang*lebar*tinggi;
            cout << "Volume : " << hasil;
        }
        else if(pilih==3){
            cout << "
        else {
            pilih=0;
            }
    } while(pilih!=0);
    system("Cls");
    cout << endl << endl;
    cout << "###########" << endl;
    cout << "Terimakasih" << endl;
    cout << "###########" << endl;
}
