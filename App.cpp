#include <iostream>
using namespace std;
#define max 10

struct stack{
  int data[max];
  int top = -1;
}stack;

void push(int data){
  if (stack.top >= max-1){
    cout << "tumpukan penuh" << endl;
  }else{
    stack.top++;
    stack.data[stack.top] = data;
  }
}

void pop(){
  if (stack.top <= -1){
    cout << "tumpukan penuh" << endl;
  }else{
    cout << "data yang muncul adalah : " << stack.data[stack.top] << endl;
    stack.top--;
  }
}

void display(){
  if(stack.top >= 0){
    cout << "data stack adalah : ";
    for (int i = stack.top; i >= 0; i++){
      cout << stack.data[i] << "\t";
    }
    cout << "\n";
  }else{
    cout << "tumpukan kosong" << endl;
  }
}

void search(){
  int input;
  cout << "masukkan data : ";
  cin >> input;
  for (int i = stack.top; i >= 0; i--){
    if(input == stack.data[i]){
      cout << " data " << input << "berada pada tumpukan ke " << i+1 << endl;
      break;
    }
    if (input != stack.data[i] && i == 0){
      cout << "data tidak dapat ditemukan";
    }
  }
}

void change(){
  int index;
  int value;
  cout << "masukkan data yang ingin dirubah: ";
  cin >> index;
  cout << "masukkan data baru : ";
  cin >> value;
  for(int i = 0; i <= stack.top;i++){
    if(stack.data[i] == index){
      stack.data[i] = value;
    }
  }
}

int main(int argc, char const *argv[])
{
  int input;
  int data;
  int ch;
  cout << "pilihan : " << endl;
  cout << "1. push" << endl;
  cout << "2. pop" << endl;
  cout << "3. display" << endl;
  cout << "4. search" << endl;
  cout << "5. change" << endl;
  cout << "6. keluar" << endl;
  cout << "============" << endl;
  cout << "masukkan pilihan : ";
  cin >> input;
  int i = 0;
  do{
    cout<<endl<<"Masukan pilihan anda: ";
    cin>>ch;
    switch(ch) {
      case 1: {
        cout<<"Masukan data: ";
        cin>> data;
        push(data);
        break;
      }case 2: {
        pop();
        break;
      }case 3: {
        display();
        break;
      }case 4: {
        search();
        break;
      }case 5: {
        change();
        break;
      }default: {
        cout<<"Keluar"<<endl;
        break;
      }
    }
  }while(ch != 6);
  return 0;
}
