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
      cout << " data " << input << "berada pada antrian ke " << i+1 << endl;
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

void sum(){
  int index = 0;
  for(int i = 0;i < max;i++){
    index = index + queue.data[i];
  }
  cout << "nilai total : " << index << endl;
}

void mean(int total){
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
  int input;
  cout << "masukkan banyaknya antrian : ";
  cin >> total;
  system("cls");
  cout << "pilihan : " << endl;
  cout << "1. enqueue" << endl;
  cout << "2. dequeue" << endl;
  cout << "3. display" << endl;
  cout << "4. search queue" << endl;
  cout << "5. change queue" << endl;
  cout << "6. maksimum" << endl;
  cout << "7. minimum" << endl;
  cout << "8. mean" << endl;
  cout << "9. jumlah" << endl;
  cout << "10. keluar" << endl;
  cout << "============" << endl;
  cout << "masukkan pilihan : ";
  cin >> input;
  int i = 0;
  while (i<1){
    if (input == 1){
    enqueue(total);  
    }else if (input == 2){
    dequeue();
    }else if (input == 3){
    display();
    }else if (input == 4){
    searchQue();
    }else if (input == 5){
    changeQue();
    }else if (input == 6){
    maximum();
    }else if (input == 7){
    minimum();
    }else if (input == 8){
    mean(total);
    }else if (input == 9){
    sum();
    }else if (input == 10){
    i++;
    }
  }
  return 0;
}
