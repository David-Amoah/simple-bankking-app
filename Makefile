CXX = g++
CXXFLAGS = -std=c++23 -Werror -pedantic -g

#libs

TARGET = Bank
DEPS = Account.hpp BankSystem.hpp
OBJS = main.o Account.o BankSystem.o 

.PHONY: all clean lint


