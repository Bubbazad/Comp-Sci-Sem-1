// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x;
	int y;
	cout<< "Type in 2 integers" <<endl;
	cin>> y;
	cin>> x;
	int z = x * y;
	cout<< "Your answer is " << z <<endl;
}
