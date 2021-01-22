#include <iostream>
#include <string>
using namespace std;
int main(){
	//atm
	string pin;
	int option;
	string npin;
	pin="0503";
	int balance=806;
	string upin;
	cout<<"welcome Nikita , enter your ATM PIN:";
	cin>>upin;
	if(upin==pin){
		do{
		
		cout<<"main Menu\n1. Withdraw Cash\n2. Deposit Cash\n3. Check Balance\n4. Change Pin\n5. Exit.\n";
		cout<<"Enter your Option:";
		cin>>option;
		switch(option){
			case 1:
				int amount;
				cout<<"\nEnter Amount To Withrow:";
				cin>>amount;
				if(amount<0)
				cout<<"You Have Entered Incorrect Amount. Please Check Again!!"<<endl;
				else
				if(amount<=balance){
					cout<<"\nCollect your cash!!";
					balance = balance-amount;
					cout<<"\n Your New Balance Is:"<<balance<<endl;
				}
				else{
					cout<<"\nYou dont have enough balance. \n last transaction was cancelled."<<endl;
					
				}
				break;
			case 2:
				int amount2 ;
				cout<<"\nEnter Your Cash To deposit:";
				cin>>amount2;
				balance = balance+amount2;
				cout<<"\nyour new balance is:"<<balance<<endl;
				break;
			case 3:
				cout<<"your balance is:"<<balance<<endl;
				break;
			case 4:
				cout<<"enter your old pin:";
				cin>>upin;
				if(upin==pin){
					cout<<"enter your new pin:";
					cin>>npin;
					cout<<"\n pin changed successfully."<<endl;
				} 
				else{
					cout<<"u have entered incorrect pin."<<endl;
				}
				break;
			case 5:
				cout<<"\nLast Transaction Was Cancelled!!";
				break;
			default:
				cout<<"you have entered incorrect option."<<endl;
				break;
	}
    }

	while(option!=5);	
	}		
	else
	cout<<"you have entered incorrect pin.";
	return 0;
}
