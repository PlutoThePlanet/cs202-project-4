store: main.cpp IPayable.o employee.o manager.o shopWorker.o
	g++ -std=c++11 main.cpp IPayable.o employee.o manager.o shopWorker.o -o store

IPayable.o: IPayable.h IPayable.cpp
	g++ -c -std=c++11 IPayable.cpp

employee.o: employee.h employee.cpp
	g++ -c -std=c++11 employee.cpp

manager.o: manager.h manager.cpp
	g++ -c -std=c++11 manager.cpp

shopWorker.o: shopWorker.h shopWorker.cpp
	g++ -c -std=c++11 shopWorker.cpp

clean:
	rm *.o store