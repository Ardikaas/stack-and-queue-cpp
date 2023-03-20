#include <iostream>
using namespace std;

float total;
char operasi;
int x;
int y;
int i;

void penjumlahan(float a, float b){
  cout << a << " + " << b << endl; 
  total = a + b;
}
void pengurangan(float a, float b){
  cout << a << " - " << b << endl; 
  total = a - b;
}
void perkalian(float a, float b){
  cout << a << " * " << b << endl; 
  total = a * b;
}
void pembagian(float a, float b){
  cout << a << " / " << b << endl; 
  total = a / b;
}

int main(int argc, char const *argv[])
{
  cout << "Selamat Datang di Aplikasi Kalkulator" << endl;
  cout << "\nPerhatian!!!" << endl;
  cout << "Masukkan \"+\" untuk operasi penjumlahan" << endl;
  cout << "Masukkan \"-\" untuk operasi pengurangan" << endl;
  cout << "Masukkan \"*\" untuk operasi perkalian" << endl;
  cout << "Masukkan \"/\" untuk operasi pembagian" << endl;
  cout << "\nMasukkan bilangan pertama\t: ";
  cin >> x;
  cout << "Masukkan jenis operasi\t\t: ";
  cin >> operasi;
  i = 0;
  while (i < 1){
    if (operasi == '+' || operasi == '-'|| operasi == '*' || operasi == '/'){
      i++;
    }else{
      system("cls");
      cout << "\nOperasi yang anda masukkan salah!!!" << endl;
      cout << "--------------------------------------" << endl;
      cout << "\nPerhatian!!!" << endl;
      cout << "Masukkan \"+\" untuk operasi penjumlahan" << endl;
      cout << "Masukkan \"-\" untuk operasi pengurangan" << endl;
      cout << "Masukkan \"*\" untuk operasi perkalian" << endl;
      cout << "Masukkan \"/\" untuk operasi pembagian" << endl;
      cout << "Masukkan bilangan pertama\t: " << x << endl;
      cout << "Masukkan jenis operasi\t\t: ";
      cin >> operasi;
    }
  }
  cout << "Masukkan bilagan kedua\t\t: ";
  cin >> y;
  cout << "\n";

  if (operasi == '+'){
    penjumlahan(x, y);
  }else if (operasi == '-'){
    pengurangan(x, y);
  }else if (operasi == '*'){
    perkalian(x, y);
  }else if (operasi == '/'){
    pembagian(x, y);
  }
  cout << "\nTotal : " << total << endl;
  cin.get();
  cin.get();
  return 0;
}
