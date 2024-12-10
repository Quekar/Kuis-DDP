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
    double r;
    double alas;
    double luas_alas;
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
        cout << "6. Limas Segitiga" << endl;
        cout << "7. Limas Segiempat" << endl;
        cout << "8. Prisma Segitiga" << endl;
        cout << "0. Keluar" << endl;

        cin >> pilih;
        cout << endl;
        cout << "-=============-" << endl;
        if(pilih==1){
            cout << "Kubus" << endl;
            cout << "Sisi : ";
            cin >> sisi;
            hasil = pow(sisi, 3);
            cout << "Volume : " << hasil;
        }
        else if(pilih==2){
            cout << "Balok" << endl;
            cout << "Panjang : ";
            cin >> panjang;
            cout << "Lebar : ";
            cin >> lebar;
            cout << "Tinggi : ";
            cin >> tinggi;
            hasil = panjang * lebar * tinggi;
            cout << "Volume : " << hasil;
        }
        else if(pilih==3){
            cout << "Bola" << endl;
            cout << "Jari-jari : ";
            cin >> r;
            hasil = (PI * pow(r, 3)) * 4 / 3;
            cout << "Volume : " << hasil;
        }
        else if(pilih==4){
            cout << "Tabung" << endl;
            cout << "Jari-jari : ";
            cin >> r;
            cout << "Tinggi : ";
            cin >> tinggi;
            hasil = PI * pow(r, 2) * tinggi;
            cout << "Volume : " << hasil;
        }
        else if(pilih==5){
            cout << "Kerucut" << endl;
            cout << "Jari- jari : ";
            cin >> r;
            cout << "Tinggi : ";
            cin >> tinggi;
            hasil = PI * pow(r, 2) * tinggi * 1 / 3;
            cout << "Volume : " << hasil;
        }
        else if(pilih==6){
            cout << "Limas Segitiga" << endl;
            cout << "Alas : ";
            cin >> alas;
            cout << "Tinggi : ";
            cin >> tinggi;
            hasil = (alas * tinggi / 2) * 1 / 3;
            cout << "Volume : " << hasil;
        }
        else if(pilih==7){
            cout << "Limas Segiempat" << endl;
            cout << "Luas Alas : ";
            cin >> luas alas;
            cout << "Tinggi : ";
            cin >> tinggi;
            hasil = luas_alas * tinggi * 1 / 3;
            cout << "Volume : " << hasil;
        }
        else if(pilih==8){
            cout << "Prisma Segitiga" << endl;
            cout << "Alas : ";
            cin >> alas;
            cout << "Tinggi : ";
            cin >> tinggi;
            hasil = alas * tinggi * 1 / 2;
            cout << Volume : " << hasil;
        }
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
