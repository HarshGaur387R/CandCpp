all: lolam

lolam: Main.o MakeFileClass.o
	g++ Main.o MakeFileClass.o -o lolam

Main.o: Main.cpp
	g++ -c Main.cpp

MakeFileClass.o: MakeFileClass.cpp
	g++ -c MakeFileClass.cpp

output:
	./lolam

clean:
	rm -rf *.o lolam