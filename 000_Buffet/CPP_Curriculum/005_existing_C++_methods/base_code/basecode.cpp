// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
		int i;
	char Sym;
	int Print;
	char Position;
	int count = 1;
	int Pos = 1;
	cout<< "Choose a Symbol"<<endl;
	cin>> Sym;
	cout<< "Choose the number of times it is printed"<<endl;
	cin>> Print;
	cout<< "Horizintal, Vertical, or Diagnol H, V, or D"<<endl;
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
	else if(Position == 'D'){
		while(count != Print){
		gotoxy(Pos, 10);
		cout<< Sym<<endl;
		count = count + 1;
		Pos = Pos + 1;
		}
	}
	else{
		cout<<"Error"<<endl;
	}
}
