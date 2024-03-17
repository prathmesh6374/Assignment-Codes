/*Create a class named weather report that holds a
daily weather report with data members’
day_of_month, hightemp, lowtemp, a mount_rain
and amount_snow. Use different types of
constructors to initialize the objects. Also include a
function that prompts the user and sets values for
each field so that you can override the default
values. Write a menu driven program in C++ with
options to enter data and generate monthly report
that displays average of each attribute*/
#include<iostream>
using namespace std;
class wether_report
{
public:
int day_of_month, hightemp, lowtemp, amount_rain,amount_snow;
wether_report(){
	day_of_month=0;
	 hightemp=0;
	  lowtemp=0; amount_rain=0;
	  amount_snow=0;
}

 public:
 	void getdata(){
 		cout <<"enter the value of the day"<<endl;
 		cin>>day_of_month;
 		cout <<"enter the value of the high temperature"<<endl;
 		cin>>hightemp;
 		cout <<"enter the value of the lowest temperature"<<endl;
 		cin>>lowtemp;
 		cout <<"enter the value of the amount of rain"<<endl;
 		cin>>amount_rain;
 		cout <<"enter the value of the amount   of snow"<<endl;
 		cin>>amount_snow;
 		
	 }
	 const void display ()
	{
		cout <<"Day"<<day_of_month<<endl;
		cout<<"high temperature"<<hightemp<<endl;
		cout<<"low temperature"<<lowtemp<<endl;
		cout << "amount of rain"<<amount_rain<<endl;
		cout<< "amount of snow"<<amount_snow<<endl;
		
	}
	
};
int main(){
	int ch;
	wether_report dd[31];
	while(1){
		cout << "**********please select any one***********\n1)Record for one day \n2)Record for  one month \n3)Average of ALL\n4)exit";
	cout << "\nenter your choice\n";
	cin>>ch;
	switch(ch){
		case 1:
			int day;
			cout << "enter the day of the Month\n";
			cin>> day;
			if(day<1 || day>31){
				cout << "please enter day between 1 & 31\n";
			}
			else{
			
			dd[day-1].getdata();
			cout << "\nRecord for day "<<day<<" entered Successfully";}
			break;
		case 2:
		 {
		  int count=0, i;
		  for(i=0;i<31;i++){ 
		  if(dd[i].amount_rain!=0){
		  	dd[i].display(); 
		  }
		  }
	
	 break;
			 }
			
	
          case 3:
          	{
			  
             float  htemp=0,ltemp=0,rain=0,snow=0,count=0;
             int i;
             for(i=0;i<31;i++){
             	if(dd[i].day_of_month !=0){
             		htemp=htemp+dd[i].hightemp;
             		ltemp=ltemp+dd[i].lowtemp;
             		rain=rain+dd[i].amount_rain;
             		snow=snow+dd[i].amount_snow;
             		count++;
				 }
			 }
			 snow=snow/count;
			 rain=rain/count;
			 ltemp=ltemp/count;
			 htemp=htemp/count;
			 cout<<"the Average of the Wether Table is \n";
			 cout <<"Snow="<<snow<<endl;
			 cout <<"Heigh_Temperature="<<htemp<<endl;
			 cout <<"Low_Temperature="<<ltemp<<endl;
			 cout <<"Rain="<<rain<<endl;
			 
			 break;
			 }
		case 4:
	 exit(0);
     	default:
	  cout << "invalid operation \n";		
		 	 }
	
			

			
		}
return 0;
	}
	
