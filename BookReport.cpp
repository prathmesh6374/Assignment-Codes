#include<iostream>
using namespace std;
class  books{
	public:
		char title[100], author[90],publisher[100];
		int price;
		int avilable_stocks;
    public:
    	books(){
    		title[0]='\n'; // assigning Null Value to data Members
    		author[0]='\n';
    		publisher[0]='\n';
    		price=0;
    		avilable_stocks=0;
		}
		void getdata(){
		cout <<"enter the  title"<<endl;
 		cin>>title;
 		cout <<"enter the author"<<endl;
 		cin>>author;
 		cout <<"enter the value of the publisher"<<endl;
 		cin>>publisher;
 		cout <<"enter the value of the price"<<endl;
 		cin>>price;
 		cout <<"enter the value of total stocks avilable"<<endl;
 		cin>>avilable_stocks;
		}
		void display(){
			cout<<"\nThe details is \n";
			cout<<"Title=>"<<title<<endl;
			cout <<"Author=>"<<author<<endl;
			cout <<"Publisher=>"<<publisher<<endl;
			cout<<"price is =>"<<price<<endl;
			cout <<"Number of books Avilable=>"<<avilable_stocks<<endl;
			
			
		}
};
int main(){
	int t_books,ch,total;
	cout << "enter the total number of different books you wanted to create\n";
	cin>>t_books;
	books bb[t_books];
	while(1){
		int ch,temp=0;
		cout <<"****************Choose Any one*********** \n";
		cout<<"1)Add\n2)Display\n3)Search\n4)Update\n5)";
		cout << "\nEnter your choice\n";
		cin>>ch;
		switch(ch){
			case 1:{
				break;
			
				int i;
				cout << "enter the total number of Books you wanted to insert";
				cin>> total;
				if(total<1 || total > t_books){
					cout<<"out of range ";
				}
				else{
				
				for(i=temp;i<total;i++){
					bb[i].getdata();
				}}
			break;}
		case 2:
		   		{ int i=0;
		   		for(i=0;i<total;i++){
		   			bb[i].display();
				   }
				   break;
				   }
				   
		
		case 3:{
			
		
			char b_search[90];
			cout <<"enter the title book you wanted to search"<<endl;
			cin>>b_search;
			int i=0;
			for(int i=0;i<total;i++){
				if(strcmp(b_search,bb[i].title)==0){
					cout << "book Found"<<endl;
					cout << "the details of the book is\n"<<endl;
					bb[i].display();					
				}
			}
			break;
			}
			
	case 4:
	{
		char title[90];
		int i=0;
		cout << "enter the title of book you wanted to update"<<endl;
		cin >> title;
		
	for(int i=0;i<total;i++){
				if(strcmp(title,bb[i].title)==0){
					cout << "book Found"<<endl;
					cout << "the New Details of the book is\n"<<endl;
					bb[i].getdata();					
				}
			}
		
		break;
		
	}
	 
		
	case 5:
	  
	  exit(0);
	  	default :
		cout << "invalid operations";
	  }

		
	
}}

