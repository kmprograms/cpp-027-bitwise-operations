#include <iostream>
#include <numeric> // gcd, lcm
#include <cmath>

int main() {

    // ------------------------------------------------------------------------------------------
    // Sprawdzenie czy liczba jest parzysta / nieparzysta
    // ------------------------------------------------------------------------------------------
    // Operator & - koniunkcja bitowa
    std::cout << "-------------------------------------- 1 -----------------------------------\n";
    int number1 = 123;
    // 0111 1011
    // 0000 0001
    std::cout << (number1 & 1) << std::endl;  // nieparzysta
    int number2 = 124;
    // 0111 1100
    // 0000 0001
    std::cout << (number2 & 1) << std::endl;  // parzysta

    // ------------------------------------------------------------------------------------------
    // Szybkie dzielenie / mnozenie przez 2
    // ------------------------------------------------------------------------------------------
    std::cout << "-------------------------------------- 2 -----------------------------------\n";
    int number3 = 10;
    number3 = number3 >> 1;  // dzielenie przez 2
    std::cout << number3 << std::endl;
    number3 = number3 << 1;  // mnozenie przez 2
    std::cout << number3 << std::endl;

    // ------------------------------------------------------------------------------------------
    // Szybka zmiana dużej litery na małą oraz małej litery na dużą
    // ------------------------------------------------------------------------------------------
    std::cout << "-------------------------------------- 3 -----------------------------------\n";

    // Zamiana dużej litery na małą
    char c11 = 'X';
    char c12 = c11 | ' ';

    // Zamiana malej na duza
    char c21 = 'x';
    char c22 = c21 & '_';

    std::cout << c11 << " ---> " << c12 << "\n";
    std::cout << c21 << " ---> " << c22 << "\n";

    // ------------------------------------------------------------------------------------------
    // Zamiana dwoch liczb wartosciami
    // ------------------------------------------------------------------------------------------

    std::cout << "-------------------------------------- 4 -----------------------------------\n";

    // Operator ^ czyli xor, wykluczający or
    int a = 12, b = 6;
    std::cout << "a = " << a << " b = " << b << "\n";

    // 1100 --> a
    // 0110 --> b
    // ----
    // 1010
    a ^= b;

    // 0110
    // 1010
    // ----
    // 1100
    b ^= a;

    // 1010
    // 1100 --> b
    // ----
    // 0110 --> a
    a ^= b;
    std::cout << "a = " << a << " b = " << b << "\n";

    // ------------------------------------------------------------------------------------------
    // Instrukcje warunkowe z wykorzystaniem operatorów bitowych
    // ------------------------------------------------------------------------------------------
    std::cout << "-------------------------------------- 5 -----------------------------------\n";

    int aa = 10, bb = 20, x;

    // Original value
    x = aa;
    std::cout <<"x = " << x << "\n";

    // if (x == a) x = b;
    x = aa ^ bb ^ x;
    std::cout <<"x = " << x << "\n";

    // if (x == b) x = a;
    x = aa ^ bb ^ x;
    std::cout <<"x = " << x << "\n";

    // x = 0
    x = x ^ x;
    std::cout <<"x = " << x << "\n";

    // ------------------------------------------------------------------------------------------
    // Wyznaczanie wartości najmniejszej oraz największej
    // ------------------------------------------------------------------------------------------

    std::cout << "-------------------------------------- 6 -----------------------------------\n";

    int xx = 10, yy = 20;

    int min = (yy ^ (xx ^ yy) & -(xx < yy));
    int max = (xx ^ (xx ^ yy) & -(xx < yy));

    std::cout <<"Min = " << min << "\n";
    std::cout <<"Max = " << max << "\n";

    // ------------------------------------------------------------------------------------------
    // Wyznaczanie NWD oraz NWW
    // ------------------------------------------------------------------------------------------
    std::cout << "-------------------------------------- 7 -----------------------------------\n";

    std::cout << std::gcd(12, 18) << "\n"; // greatest common divisor
    std::cout << std::lcm(12, 18) << "\n"; // least common multiple

    // ------------------------------------------------------------------------------------------
    // Wyznaczanie ilosci cyfr w liczbe za pomoca logarytmow
    // ------------------------------------------------------------------------------------------
    std::cout << "-------------------------------------- 8 -----------------------------------\n";

    int number4 = 23145;
    std::cout << floor(log10(number4)) + 1;


    return 0;
}
