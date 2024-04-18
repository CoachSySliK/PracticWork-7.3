#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    int roomSize[2] = { 20, 15 };    
    string river = "Черепаха"; //отсылка
    int xRiver = 0;
    int yRiver = 0;
    char comand;

    cout << "Возможные команды:\n\tW - Движение на Север\n\tA - Движение на Запад\n\tS - Движение на Юг\n\tD - Движение на Восток\n\tE - завершение тестирвоания\n";
    cout << "------------**********------------\n";
    
    xRiver = roomSize[0] / 2;
    yRiver = roomSize[1] / 2;
    position(xRiver, yRiver, river);

    do {        
        cout << "Введите команду: ";
        cin >> comand;
        cin.ignore(100, '\n');
        
        if (comand == 'W' && yRiver < 15) {
            yRiver++;
            position(xRiver, yRiver, river);
        }
        else if (comand == 'A' && xRiver > 0) {
            xRiver--;
            position(xRiver, yRiver, river);
        }
        else if (comand == 'S' && yRiver > 0) {
            yRiver--;
            position(xRiver, yRiver, river);
        }
        else if (comand == 'D' && xRiver < 20) {
            xRiver++;
            position(xRiver, yRiver, river);
        }
        else if (comand != 'E') {
            cout << "Не допустимая команда!\n";
        }

    } while (comand != 'E');

    cout << "Тестирование завершено!\n";

    return 0;
}
