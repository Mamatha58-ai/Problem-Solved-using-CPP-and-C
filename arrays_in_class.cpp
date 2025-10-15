#include<iostream>
using namespace std;
class square{
	private :
		static int total_square;
	public:
	int length;
	string color;
	square(string color , int length){
	this->length = length;
	this->color = color ;
	total_square ++;
}
square(int length){
	this->length = length;
	this->color  = "unknown";
 total_square ++;
}
void area (){
   cout << length * length <<endl;
   
}
void getinfo(){
	cout << color << endl;
}
static void gettotal_square(){
	cout << total_square << endl;
}
};
int square::total_square = 0;
int main(){
	square s1[3] = {square("green" ,3 ),square("red" , 5),square(3)};
	int i = 0 ;
    for(i = 0 ; i < 3 ; i++){
    s1[i].area();
    s1[i].getinfo();
	}
	square::gettotal_square();
}
