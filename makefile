make: main.o
	$(CXX) main.o -o lit-algos -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	$(CXX) -c main.cpp