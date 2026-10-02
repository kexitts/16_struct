#include <iostream>
using namespace std;

struct WashingMachine
{
    string firm;
    string color;
    double width;
    double length;
    double height;
    int power;
    int spinSpeed;
    int heatingTemperature;
};

int main()
{
    WashingMachine machine;

    machine.firm = "Samsung";
    machine.color = "White";
    machine.width = 60;
    machine.length = 55;
    machine.height = 85;
    machine.power = 2000;
    machine.spinSpeed = 1200;
    machine.heatingTemperature = 90;

    cout << "Фірма: " << machine.firm << endl;
    cout << "Колір: " << machine.color << endl;
    cout << "Ширина: " << machine.width << " см" << endl;
    cout << "Довжина: " << machine.length << " см" << endl;
    cout << "Висота: " << machine.height << " см" << endl;
    cout << "Потужність: " << machine.power << " Вт" << endl;
    cout << "Швидкість віджиму: " << machine.spinSpeed << " об/хв" << endl;
    cout << "Температура нагріву: " << machine.heatingTemperature << " C" << endl;

    return 0;
}








struct Iron
{
    string firm;
    string model;
    string color;
    int minTemperature;
    int maxTemperature;
    bool steam;
    int power;
};

int main()
{
    Iron iron;

    iron.firm = "Philips";
    iron.model = "GC4537";
    iron.color = "Blue";
    iron.minTemperature = 80;
    iron.maxTemperature = 240;
    iron.steam = true;
    iron.power = 2400;

    cout << "Фірма: " << iron.firm << endl;
    cout << "Модель: " << iron.model << endl;
    cout << "Колір: " << iron.color << endl;
    cout << "Мінімальна температура: " << iron.minTemperature << " C" << endl;
    cout << "Максимальна температура: " << iron.maxTemperature << " C" << endl;
    cout << "Подача пари: " << (iron.steam ? "Так" : "Ні") << endl;
    cout << "Потужність: " << iron.power << " Вт" << endl;

    return 0;
}








struct Boiler
{
    string firm;
    string color;
    int power;
    int volume;
    int heatingTemperature;
};

int main()
{
    Boiler boiler;

    boiler.firm = "Ariston";
    boiler.color = "White";
    boiler.power = 1500;
    boiler.volume = 80;
    boiler.heatingTemperature = 75;

    cout << "Фірма: " << boiler.firm << endl;
    cout << "Колір: " << boiler.color << endl;
    cout << "Потужність: " << boiler.power << " Вт" << endl;
    cout << "Обсяг: " << boiler.volume << " л" << endl;
    cout << "Температура нагріву: " << boiler.heatingTemperature << " C" << endl;

    return 0;
}