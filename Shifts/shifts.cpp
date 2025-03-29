#include <iostream>
using namespace std;
//#define Shift
//#define BIR
//#define HEX
void main() {
    setlocale(LC_ALL, "Ru");
    
#ifdef Shift
    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arr[i] = i;
    }
    cout << "Исходный массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int shifts;
    cout << "Введите количество сдвигов влево: ";
    cin >> shifts;

    for (int s = 0; s < shifts; s++) {
        int temp = arr[0];
        for (int i = 0; i < SIZE - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[SIZE - 1] = temp;
    }
    cout << "Массив после сдвига: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";


    }
#endif //Shift  
#ifdef BIR
    int numb;
    cout << "Введите число: "; cin >> numb;
    const int SIZE = 8;
    int arr[SIZE];
    int reminder;
    for (int i = 0; i < SIZE ; i++)
    {
        reminder = numb % 2;
        if (reminder == 0)
        {
            arr[i] = 0;
        }
        else {
            arr[i] = 1;
        }
        numb /= 2; 
    }
    for (int i = SIZE-1; i>=0 ; i--)
    {
        cout << arr[i] << " ";
    }

#endif //BIR
#ifdef HEX
    int numb;
    cout << "Введите число: ";
    cin >> numb;

    const int SIZE = 16;
    char hex[SIZE];
    int remainder;
    int i = 0;

    if (numb == 0) {
        cout << "0";
    }

    while (numb != 0) {
        remainder = numb % 16;
        if (remainder < 10) {
            hex[i] = remainder + '0';
        }
        else {
            hex[i] = remainder - 10 + 'A';
        }
        numb /= 16;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << hex[j];
    }
#endif //HEX
    
}