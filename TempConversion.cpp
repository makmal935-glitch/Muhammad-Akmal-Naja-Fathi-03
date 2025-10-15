#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double celsius;

    cout << "Konversi Suhu\n" << endl;
    cout << "Input Celsius:\t" << endl;
    cin >> celsius;

    double reamur = celsius * 4.0 / 5.0;
    double fahrenheit = (celsius * 9.0 / 5.0) + 32;

    cout << "Konversi\t:\n" << endl;

    cout << fixed << setprecision(1);

    cout << "\t\t" << reamur << " " << char(248) << "R\n" << endl;
    cout << "\t\t" << fahrenheit << " " << char(248) << "F\n" << endl;

    return 0;
}