#include <iostream>
//#include "Fraction_Public.h"
#include "Fraction_Private.h"

int main()
{
    //Fraction_Public a, b, c;
    Fraction_Private a, b, c;
    int result;

    cout << "\nPair a" << endl;
    cin >> a;
    cout << a;

    cout << "\nPair b" << endl;
    cin >> b;
    cout << b;

    cout << "\nPair c" << endl;
    cin >> c;
    cout << c;

    cout << "\na and b" << endl;
    result = a.ComparePairs(a, b);
    a.ComparePairsResult(result);

    cout << "\na and c" << endl;
    result = a.ComparePairs(a, c);
    a.ComparePairsResult(result);

    cout << "\nb and c" << endl;
    result = a.ComparePairs(b, c);
    a.ComparePairsResult(result);

    cout << "a++" << endl;
    cout << a++ << endl;

    cout << "a--" << endl;
    cout << a-- << endl;

    cout << "++a" << endl;
    cout << ++a << endl;

    cout << "--a" << endl;
    cout << --a << endl;

    cout << "Size of class is equal to " << sizeof(Fraction_Private) << endl;

    return 0;
}