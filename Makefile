CXX = g++
CXXFLAGS = -std=c++23 -Werror -pedantic -g

#libs

TARGET = Bank
DEPS = Account.hpp BankSystem.hpp
OBJS = main.o Account.o BankSystem.o 

.PHONY: all clean lint

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

Account.o: Account.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

BankSystem.o: BankSystem.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)

lint:
	cpplint *.hpp *.cpp

