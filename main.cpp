#include <iostream>
using namespace std;
// Integer26. Дні тижня пронумеровані наступним чином:
// 1 - понеділок, 2 - вівторок, ..., 7 - неділя.
// Дано ціле число K (1..365).
// Визначити номер дня тижня для K-го дня року,
// якщо 1 січня було вівторком.
int main()
{
int K, day; // декларація цілих змінних

// введення даних
cout << "K = ";
cin >> K;

// підрахунок
day = (K + 1) % 7; // обчислення номера дня тижня

// якщо остача від ділення дорівнює 0,
// то номер дня тижня дорівнює 7 (неділя)
if (day == 0)
    day = 7;

// виведення результату
cout << "Day number = " << day << endl;
}
// Boolean9. Дано два цілих числа A і B.
// Перевірити істинність висловлювання:
// «Хоча б одне з чисел A і B непарне».
int main()
{

int A, B; // оголошення цілих змінних

// введення даних
cout << "A = ";
cin >> A;

cout << "B = ";
cin >> B;

// перевірка умови:
// число непарне, якщо остача від ділення на 2 не дорівнює 0
bool res = (A % 2 != 0) || (B % 2 != 0);

// виведення результату
cout << "At least one number is odd: "
     << boolalpha << res << endl;
    return 0;
}
// Equation.10.
// Обчислити значення функції
#include <math.h>
int main()
{
    const double pi = 3.14;

    double x, angle;
    double numerator, denominator, y;

    // введення даних
    cout << "x = ";
    cin >> x;

    // переведення градусів у радіани
    angle = (abs(x) + 29.0) * pi / 180.0;

    // чисельник
    numerator = pow(x * x, 1.0 / 3.0) + sqrt(abs(x));

    // знаменник
    denominator = log(pow(sin(angle), 2.0)) / log(2.0);

    // обчислення функції
    y = numerator / denominator + pi * abs(tan(x)) / 2.0;

    // виведення результату
    cout << "y = " << y << endl;

    return 0;
}