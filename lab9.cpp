#include <iostream>
using namespace std;

template <typename T>
int counter(T* arr, int len, T condd, bool (*f)(T a, T b)){
    int c = 0;
    for(int i = 0; i < len; i++){
        if (f(arr[i], condd)){
            c++;
        }
    }
    return c;
}

template <typename T>
bool bolshe(T a, T b){
    return (a > b);
}

template <typename T>
bool menshe(T a, T b){
    return (a < b);
}

template <typename T>
bool ravn(T a, T b){
    return (a == b);
}

template <typename T>
bool neravn(T a, T b){
    return (a != b);
}

template <typename T>
bool bolsheravn(T a, T b){
    return (a >= b);
}

template <typename T>
bool mensheravn(T a, T b){
    return (a <= b);
}

int main(){
    char arr1[8] = {'U', 'l', 'y', 'a', 't', 'o', 'p'};
    char c1 = 'y';

    int arr2[10] = {309840321, 54552, 8124, 10, -162, 88, 131, -26, 52, -1147};
    int c2 = 17;

    double arr3[7] = {1.7, 89.25, -165.9, 781.123, 0.56, -22045.444, 10101.0101};
    double c3 = -0.1;
    cout << counter(arr1, 8, c1, ravn) << endl;
    cout << counter(arr2, 10, c2, bolshe) << endl;
    cout << counter(arr3, 7, c3, menshe) << endl;
    return 0;
}