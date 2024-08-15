#include <iostream>

int main()
{
	system("chcp 1251");
	system("color 9f");
	system("title InterTeleCom Mars Programm");
	system("cls");
	
	std::cout << "Добропожалывать в программу для связи с Марсом компании \"ИнтерТелеКом\"\n";
	std::cout << "Инициализация сеанса...\n" << "Инициализация прошла успешно\n";
	
	
	double lightSpeed = 186000;
	double distant = 34000000;
	
	std::cout << "Расстояние до Марса " << lightSpeed << " миль\n";
	
	double delayPerSec = distant / lightSpeed;
	double delayPerMin = delayPerSec / 60;
	
	std::cout << "Время задержки сигнала в секундах: " << delayPerSec << "\n";
	std::cout << "Время задержки сигнала в минутах: " << delayPerMin << "\n\a";
	
	
	system("pause");
	return 0;
}