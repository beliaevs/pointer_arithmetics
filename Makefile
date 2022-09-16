pointers.exe: pointers.cpp
	g++ -o pointers.exe -Wall -Wpedantic -Wextra -std=c++17 pointers.cpp

clean:
	rm pointers.exe
	