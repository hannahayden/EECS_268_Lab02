//DriversLicenseRecord.cpp

//1. constructor with istream reference {read, creating instances}
//2. DLR constructor accepts all parameters, make executive class do the rest
//3. user no-parameter DLR constructor & use set methods

//Sample code for #1

#include "Executive.h"

class DriversLicenseRecord
{
  private:

  void exec(input stream)
  {
    input stream >> n;
    DriversLicenseRecord** records = new DriversLicenseRecord* [n];
    for int(i = 0; i <n; i++)
      records[i] = new DriversLicenseRecord(input stream);
  }
}
