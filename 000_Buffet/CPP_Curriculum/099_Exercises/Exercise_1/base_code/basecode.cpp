// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	for(int i = 5; i <= 25; i = i + 1){
		cout<<i;
		cout<<" ";
	}
	cout<<endl;
	for(int x = 15; x >= 5; x = x - 1){
		cout<<x;
		cout<<" ";
	}
}
