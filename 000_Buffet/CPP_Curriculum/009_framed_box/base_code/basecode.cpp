// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char Sym;
	int width;
	int countw = 0;
	int height;
	int counth = 0;
	cout<<"Insert a Symbol"<<endl;
	cin>>Sym;
	cout<<"The Width"<<endl;
	cin>>width;
	cout<<"The Height"<<endl;
	cin>>height;
	while(countw != width){
		cout<<Sym;
		countw = countw + 1;
	}
	cout<<""<<endl;
	countw = 0;
	while(counth != height - 2){
		cout<<Sym<<endl;
		counth = counth + 1;
	}
	counth = 0;
	while(countw != width){
		cout<<Sym;
		countw = countw + 1;
	}
	countw = 0;
	int a = 0;
	while(counth != height - 2){
		gotoxy(width, a+8);
		cout<<Sym<<endl;
		counth = counth + 1;
		a = a + 1;
	}
}
