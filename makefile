all:myshell.h stringTokenizer.h pwd.h stringCompare.h exit.h cd.h pipe.h SingleCommand.h redirection.h StringToChar.h stringTokenizer.cpp stringCompare.cpp pwd.cpp exit.cpp pipe.cpp SingleCommand.cpp redirection.cpp StringToChar.cpp cd.cpp myshell.cpp
	g++ -g --std=c++11 stringTokenizer.h pwd.h exit.h cd.h pipe.h SingleCommand.h redirection.h StringToChar.h stringCompare.h myshell.h stringTokenizer.cpp pwd.cpp exit.cpp pipe.cpp SingleCommand.cpp redirection.cpp StringToChar.cpp cd.cpp stringCompare.cpp myshell.cpp
clean:
	rm -rf *.o *.gch mainshell
