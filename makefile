# Source: http://web.engr.oregonstate.edu/~rookert/cs162/03.mp4

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = fileAdder.o minmax.o numGuess.o
SRCS = fileAdder.cpp minmax.cpp numGuess.cpp

all: fileAdder minmax numGuess

fileAdder: fileAdder.o
	$(CXX) $(CXXFLAGS) fileAdder.o -o fileAdder

minmax: minmax.o
	$(CXX) $(CXXFLAGS) minmax.o -o minmax

numGuess: numGuess.o
	$(CXX) $(CXXFLAGS) numGuess.o -o numGuess

$(OBJS): $(SRCS)
	$(CXX) $(CXXFLAGS) -c $(@:.o=.cpp)

clean:
	rm *.o fileAdder minmax numGuess sum.txt
