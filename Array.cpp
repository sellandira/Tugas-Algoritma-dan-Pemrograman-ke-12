#include <iostream>
using namespace std;

int main() {
	cout << "~ Tugas Pertemuan ke-12 : Array ~" << endl;
	cout << "======================================================================" << endl;
	cout << "Nama          : Sella Andira Bintang Wulandari" << endl;
  	cout << "NIM           : 5520122013" << endl;
   	cout << "Program Studi : Informatika" << endl;
   	cout << "======================================================================" << endl;

	
   string nama[6] = {"Sella", "Qibti", "Cahya", "Dinda", "Novi", "Dea"};

   cout << "Nama-nama orang adalah:" << endl;

   for (int i = 0; i < 6; i++) {
      cout << nama[i] << endl;
   }

   return 0;
}
