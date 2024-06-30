#include <iostream>
using namespace std;

//int** add(int** array, int& rows, int cols, const int* newRow) {
//    
//    int** newarray = new int* [rows + 1];
//
//    for (int i = 0; i < rows; ++i) {
//        newarray[i] = array[i];
//    }
//
//    newarray[rows] = new int[cols];
//    for (int j = 0; j < cols; ++j) {
//        newarray[rows][j] = newRow[j];
//    }
//
//    ++rows;
//
//    delete[] array;
//
//    return newarray;
//}
//void Array(int** array, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//}

//int** add(int** array, int& rows, int cols, const int* newRow) {
//
//    int** newarray = new int* [rows + 1];
//
//    newarray[0] = new int[cols];
//    for (int j = 0; j < cols; ++j) {
//        newarray[0][j] = newRow[j];
//    }
//
//    for (int i = 0; i < rows; ++i) {
//        newarray[i + 1] = array[i];
//    }
//
//    ++rows;
//
//    delete[] array;
//
//    return newarray;
//}
//void Array(int** array, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//}

//int** add(int** array, int& rows, int cols, const int* newRow, int pos) {
//        
//        int** newarray = new int* [rows + 1];
//    
//        for (int i = 0; i < pos; ++i) {
//            newarray[i] = array[i];
//        }
//    
//        newarray[pos] = new int[cols];
//        for (int j = 0; j < cols; ++j) {
//            newarray[pos][j] = newRow[j];
//        }
//
//        for (int i = pos; i < rows; ++i) {
//            array[i + 1] = array[i];
//        }
//
//        for (int i = 0; i < rows; ++i) {
//            delete[] array[i];
//        }
//        delete[] array;
//    
//        ++rows;
//    
//        delete[] array;
//    
//        return newarray;
//    }
//    void Array(int** array, int rows, int cols) {
//        for (int i = 0; i < rows; ++i) {
//            for (int j = 0; j < cols; ++j) {
//                cout << array[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }

int** del(int** array, int& rows, int cols, const int* newRow, int pos) {
            
            int** newarray = new int* [rows - 1];
        
            for (int i = 0; i < pos; ++i) {
                newarray[i] = array[i];
            }
        
            for (int i = pos + 1; i < rows; ++i) {
                newarray[i - 1] = array[i];
            }
            --rows;

            for (int i = 0; i < rows + 1; ++i) {
                delete[] array[i];
            }
            delete[] array;
        
            return newarray;
        }
        void Array(int** array, int rows, int cols) {
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    cout << array[i][j] << " ";
                }
                cout << endl;
            }
        }

int main() {


    //1
    /*int rows = 3;
    int cols = 3;

    int** array = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            array[i][j] = i * cols + j + 1;
        }
    }

    int newRow[] = { 10, 11, 12 };

    cout << "Початковий двомірний масив:" << endl;
    Array(array, rows, cols);

    array = add(array, rows, cols, newRow);

    cout << "Двомірний масив після додавання нового рядка:" << endl;
    Array(array, rows, cols);

    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;*/

    //2

    /*int rows = 3;
    int cols = 3;

    int** array = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            array[i][j] = i * cols + j + 1;
        }
    }

    int newRow[] = { 10, 11, 12 };

    cout << "Початковий двомірний масив:" << endl;
    Array(array, rows, cols);

    array = add(array, rows, cols, newRow);

    cout << "Двомірний масив після додавання нового рядка:" << endl;
    Array(array, rows, cols);

    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;*/

    //3

    /*int rows = 3;
    int cols = 3;

    int** array = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            array[i][j] = i * cols + j + 1;
        }
    }

    int newRow[] = { 10, 11, 12 };

    cout << "Початковий двомірний масив:" << endl;
    Array(array, rows, cols);

    int num;

    cout << "Введіть позицію нового рядка(від 0 до " << rows-1 << "): ";
    cin >> num;

    array = add(array, rows, cols, newRow, num);

    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;*/

    //4
    int rows = 3;
    int cols = 3;

    int** array = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            array[i][j] = i * cols + j + 1;
        }
    }

    int newRow[] = { 10, 11, 12 };

    cout << "Початковий двомірний масив:" << endl;
    Array(array, rows, cols);

    int num;

    cout << "Введіть позицію для видалення рядка(від 0 до " << rows-1 << "): ";
    cin >> num;

    array = del(array, rows, cols, newRow, num);

    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}