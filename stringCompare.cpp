#include "stringCompare.h"

int StringCompare::compare(string a, string b){
	if (a.size() != b.size()){
		return -1;
	}
	else{
		for(int i = 0; i < a.size(); i++){
			if (a[i] != b[i]){
				return -1;
			}
		}
		return 0;
	}

}
