compile:
	@g++ -c $(PROGRAM).c -o  $(PROGRAM).o

link:
	@g++  -I/usr/include -L/usr/lib/x86_64-linux-gnu $(PROGRAM).o -lGL -lglut -lGLU -o $(PROGRAM).out

run:
	@$(PROGRAM).out