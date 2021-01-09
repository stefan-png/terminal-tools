FLAGS = -std=c++17

bin/math: src/main.cpp
	g++ src/main.cpp -o bin/math $(FLAGS)

/usr/local/bin/math: src/main.cpp
	g++ src/main.cpp -o /usr/local/bin/math $(FLAGS)

.PHONY: test clean cleanusr
test: bin/math
	bin/math

clean:
	rm bin/math

cleanusr:
	rm /usr/local/bin/math