#include <iostream>
double celsiusparaFahrenreint(double celsius) {

   return (celsius * 9.0 / 5.0) + 32.0;
}
int main () {
	double temperaturacelsius = 20.0,
	double temperaturaFahrenheit = celsiusparaFahrenheit(temperaturaCelsius);
	std::cout << temperaturaCelsius << "graus Celsius equivalem a " << temperatura fahrenheint;
	return 0;
}
