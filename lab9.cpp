#include <iostream>
using namespace std;

enum state{
    ravn,
    neravn,
    bolshe,
    menshe,
    bolsheravn,
    mensheravn
};

template <typename T>
int counter(T* arr, int len, T cond, state a = ravn){
    int c = 0;
    if (a == 0){
        for(int i = 0; i < len; i++){
            if(arr[i] == cond){
                c++;
            }
        }
    }
    else if (a == 1){
        for(int i = 0; i < len; i++){
            if(arr[i] != cond){
                c++;
            }
        }
    }
    else if (a == 2){
        for(int i = 0; i < len; i++){
            if(arr[i] > cond){
                c++;
            }
        }
    }
    else if (a == 3){
        for(int i = 0; i < len; i++){
            if(arr[i] < cond){
                c++;
            }
        }
    }
    else if (a == 4){
        for(int i = 0; i < len; i++){
            if(arr[i] >= cond){
                c++;
            }
        }
    }
    else if (a == 5){
        for(int i = 0; i < len; i++){
            if(arr[i] <= cond){
                c++;
            }
        }
    }
    return c;
}



int main(){
    double* arr1;
    arr1 = new double[10];
    arr1[0] = 3.2;
    arr1[1] = 0.99;
    arr1[2] = -13.103;
    arr1[3] = 109.7;
    arr1[4] = 18.05;
    arr1[5] = 2222.11;
    arr1[6] = 143.0;
    arr1[7] = -89123.3;
    arr1[8] = -9.0;
    arr1[9] = 0.0;
    double c1 = 0.1;
    cout << "В первом массиве " << counter(arr1, 10, c1, state::bolshe) << " элемента(ов) больше " << c1 << endl;
    delete[] arr1;

    int arr2[5] = {-105, 6005, 0, 27, 89212};
    int c2 = 11;
    cout << "Во втором массиве " << counter(arr2, 5, c2, state::menshe) << " элемента(ов) меньше " << c2 << endl;

    char arr3[8] = {'u', 'l', 'y', 'a', 't', 'o', 'p'};
    char c3 = 'f';
    cout << "В третьем массиве " << counter(arr3, 8, c3) << " элемента(ов) равных " << c3 << endl;
    return 0;
}