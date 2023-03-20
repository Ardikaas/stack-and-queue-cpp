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

bool isEmpty(){
  if (queue.tail == 0){
    return 1;
  }else{
    return 0;
  }
}

bool isFull(){
  if (queue.tail == max){
    return 1;
  }else{
    return 0;
  }
}

void enqueue (int total){
  int index;
  if (total <= 10){
    for (int i = 0;i < total;i++){
      cout << "masukkan nilai : ";
      cin >> index;
      if (isEmpty()){
        queue.data[queue.head] = index;
        queue.head++;
        queue.tail++;
      }else{
        queue.data[queue.tail] = index;
        queue.tail++;
      }
    }
  }else if (total > 10){
    cout << "jumlah data melebihi kapasitas";
  }
  cout << "\n";
}

void display(){
  if (isEmpty()){
    cout << "tidak ada data";
  }else{
    cout << "data antrian" << endl;
    for (int i =0; i < max; i++){
      if (queue.data[i] != 0){
        cout << i+1 << ". " << queue.data[i] << endl;
      }else{
        cout << i+1 << ". kosong" << endl;
      }
    }
  }
}

void dequeue(){
  if (isEmpty()){
    cout << "antrian kosong";
  }else{
    for (int i = 0; i < queue.tail; i++){
      queue.data[i] = queue.data[i+1];
    }
  }
  cout << "\n";
}

void maximum(){
  int maxi;
  maxi = 0;
  for (int i = 0; i < queue.tail;i++){
    if (queue.data[i] > maxi){
      maxi = queue.data[i];
    }
  }
  cout << "nilai maksimum : " << maxi << endl;
}

void minimum(){
  int mini;
  queue.data[queue.head] = mini;
  for (int i = 0;i < max ;i++){
    if (queue.data[i] != 0){
      if (mini > queue.data[i]){
        mini = queue.data[i];
      }
    }
  }
  cout << "nilai minimum : " << mini << endl;
}

void mean(int total){
  int subtotal;
  float rata;
  int sum = 0;
  for (int i = 0;i < max; i++){
    sum = sum + queue.data[i];
  }
  rata = sum/total;
  cout << "nilai mean : " << rata << endl;
}

int main(int argc, char const *argv[])
{
  int total;
  cout << "masukkan banyaknya antrian : ";
  cin >> total;
  enqueue(total);
  display();
  dequeue();
  display();
  searchQue();
  changeQue();
  display();
  mean(total);
  maximum();
  minimum();
  return 0;
}
