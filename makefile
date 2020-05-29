all:myshell.h stringTokenizer.h pwd.h stringCompare.h exit.h cd.h stringTokenizer.cpp stringCompare.cpp pwd.cpp exit.cpp cd.cpp myshell.cpp
	g++ -g --std=c++11 stringTokenizer.h pwd.h exit.h cd.h stringCompare.h myshell.h stringTokenizer.cpp pwd.cpp exit.cpp cd.cpp stringCompare.cpp myshell.cpp
clean:
	rm -rf *.o *.gch mainshell
