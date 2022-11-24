#include <iostream>
using namespace std;

int main() {
  int len;
  cout << "Введите колличество элементов в списке: " << endl;
  cin >> len;
  float array[len];
  cout << "Введите элементы списка: " << endl;
  for (int i=0; i<len; i++){
    cin >> array[i];
  }
  float minimum=10^10;
  for (int i=0; i<len; i++){
    if(array[i]<minimum){
      minimum=array[i];
    }
  }
  cout << "Максимум в переданном списке = " << minimum << endl;
}
