CXXFLAGS += --std=c++17 -Wall


main:main.cpp
	${CXX} ${CXXFLAGS} -o game main.cpp

clean:
	rm -f game
