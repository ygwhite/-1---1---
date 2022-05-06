#include <string> 
#include <iostream> 
using namespace std;

struct Weather {
	setlocale(LC_ALL, "rus");
	int Д;
	double Т;
	double С;
	double В;
	char Осадки;
};

const Weather getWeather() {
	Weather Погодка;
	cout << "Д:";
	cin >> Погодка.Д;

	cout << "Т:";
	cin >> Погодка.Т;

	cout << "В:";
	cin >> Погодка.В;

	cout << "В С:";
	cin >> Погодка.С;

	cout << "Осадки:";
	cin >> Погодка.Осадки;

	return Погодка;
}

int main() {
	char Значение;
	double avgT = 0;
	double avgS = 0;
	int r = 0;
	int s = 0;
	int counter = 0;
	do
	{
		Weather Погодка;
		Погодка = getWeather();
		avgT = avgT + Погодка.Т;
		avgS = avgS + Погодка.С;

		if (Погодка.Осадки == "Жиждь")
			r = r + 1;
		if (Погодка.Осадки == "Сних")
			s = s + 1;

		cout << "Введите Значение:";
		cin >> Значение;
		counter += 1;
	} while (Значение != "quit");

	cout << "avgТ =" << avgT / counter << "\n";
	cout << "avgS =" << avgS / counter << "\n";

	if (r > s) cout << "Жиждь" << "Чаще всего";
	else if (r < s) cout << "Сних" << "Чаще всего";
	else cout << "Жиждь и сних одновременно";

	return 0;
}