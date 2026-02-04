DEPS= sort
compile: main.cpp
	 g++ main.cpp -o $(DEPS)

run: $(DEPS)
	 ./$(DEPS)  $(var)

clean: $(DEPS)
	 rm $(DEPS)

mesure: $(DEPS)
	 time ./$(DEPS)  $(var)