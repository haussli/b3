CPP:=$(shell wx-config --cxx)
CPP:=clang++
WXC=wx-config

all: scrollplay.o test.o
	$(CPP) `$(WXC) --libs --optional-libs` -o test test.o scrollplay.o
	
scrollplay.o: scrollplay.cpp
test.o: test.cc
.cpp.o .cc.o:
	echo $WXC --cxxflags
	$(CPP) -I. `$(WXC) --cxxflags` -c $<

clean:
	rm -f *.o
