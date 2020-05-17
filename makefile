all:myshell.h stringTokenizer.h stringTokenizer.cpp myshell.cpp
	g++ stringTokenizer.h myshell.h stringTokenizer.cpp myshell.cpp
clean:
	rm -rf *.o *.gch mainshell
