// 3.2-2.cpp
//
#include <iostream>
#include <Windows.h>



struct Bank_account {
    int account_number;
    std::string first_name;
    double balance;
};
void blank(Bank_account& i) {
std::cout << "Введите номер счёта :   ";
std::cin >> i.account_number;
std::cout << "\n";

std::cout << "Введите имя владельца :   ";
std::cin >> i.first_name;
std::cout << "\n";

std::cout << "Введите баланс :   ";
std::cin >> i.balance;
std::cout << "\n";

std::cout << "Введите новый баланс :  ";
std::cin >> i.balance;
std::cout << "\n";

std::cout << "Ваш счёт :";
std::cout
<< i.first_name << ", "
<< i.account_number << ", "
<< i.balance << " " << "\n";
}

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);

    Bank_account Name {};               //{11, "Alex", 1002.2}
  
    blank(Name);

   //std::cout << "конец файла!\n";
    }



#if 0
//std::wcout << "конец файла!\n"; //_____wcout____

{ "11", "Alex", "1002.2" };
Bank account

Введите номер счёта : 123456789  Account number
Введите имя владельца : Андрей
Введите баланс : 5000   balance
Введите новый баланс : 6000
Ваш счёт : Андрей, 123456789, 6000

#endif

