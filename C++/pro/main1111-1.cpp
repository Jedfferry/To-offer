#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Line{
	public:
		void setLength(double len);
		double getLength(void);
		Line(double len);//构造函数
		~Line();
		Line(const Line &obj);//拷贝构造函数 
		
		friend void printlength(Line line); 
	private:
		double length; 
}; 
Line::Line(double len):length(len)
{
	cout<<"Object is being created."<<endl;
}
Line::~Line(){
	cout<<"Object is being deleted."<<endl;
}
Line::Line(const Line &obj)
{
	cout<<"Object is being copied."<<endl;
	length=obj.length;
}
void Line::setLength(double len)
{
	length=len;
}
double Line::getLength()
{
	return length;
}
void printlength(Line line){
	cout<<line.length<<endl;
}
int main(int argc, char** argv) {
	Line line(6.0);
//	cout<<line.getLength()<<endl;
//	Line line2=line;
//	cout<<line2.getLength()<<endl;
	printlength(line);
	return 0;
}
