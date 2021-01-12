#include<iostream>
using namespace std;
int main()
{
	float inch,centimeter,meter,yard,foot,choice;
  cout<<"entre the vlaue in inches";
  cin>>inch;
  cout<<"1-foot\n2-centimeter\n3-yard\n4-meter"<<endl;
  cin>>choice;
 
 if(choice==1){
 foot=inch/12;
 cout<<"Foot="<<foot;
}else if(choice==2){
	centimeter=inch/2.54;
	cout<<"centimenter="<<centimeter;
}else if(choice==3){
	yard=inch/36;
	cout<<"yard="<<yard;
}else if(choice==4){
	meter=inch/39.37;
	cout<<"meter="<<meter;
}
}
