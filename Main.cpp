#include <iostream>
using namespace std;
#define max 10

struct queue{
  int data[max];
  int head = 0;
  int tail = 0;
}queue;

void searchQue(){
  int input;
  cout << "masukkan data yang ingin dicari : ";
  cin >> input;
  for (int i = 0;i < max;i++){
    if (queue.data[i] == input){
      cout << "data" << input << "berada pada antrian ke " << i+1 << endl;
    }
  }
}

void changeQue(){
  int change;
  cout << "masukkan data yang ingin diubah : ";
  cin >> change;
  for (int i = 0; i < max;i++){
    if (change == queue.data[i]){
      cout << "masukkan data baru : ";
      cin >> queue.data[i];
      cout << "\n";
    }
  }
  cout << "queue baru" << endl;
  for (int i = 0;i < max;i++){
    if(queue.data[i] != 0){
      cout << "data : " << queue.data[i] << endl;
    }else{
      cout << "data kosong" << endl;
    }
  }
}



int main(int argc, char const *argv[])
{
  
  return 0;
}
