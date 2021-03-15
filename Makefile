PROG:=main
SRCS:=main.cc Caracter.cc Constante.cc Div.cc Mult.cc Operador.cc Resta.cc Suma.cc var.cc expression.cc

CXX:=g++ -Wall

OBJS:=$(SRCS:.cc=.o)
DEPS:=$(SRCS:.cc=.d)

all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

%.o: %.cc
	$(CXX) -MMD -c $<

.PHONY: edit go

go: $(PROG)
	$(PROG)

edit:
	@geany -s -i $(SRCS) *.h &

clean:
	@rm -f $(PROG) *.o *.d core tags

-include $(DEPS)
