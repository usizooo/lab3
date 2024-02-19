#include <iostream>
#include <vector>

using namespace std;
int main() {
    const int row = 3;
    const int col = 5;
    
    vector<vector<double>> matrix(row, vector<double>(col));
    
    cout << "Введите элементы матрицы" << row << "x" << col << ":\n";
    for (int i = 0; i < row; ++i) {
        cout << "Строка " << i + 1 << "\n";
        for (int j = 0; j < col; ++j) {
            cout << "Элемент " << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }
    
    cout << "Средние арифметическое значение для каждой строки:\n";
    for (int i = 0; i < row; ++i) {
        double sum = 0;
        for (int j = 0; j < col; ++j) {
            sum += matrix[i][j];
        }
        double average = sum / col;
        cout << "Строка " << i + 1 << ": " << average << endl;
    }
    
    return 0;
}
