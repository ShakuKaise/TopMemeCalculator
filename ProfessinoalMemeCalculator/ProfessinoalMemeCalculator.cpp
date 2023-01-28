#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    double FirstNum;
    double SecondNum;
    int operation;

    while (true) {
        cout << "Введите операцию\n";
        cout << "1 - сложение\n";
        cout << "2 - вычитание\n";
        cout << "3 - умножение\n";
        cout << "4 - деление\n";
        cout << "5 - возведение в степень\n";
        cin >> operation;

        if (operation > 5 || operation < 1)
        {
            main();
            cout << "\n";
        }

        cout << "Введите первое значение\n";
        cin >> FirstNum;

        cout << "Введите второе значение\n";
        cin >> SecondNum;

        

        switch (operation) {
        case 1:
            cout << (FirstNum + SecondNum);
            cout << "\n";
            break;
        case 2:
            cout << (FirstNum - SecondNum);
            cout << "\n";
            break;
        case 3:
            cout << (FirstNum * SecondNum);
            cout << "\n";
            break;
        case 4:
            cout << (FirstNum / SecondNum);
            cout << "\n";
            break;
        case 5:
            cout << pow(FirstNum, SecondNum);
            cout << "\n";
            break;
        }
        cout << "\n";
        cout << "\n";

    }
}