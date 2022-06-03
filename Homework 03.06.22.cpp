#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    //setlocale(0, "UKR");
    //cout << "Введите целое число: ";
    //int num;
    //cin >> num;
    //int check = 1;

    //cout << "\n" << num << " делится без остатка на: ";

    //for (; check != num; check++)
    //{
    //    if (num % check == 0)
    //    {
    //        cout << check << ", ";
    //    }
    //}
    //cout << num << ".\n";

    //setlocale(0, "UKR");
    //cout << "Введите целое число: ";
    //int num;
    //cin >> num;
    //int check = 2;

    //for (; check != num; check++)
    //{
    //    if (num % check == 0)
    //    {
    //        if (num != check)
    //        {
    //            cout << "\nЧисло не является простым.\n";
    //            break;
    //        }
    //        else
    //        {
    //            cout << "\nЧисло является простым.\n";
    //            break;
    //        }
    //    }
    //}

    //setlocale(0, "UKR");
    //cout << "Введите число: ";
    //int num;
    //cin >> num;

    //while (true)
    //{
    //    int first = num % 10;
    //    int second = num % 100 / 10;
    //    if (first == second)
    //    {
    //        cout << "\nВ числе присутствуют одинаковые цифры подряд.\n";
    //        break;
    //    }

    //    num /= 10;

    //    if (!num)
    //    {
    //        cout << "\nВ числе отсутствуют одинаковые цифры подряд.\n";
    //        break;
    //    }
    //}

    //setlocale(0, "UKR");
    //cout << "Введите число: ";
    //int num;
    //cin >> num;

    //for (; ; num /= 10)
    //{
    //    int first = num % 10;
    //    int second = num % 100 / 10;
    //    
    //    if (first < second)
    //    {
    //        cout << "\nЦифры числа не расположены в неубывающем порядке.\n";
    //        break;
    //    }
    //    if (!num)
    //    {
    //        cout << "\nВсе цифры числа расположены в неубывающем порядке.\n";
    //        break;
    //    }
    //}

    setlocale(0, "UKR");

    int min = 0;
    int max = 1000;

    while (max - min)
    {
        int average = min + (max - min) / 2;

        cout << "\nЧисло больше " << average << " ? (y/n)\n";

        string answer;
        cin >> answer;

        if (answer == "y")
        {
            min = average + 1;
        }
        else if (answer == "n")
        {
            max = average;
        }
    }
    cout << "\nВаше число: " << min << "\n";
}


