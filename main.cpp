#include <iostream>
#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> arr);
vector<int> mergeSort(vector<int> arr);
vector<int> quickSort(vector<int> arr);

int main() {
    cout << "=== ПРОГРАММА СОРТИРОВКИ ===" << endl;
    
    vector<int> numbers = {64, 34, 25, 12, 22, 11, 90, 5};
    
    cout << "Исходный массив: ";
    for (int num : numbers) cout << num << " ";
    cout << endl << endl;
    
    vector<int> result1 = bubbleSort(numbers);
    cout << "Пузырьковая сортировка: ";
    for (int num : result1) cout << num << " ";
    cout << endl;
    
    vector<int> result2 = mergeSort(numbers);
    cout << "Сортировка слиянием: ";
    for (int num : result2) cout << num << " ";
    cout << endl;
    
    vector<int> result3 = quickSort(numbers);
    cout << "Быстрая сортировка: ";
    for (int num : result3) cout << num << " ";
    cout << endl;
    
    cout << endl << "Все алгоритмы работают!" << endl;
    return 0;
}