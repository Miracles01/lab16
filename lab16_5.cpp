#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int *l,int *o,int *v,int *e){
	int x[]={*l,*o,*v,*e};

	for(int i = 0; i<4 ; i++){
		int y = rand()%4 , z= rand()%4;

		swap(x[y],x[z]);

	} 

	*l = x[0];
	*o = x[1];
	*v = x[2];
	*e = x[3];
}

