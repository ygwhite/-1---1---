#include <string> 
#include <iostream> 
using namespace std;

struct Weather {
	setlocale(LC_ALL, "rus");
	int �;
	double �;
	double �;
	double �;
	char ������;
};

const Weather getWeather() {
	Weather �������;
	cout << "�:";
	cin >> �������.�;

	cout << "�:";
	cin >> �������.�;

	cout << "�:";
	cin >> �������.�;

	cout << "� �:";
	cin >> �������.�;

	cout << "������:";
	cin >> �������.������;

	return �������;
}

int main() {
	char ��������;
	double avgT = 0;
	double avgS = 0;
	int r = 0;
	int s = 0;
	int counter = 0;
	do
	{
		Weather �������;
		������� = getWeather();
		avgT = avgT + �������.�;
		avgS = avgS + �������.�;

		if (�������.������ == "�����")
			r = r + 1;
		if (�������.������ == "����")
			s = s + 1;

		cout << "������� ��������:";
		cin >> ��������;
		counter += 1;
	} while (�������� != "quit");

	cout << "avg� =" << avgT / counter << "\n";
	cout << "avgS =" << avgS / counter << "\n";

	if (r > s) cout << "�����" << "���� �����";
	else if (r < s) cout << "����" << "���� �����";
	else cout << "����� � ���� ������������";

	return 0;
}