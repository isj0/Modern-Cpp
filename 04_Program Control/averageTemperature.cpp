#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector <double> temps{ 87.2, 77.1, 80.0, 72.5 };
	
	double average_temp{};
	double running_sum{};

	for (auto temp : temps)
		running_sum += temp;

	average_temp = running_sum / temps.size();

	cout << "Average temp: " << average_temp << endl;

	return 0;
}