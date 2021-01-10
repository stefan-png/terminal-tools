FLAGS = -std=c++17

bin/math.out: src/main.cpp
	g++ src/main.cpp -o bin/math.out $(FLAGS)

/usr/local/bin/math: src/main.cpp
	g++ src/main.cpp -o /usr/local/bin/math $(FLAGS)

.PHONY: test clean cleanusr
test: bin/math.out
	bin/math.out

clean:
	rm bin/math

cleanusr:
	rm /usr/local/bin/math