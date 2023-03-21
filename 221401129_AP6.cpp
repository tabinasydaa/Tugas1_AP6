#include <iostream>

using namespace std;

int main (){
	
	int a;
	int b;
	int jumlah_1, jumlah_2, jumlah_3, jumlah_4, jumlah_5;
	
	cout << "Masukkan nilai a : ";
	cin >> a;
	cout << "Masukkan nilai b : ";
	cin >> b;
	
	jumlah_1 = a & b;
	cout << "Jumlah dari a and b adalah : " << jumlah_1 << endl;
	
	jumlah_2 = a | b;
	cout << "Jumlah dari a or b adalah : " << jumlah_2 << endl;
	
	jumlah_3 = a ^ b;
	cout << "Jumlah dari a xor b adalah : " << jumlah_3 << endl;
	
	jumlah_4 = a >> b;
	cout << "Jumlah dari a shr b adalah : " << jumlah_4 << endl;
	
	jumlah_5 = a << b;
	cout << "Jumlah dari a shl b adalah : " << jumlah_5 << endl;
	
	return 0;
}
