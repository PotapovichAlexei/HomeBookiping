#include "Date.h"
#include "Exception.h"

istream& operator>>(istream& in, Date& obj)
{
rewind(stdin);
cout << "Day: ";
obj._day = inputInt(0, 31);

rewind(stdin);
cout << "Month: ";
obj._month = inputInt(0, 12);

rewind(stdin);
cout << "Year: ";
obj._month = inputInt(1900, 2050);

return in;
}