// Sales prediction

#include <iostream>

int main()
{
//Given values, and Constants
const long TOTALSALES = 2103419277;
const double PERCENTINCREASE = 0.18;
long predictedsales2;

//Calculates predicted sales
long predictedsales = TOTALSALES * PERCENTINCREASE;
predictedsales2 = predictedsales + TOTALSALES;

//Presents Info
std::cout << "Last year's sales were " <<TOTALSALES<< " dollars\n";
std::cout << "This year's sales prediction " <<predictedsales2<< " dollars\n";

return 0;
}
