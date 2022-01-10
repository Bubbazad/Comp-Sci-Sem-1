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
	int x;
	int y;
	int counth = 0;
	cout<<"Insert a Symbol"<<endl;
	cin>>Sym;
	cout<<"The Width"<<endl;
	cin>>width;
	cout<<"The Height"<<endl;
	cin>>height;
	cout<<"X Coordinate"<<endl;
	cin>>x;
	cout<<"Y Coordinate"<<endl;
	cin>>y;
	while(countw != width){
		gotoxy(x, y);
		cout<<Sym;
		countw = countw + 1;
		x = x + 1;
	}
	countw = 0;
	while(counth != height){
		gotoxy(x - 1,y);
		cout<<Sym;
		counth = counth + 1;
		y = y + 1;
	}
	counth = 0;
	while(countw != width){
		gotoxy(x - width, y);
		cout<<Sym;
		countw = countw + 1;
		x = x + 1;
	}
	countw = 0;
	while(counth != height){
		gotoxy(x - (width + width), y - height);
		cout<<Sym;
		counth = counth + 1;
		y = y + 1;
	}
}
