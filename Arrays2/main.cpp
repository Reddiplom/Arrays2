#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void main()

{
    setlocale(LC_ALL, "Ru");
    int size;

    cout << "������� ������ �������: "; cin >> size;
    vector<int> arr(size);
    cout << endl;
    cout << "������� " << size << " ��������� �������: ";

    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];

    }
    cout << "��� ������: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "��� ������ � �������� �������: " << endl;
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
    cout << "����� ��������� �������: " << sum ;
    cout << endl;
    double avg;
    avg = 0;
    cout << "C������ �������� ��������� �������: " << sum/size;
     auto min_it = min_element(begin(arr),end(arr));
      cout <<"����������� �������� �������: " << * min_it;
      auto max_it = max_element(begin(arr), end(arr));
      cout <<"������������ �������� �������: " << *max_it;
}