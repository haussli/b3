CPP:=$(shell wx-config --cxx)
CPP:=clang++

all: scrollplay.o test.o
	$(CPP) `wx-config --libs --optional-libs` -o test test.o scrollplay.o
	
scrollplay.o: scrollplay.cpp
test.o: test.cc
.cpp.o .cc.o:
	$(CPP) -I. `wx-config --cxxflags` -c $<

clean:
	rm -f *.o
