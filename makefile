make: main.o Drawer.o Algorithm.o
	$(CXX) main.o Drawer.o Algorithm.o -o lit-algos -lsfml-graphics -lsfml-window -lsfml-system

main.o: src/main.cpp
	$(CXX) -c src/main.cpp src/Drawer.h src/Algorithm.h

Drawer.o: src/Drawer.cpp
	$(CXX) -c src/Drawer.cpp src/Algorithm.h

Algorithm.o: src/Algorithm.cpp
	$(CXX) -c src/Algorithm.cpp src/Drawer.h