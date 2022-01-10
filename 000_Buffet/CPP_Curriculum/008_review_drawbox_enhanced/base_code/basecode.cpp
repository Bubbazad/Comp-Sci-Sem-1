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
	int x;
	int y;
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
	while(counth != height){
	gotoxy(x,y);
	while(countw != width){
		cout<<Sym;
		countw = countw + 1;
	}
	cout<<""<<endl;
	counth = counth + 1;
	countw = 0;
	y = y + 1;
	}
}
