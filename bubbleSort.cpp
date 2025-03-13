#include <iostream>
#include <string>
using namespace std;

int arr[20];
int n;


void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array: ";
        cin >> n;          //input dari pengguna
        if (n<=20)
            break;
        else{
            cout << "\nArray dapat mempunyai maksimal 20 element\n" << endl;
        } 
    }

    cout << endl;
    cout << "======================" << endl;
    cout << "Masukkan element array" << endl;
    cout << "======================" << endl;

    for (int i - 0; i <n; i++){
        cout << "Data ke-" << (i+1) << ";";
        cin >> arr[i];
    }

}
