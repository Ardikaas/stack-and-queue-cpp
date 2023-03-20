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




int main(int argc, char const *argv[])
{
  
  return 0;
}
