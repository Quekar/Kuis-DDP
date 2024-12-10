#include <cmath>
#include <iostream>
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
    
    cout << "Selamat Datang" << endl;
    do{
        cout << endl << endl << "pilih Bangun Ruang" << endl;
        cout << "1. Kubik"      << endl;
        cout << "2. apalah"     << endl;
        cout << "3. dst"        << endl;
        cout << "lanjut isi plis" << endl;
        cout << "0. Keluar" << endl;

        cin >> pilih;
        if(pilih==1){
            cout << "Sisi : ";
            cin >> sisi;
            hasil = pow(sisi, 3);
            cout << "hasil : " << hasil;
        }
    } while(pilih!=0);
    cout << endl << endl;
    cout << "Terimakasih";
}
