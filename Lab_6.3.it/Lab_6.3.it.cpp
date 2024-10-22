#include <iostream>
#include <iomanip>
#include <ctime>
#include <Windows.h>
using namespace std;

// Звичайна функція для створення масиву
void Create(int* c, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        c[i] = Low + rand() % (High - Low + 1);
}

// Звичайна функція для виведення масиву
void Print(const int* c, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << c[i];
    cout << endl;
}

// Звичайна функція для знаходження мінімального елемента масиву
int FindMinElement(const int* c, const int size) {
    int min = c[0];
    for (int i = 1; i < size; ++i) {
        if (c[i] < min) {
            min = c[i];
        }
    }
    return min;
}

// Шаблонна функція для створення масиву
template <typename T>
void CreateTemplate(T* c, const int size, const T Low, const T High)
{
    for (int i = 0; i < size; i++)
        c[i] = Low + rand() % (High - Low + 1);
}

// Шаблонна функція для виведення масиву
template <typename T>
void PrintTemplate(const T* c, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << c[i];
    cout << endl;
}

// Шаблонна функція для знаходження мінімального елемента масиву
template <typename T>
T FindMinElementTemplate(const T* c, const int size) {
    T min = c[0];
    for (int i = 1; i < size; ++i) {
        if (c[i] < min) {
            min = c[i];
        }
    }
    return min;
}

int main()
{
    SetConsoleOutputCP(1251);
    srand((unsigned)time(NULL)); // Ініціалізація генератора випадкових чисел

    const int n = 20;
    int c[n]; // Масив для звичайних функцій

    int Low = 1;
    int High = 100;

    // Використання звичайних функцій для обробки масиву
    cout << "Звичайна функція:" << endl;
    Create(c, n, Low, High);
    Print(c, n);
    int minElement = FindMinElement(c, n);
    cout << "Найменший елемент масиву (звичайна функція): " << minElement << endl;

    // Використання шаблонних функцій для обробки масиву
    cout << "\nШаблонна функція:" << endl;
    int cTemplate[n]; // Масив для шаблонних функцій
    CreateTemplate<int>(cTemplate, n, Low, High);
    PrintTemplate<int>(cTemplate, n);
    int minElementTemplate = FindMinElementTemplate<int>(cTemplate, n);
    cout << "Найменший елемент масиву (шаблонна функція): " << minElementTemplate << endl;

    return 0;
}