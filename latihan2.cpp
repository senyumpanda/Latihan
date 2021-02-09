#include <iostream>
using namespace std;

int faktorial(int a);

int main(){
    int a,hasil_akhir;
    cout << "Masukkan angka: ";
    cin >> a;
    hasil_akhir = faktorial(a);
    cout << "Hasil: " << hasil_akhir << endl;
    return 0;
}

int faktorial(int a){
    int hasil=1;
    for(int i = 0;i<a;i){
        hasil *= a;
        a -= 1;
    }
    return hasil;
}
