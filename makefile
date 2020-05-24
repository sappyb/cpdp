all:myshell.h stringTokenizer.h pwd.h stringCompare.h exit.h stringTokenizer.cpp stringCompare.cpp pwd.cpp exit.cpp myshell.cpp
	g++ -g stringTokenizer.h pwd.h exit.h stringCompare.h myshell.h stringTokenizer.cpp pwd.cpp exit.cpp stringCompare.cpp myshell.cpp
clean:
	rm -rf *.o *.gch mainshell
