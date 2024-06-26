// CPP_CanChi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
    string can[10] = { "canh", "tan", "nham", "quy", "giap", "at", "binh", "dinh", "mau", "ky" };
    string chi[12] = { "than", "dau", "tuat", "hoi", "ty", "suu", "dan", "mao", "thin", "ti", "ngo", "mui" };
    int nam;
    cout << "nhap so nam: ";
    cin >> nam;
    string cn = can[nam % 10];
    string ci = chi[nam % 12];
    cout << "can chi cua ban la: " << " " << cn << " " << ci << endl;
    return 0;
}

