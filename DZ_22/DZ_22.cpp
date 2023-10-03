#include <iostream>
#include <stdlib.h>

using namespace std;

void SumAndMult(int* a, int size, int* sum, int* mult)
{
    for (int i = 0; i < size; i++) {
        *sum += *(a + i);
        *mult *= *(a + i);
    }
}
void CountArr(int* arr, int size, int* n, int* p, int* z)
{
    for (int i = 0; i < size; i++) {
        if (*(arr + i) < 0)
            *n += 1;
        else if (*(arr + i) > 0)
            *p += 1;
        else
            *z += 1;
    }
}
void MaxNum(int* arr, int size, int* im, int* nm)
{
    *nm = *arr;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) > *nm) {
            *nm = *(arr + i);
            *im = i;
        }
    }
}
int main()
{
    srand(time(0));
    //1
    const int size = 5;
    int arr1[size];
    cout << "1:\n";
    for (int i = 0; i < size; i++) {
        *(arr1 + i) = rand() % 20;
        cout << *(arr1 + i) << " ";
    }
    cout << endl;
    int arr2[size];
    cout << "2:\n";
    for (int j = 0; j < size; j++) {
        *(arr2 + j) = *(arr1 + j);
        cout << *(arr2 + j) << " ";
    }
    cout << "\n\n";
    
    //2
    const int size2 = 6;
    int arr[size2];
    cout << "1:\n";
    for (int k = 0; k < size2; k++) {
        *(arr + k) = rand() % 20;
        cout << *(arr + k) << " ";
    }
    cout << endl;
    int temp;
    cout << "2:\n";
    for (int n = 1; n <= size2/2; n++) {
        temp = *(arr + (n - 1));
        *(arr + (n - 1)) = *(arr + (size2 - n));
        *(arr + (size2 - n)) = temp;
    }
    for (int N = 0; N < size2; N++) {
        cout << *(arr + N) << " ";
    }
    cout << "\n\n";
    
    //3
    const int size3 = 5;
    int ar1[size3];
    cout << "1:\n";
    for (int I = 0; I < size3; I++) {
        *(ar1 + I) = rand() % 20;
        cout << *(ar1 + I) << " ";
    }
    cout << endl;
    int ar2[size3];
    cout << "2:\n";
    for (int m = 0; m < size3; m++) {
        *(ar2 + m) = *(ar1 + (size3-(m+1)));
        cout << *(ar2 + m) << " ";
    }
    
    //4
    const int SIZE = 5;
    int array[SIZE] = { 1, 2, 3, 4, 5 };
    int summa = 0, proizved = 1;
    SumAndMult(array, SIZE, &summa, &proizved);
    cout << "Sum = " << summa << endl;
    cout << "Multiplication = " << proizved << "\n\n";
    
    //5
    const int SIZE2 = 6;
    int array1[SIZE2];
    for (int h = 0; h < SIZE2; h++) {
        array1[h] = -20 + rand() % 41;
        cout << array1[h] << " ";
    }
    cout << endl;
    int negative = 0;
    int positive = 0;
    int zeros = 0;
    CountArr(array1, SIZE2, &negative, &positive, &zeros);
    cout << "Negative numbers: " << negative << endl;
    cout << "Positive numbers: " << positive << endl;
    cout << "Zeros: " << zeros << "\n\n";

    //6
    const int SIZE3 = 8;
    int a[SIZE3];
    for (int l = 0; l < SIZE3; l++) {
        a[l] = -20 + rand() % 41;
        cout << a[l] << " ";
    }
    cout << endl;
    int imax, nmax;
    MaxNum(a, SIZE3, &imax, &nmax);
    cout << "Max number: " << nmax << endl;
    cout << "Index: " << imax << "\n\n";
}
