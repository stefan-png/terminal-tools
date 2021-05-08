FLAGS = -std=c++17

/usr/local/bin/math: src/math.cpp
	g++ src/math.cpp -o /usr/local/bin/math $(FLAGS)

.PHONY: cleanusr
cleanusr:
	rm /usr/local/bin/math
