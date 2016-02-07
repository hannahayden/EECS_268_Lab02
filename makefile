DriversLicenseRecordLab: main.o DriversLicenseRecord.o Executive.o
	g++ -std=c++11 -g -Wall main.o DriversLicenseRecord.o Executive.o -o DriversLicenseRecordLab

main.o: main.cpp Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

DriversLicenseRecord.o: DriversLicenseRecord.cpp Executive.h
	g++ -std=c++11 -g -Wall -c DriversLicenseRecord.cpp Executive.h

Executive.o: Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

clean:
	rm *.o
