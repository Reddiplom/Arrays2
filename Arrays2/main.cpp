#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void main()

{
    setlocale(LC_ALL, "Ru");
    int size;

    cout << "Введите размер массива: "; cin >> size;
    vector<int> arr(size);
    cout << endl;
    cout << "Введите " << size << " элементов массива: ";

    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];

    }
    cout << "Ваш массив: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Ваш массив в обратном порядке: " << endl;
    for (int i =  size-1 ; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    double sum;
    sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Сумма элементов массива: " << sum ;
    cout << endl;
    double avg;
    avg = 0;
    cout << "Cреднее значение элементов массива: " << sum/size;
     auto min_it = min_element(begin(arr),end(arr));
      cout <<"Минимальное значение массива: " << * min_it;
      auto max_it = max_element(begin(arr), end(arr));
      cout <<"Максимальное значение массива: " << *max_it;
}