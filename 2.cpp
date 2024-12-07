#include <iostream>
#include <vector>

int main() {
    using namespace std;
    vector<int> numbers;

    int n;
    cout << "Введите количество чисел: ";
    cin >> n;


    cout << "Введите " << n << " чисел:" << endl;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        numbers.push_back(number);
    }


    int maxNumber = numbers[0];


    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    cout << "Максимальное число: " << maxNumber << endl;

    return 0;
}