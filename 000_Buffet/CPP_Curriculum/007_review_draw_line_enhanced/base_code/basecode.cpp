// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char Sym;
	int LL;
	int i;
	int x;
	int y;
	cout<<"Insert a symbol"<<endl;
	cin>>Sym;
	cout<<"Line Length"<<endl;
	cin>>LL;
	cout<<"X coordinate"<<endl;
	cin>>x;
	cout<<"Y coordinate"<<endl;
	cin>>y;
	gotoxy(x,y);
		for (i=0; i < LL; i++) {
		cout<< Sym;
		}
}
