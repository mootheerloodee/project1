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
  float maximum=-10^10;
  for (int i=0; i<len; i++){
    if(array[i]>maximum){
      maximum=array[i];
    }
  }
  cout << "Максимум в переданном списке = " << maximum << endl;
}
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
  float maximum=-10^10;
  for (int i=0; i<len; i++){
    if(array[i]>maximum){
      maximum=array[i];
    }
  }
  cout << "Максимум в переданном списке = " << maximum << endl;
}
