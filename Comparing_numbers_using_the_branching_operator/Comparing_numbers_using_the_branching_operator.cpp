#include <iostream>
#include <string>
#include <regex>

//Составить программу, которая требует ввести два числа.Если первое число больше второго, то программа печатает слово больше.
//Если первое число меньше второго, то программа печатает слово меньше.
//А если числа равны, программа напечатает сообщение Эти числа равны.

int inputInt(std::string textReq = "Enter an integer number") { // textReq текстовый запрос у пользователя
    std::string number;
    std::regex reg("^[0-9]"); //регулярное выражение
    while (true)
    {
        std::cout << textReq << std::endl;
        std::cin >> number;
        if (std::regex_search(number, reg)) {
            return stoi(number); //преобразование string в int. С++ 11
        }
    }
}


int main()
{
	setlocale(LC_ALL, "ru");
	int a = 0, b = 0;
    a = inputInt("Введите 1е число:");
    b = inputInt("Введите 2е число:");
    if (a > b) { std::cout << "Больше\n";}
    if (a < b) { std::cout << "Меньше\n"; }
    if (a == b) { std::cout << "Равно\n"; }
	return 0;
}

