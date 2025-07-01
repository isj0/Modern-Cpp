#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {

	vector <double> temps{ 87.2, 77.1, 80.0, 72.5 };
	
	double average_temp{};
	double running_sum{};

	for (auto temp : temps)
		running_sum += temp;

	if (temps.size() != 0)
		average_temp = running_sum / temps.size();

	cout << fixed << setprecision(1);
	cout << "Average temp: " << average_temp << endl;

	for (auto val: {1, 2, 3, 4, 5})
		cout << val << endl;

	for (auto c : "Welcome to Cpp Programming")
		if (c == ' ')
			cout << "\t";
		else
			cout << c;

	return 0;
}