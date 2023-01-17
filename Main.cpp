#include <iostream>
#include <string>

using namespace std;

int main() {
	system("chcp 1251>nul");
	string String;
	string Temp;
	cout << "Введiть слово: ";
	while (String.length() == 0)
		getline(cin, String);

	Temp += String;
	reverse(String.begin(), String.end());

	if (String == Temp)
		cout << Temp << " - Палiндромом";
	else
		cout << Temp << " - не є Палiндромом";
	// козак з казок
}

/*
Є рядок символів. Потрібно перевірити, чи є він паліндромом. Тобто чи читається однаково в обох
напрямках. Наприклад: “козак з казок”.
*/
