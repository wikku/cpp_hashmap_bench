CXXFLAGS = -O2
all:	gp map unordered_map tr1

gp: main.cpp gp.cpp
	$(CXX) main.cpp gp.cpp $(CXXFLAGS) -o gp

map: main.cpp map.cpp
	$(CXX) main.cpp map.cpp $(CXXFLAGS) -o map

unordered_map: main.cpp unordered_map.cpp
	$(CXX) main.cpp unordered_map.cpp $(CXXFLAGS) -o unordered_map

tr1: main.cpp tr1.cpp
	$(CXX) main.cpp tr1.cpp $(CXXFLAGS) -o tr1

