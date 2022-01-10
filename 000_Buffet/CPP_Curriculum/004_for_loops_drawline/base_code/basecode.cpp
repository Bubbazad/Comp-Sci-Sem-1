// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	int i;
	char Sym;
	int Print;
	char Position;
	cout<< "Choose a Symbol"<<endl;
	cin>> Sym;
	cout<< "Choose the number of times it is printed"<<endl;
	cin>> Print;
	cout<< "Horizintal or Vertical. H or V"<<endl;
	cin>> Position;
	if(Position == 'H'){
		for (i=0; i < Print; i++) {
		cout<< Sym;
		}
	}
	else if(Position == 'V'){
		for (i=0; i < Print; i++) {
		cout<< Sym<<endl;
		}
	}
	else{
		cout<<"Error"<<endl;
	}
}
