#include <iostream>
using namespace std;

int fibonacci(int a, int b);

int main(){
	int a,b;
	a = 0;b=1;
	int hasil_akhir;
  	hasil_akhir = fibonacci(a,b);
   	cout << "Hasil: " << hasil_akhir << endl;
   	return 0;
}

int fibonacci(int a, int b){
    int c,d,hasil;
    cout << "Masukkan batas maksimal: ";
    cin >> c;
    for(int i =0;i<c;i++){
       d = a + b;
       a = b;
       b = d;
    }
    return hasil += d;
}
