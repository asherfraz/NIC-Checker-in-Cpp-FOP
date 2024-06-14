# include <iostream>
# include <fstream>
using namespace std;
/*  Write User Data into File */ 
	ofstream myfile;
/*	User-defined Functions no-input but output */
	void art(void);
	void input(void);
	void province(void);
	void division(void);
	void district(void);
	void gender(void);
	void footer(void);
/*	Global variables  */
	short int n[12];
	char name[20];
	
int main(){ 
	/*(***********************     Main Block      **************************)*/
//	This can store user data into file //
	myfile.open("CNIC Card Data.txt",ios::app);	
	myfile<<"========================================"<<endl;						
	myfile<<"\tCNIC Card Checker Data."<<endl;
	myfile<<"========================================"<<endl;
// This can clear all garbage values from Code
	system("cls");					
// This Prints Dialog box to Welcome
	system("msg * Welcome to CNIC Card Checker!");	
// This Prints Title of CNIC Card Checker Window
	system("title CNIC Card Checker");				
// This is for Prints NIC CARD CHECKER Art.
	repeat:
	art();			
// This is for input data from User...
	input();		
//	This if for checking Province details
	province();
//	This if for checking Division details	
	division();
//	This if for checking District details	
	district();
//*	Code for Family Number  *//
	cout<<" Family Number : "<<n[5]<<n[6]<<n[7]<<n[8]<<n[9]<<n[10]<<n[11]<<endl;
	myfile<<" Family Number : "<<n[5]<<n[6]<<n[7]<<n[8]<<n[9]<<n[10]<<n[11]<<endl;
//*	This is for Gender Checking Code  *//
	gender();
//**   Last Promotions  **//
	footer();
	cin.ignore();
    system("pause");
    myfile.close();
//	For Repeatatively excuted
	system("cls");
	goto repeat;
}

void art(){
	cout<<"\t  _   _ _____ _____    _____         _____  _____  	  _____ _    _ ______ _____ _  ________ _      		"<<endl;
   	cout<<"\t | \\ | |_   _/ ____|  / ____|  /\\   |  __ \\|  __  \\ 	 / ____| |  | |  ____/ ____| |/ /  ____| |\"\"\\\\	 	"<<endl;
  	cout<<"\t |  \\| | | || |      | |      /  \\  | |__) | |  | | 	| |    | |__| | |__ | |    | ' /| |__  | |  // 		"<<endl;
 	cout<<"\t | . ` | | || |      | |     / /\\ \\ |  _  /| |  | |	| |    |  __  |  __|| |    |  < |  __| | | //		"<<endl;
	cout<<"\t | |\\  |_| || |____  | |____/ ____ \\| | \\ \\| |__| |	| |____| |  | | |___| |____| . \\| |____| | \\ \\ 		"<<endl;
	cout<<"\t |_| \\_|_____|\\_____|  \\_____/_/   \\_| |  \\ \\_____/ 	 \\_____|_|  |_|______\\_____|_|\\_\\______|_|  \\_\\	"<<endl;
}
void input(void){
	cout<<"\n======================================================================================="<<endl;
	cout<<"\a\t\t\tToday Current Date & Time : "<<__DATE__<<" | "<<__TIME__<<endl; 
	system("color 3");
	cout<<" Enter Your Name : "; 		cin.getline(name,20);			//* cin>>name; OR cin.getline(var,value);  *//
	myfile<<" Card Holder Name: "<<name<<endl;
	cout<<"======================================================================================="<<endl;
	cout<<"\t\tNote : Enter CNIC Card Number (Single Number One by One)"<<endl;
	cout<<"======================================================================================="<<endl;
	system("color f");
	cout<<" Enter 1st Number  : ";		cin>>n[0];
	cout<<" Enter 2nd Number  : ";		cin>>n[1];
	cout<<" Enter 3rd Number  : ";		cin>>n[2];
	cout<<" Enter 4th Number  : ";		cin>>n[3];
	cout<<" Enter 5th Number  : ";		cin>>n[4];
	cout<<" Enter 6th Number  : - "<<endl;		
	cout<<" Enter 7th Number  : ";		cin>>n[5];
	cout<<" Enter 8th Number  : ";		cin>>n[6];
	cout<<" Enter 9th Number  : ";		cin>>n[7];
	cout<<" Enter 10th Number : ";		cin>>n[8];
	cout<<" Enter 11th Number : ";		cin>>n[9];
	cout<<" Enter 12th Number : ";		cin>>n[10];
	cout<<" Enter 13th Number : ";		cin>>n[11];
	cout<<" Enter 14th Number : - "<<endl;		
	cout<<" Enter 13th Number : ";		cin>>n[12];
	cout<<endl;
// Person details starts here
	system("color f0");
	cout<<"======================================================================================="<<endl;
	cout<<"\t=================*** Details About this Person ***=================  \n";
	cout<<"======================================================================================="<<endl;
	cout<<"\n Card Holder Name : "<<name<<endl;
	cout<<"\a CNIC Card Number : "<<n[0]<<n[1]<<n[2]<<n[3]<<n[4]<<"-"<<n[5]<<n[6]<<n[7]<<n[8]<<n[9]<<n[10]<<n[11]<<"-"<<n[12]<<endl;
	myfile<<" CNIC Number: "<<n[0]<<n[1]<<n[2]<<n[3]<<n[4]<<"-"<<n[5]<<n[6]<<n[7]<<n[8]<<n[9]<<n[10]<<n[11]<<"-"<<n[12]<<endl;
}

void province(void){
//** Code for Province n[0]			******************	PROVINCE ****************** 
	switch(n[0]){
		case 1 : cout<<" Province : Khyber Pakhtunkhwa [KPK]"<<endl;
				myfile<<" Province : Khyber Pakhtunkhwa [KPK]"<<endl;
				break;
		case 2 : cout<<" Province : Federally Administered Tribal Area [FATA]"<<endl;
				myfile<<" Province : Federally Administered Tribal Area [FATA]"<<endl;
				break;
		case 3 : cout<<" Province : Punjab [PB]"<<endl;
				myfile<<" Province : Punjab [PB]"<<endl;
				break;
		case 4 : cout<<" Province : Sindh [SD]"<<endl;
				myfile<<" Province : Sindh [SD]"<<endl;
				break;
		case 5 : cout<<" Province : Balochistan [BA]"<<endl;
				myfile<<" Province : Balochistan [BA]"<<endl;
				break;
		case 6 : cout<<" Province : Federal Capital "<<endl;
				myfile<<" Province : Federal Capital "<<endl;
				break;
		case 7 : cout<<" Province : Gilgit-Baltistan [GB]"<<endl;
				myfile<<" Province : Gilgit-Baltistan [GB]"<<endl;
				break;
		case 8 : cout<<" Province : Azad-Kashmir [AJK]"<<endl;
				myfile<<" Province : Azad-Kashmir [AJK]"<<endl;
				break;
		case 9 : cout<<" Card Made from Out-of-Pakistan "<<endl;
				myfile<<" Card Made from Out-of-Pakistan "<<endl;
				break;
		default : {
			system("color cf");
			cout<<"\t*!* Province : Incorrect Input."<<endl;
			myfile<<"\t*!* Province : Incorrect Input."<<endl;
			}
		}	
}

void division(void){
	//	Code for Divison n[1]						******************	DIVISION ****************** 
	if(n[0]==1){		// Divisions of Khyber Pakhtunkhwa [KPK]
	switch(n[1]){
		case 1 : {
			cout<<" Division : Bannu"<<endl;
			myfile<<" Division : Bannu"<<endl;
			break;
		}
		case 2 : {
			cout<<" Division : Dera Ismail Khan"<<endl;
			myfile<<" Division : Dera Ismail Khan"<<endl;
			break;
		}
		case 3 : {
			cout<<" Division : Hazara"<<endl;
			myfile<<" Division : Hazara"<<endl;
			break;
		}
		case 4 : {
			cout<<" Division : Kohat"<<endl;
			myfile<<" Division : Kohat"<<endl;
			break;
		}
		case 5 : {
			cout<<" Division : Malakand"<<endl;
			myfile<<" Division : Malakand"<<endl;
			break;
		}
		case 6 : {
			cout<<" Division : Mardan"<<endl;
			myfile<<" Division : Mardan"<<endl;
			break;
		}
		case 7 : {
			cout<<" Division : Peshawar"<<endl;
			myfile<<" Division : Peshawar"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* Division : Incorrect Input."<<endl;}
		}
	}
	else if(n[0]==2){	// All [FATA]'s
		cout<<" Division : Federally Administered Tribal Areas [FATA]. "<<endl;
		myfile<<" Division : Federally Administered Tribal Areas [FATA]. "<<endl;
	}
	else if(n[0]==3){	// Divisions of Punjab [PB]
		switch(n[1]){
		case 1 : {
			cout<<" Division : Bahawalpur "<<endl;
			myfile<<" Division : Bahawalpur "<<endl;
			break;
		}
		case 2 : {
			cout<<" Division : Dera Ghazi Khan "<<endl;
			myfile<<" Division : Dera Ghazi Khan "<<endl;
			break;
		}
		case 3 : {
			cout<<" Division : Faisalabad "<<endl;
			myfile<<" Division : Faisalabad "<<endl;
			break;
		}
		case 4 : {
			cout<<" Division : Gujranwala"<<endl;
			myfile<<" Division : Gujranwala"<<endl;
			break;
		}
		case 5 : {
			cout<<" Division : Lahore "<<endl;
			myfile<<" Division : Lahore "<<endl;
			break;
		}
		case 6 : {
			cout<<" Division : Multan "<<endl;
			myfile<<" Division : Multan "<<endl;
			break;
		}
		case 7 : {
			cout<<" Division : Rawalpindi"<<endl;
			myfile<<" Division : Rawalpindi"<<endl;
			break;
		}
		case 8 : {
			cout<<" Division : Sahiwal"<<endl;
			myfile<<" Division : Sahiwal"<<endl;
			break;
		}
		case 9 : {
			cout<<" Division : Sargodha"<<endl;
			myfile<<" Division : Sargodha"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* Division : Incorrect Input."<<endl;}
		}
	}
	else if(n[0]==4){	// Divisions of Sindh [SD]
		switch(n[1]){
		case 1 : {
			cout<<" Division : Banbhore "<<endl;
			myfile<<" Division : Banbhore "<<endl;
			break;
		}
		case 2 : {
			cout<<" Division : Hyderabad"<<endl;
			myfile<<" Division : Hyderabad"<<endl;
			break;
		}
		case 3 : {
			cout<<" Division : Karachi"<<endl;
			myfile<<" Division : Karachi"<<endl;
			break;
		}
		case 4 : {
			cout<<" Division : Sukkur"<<endl;
			myfile<<" Division : Sukkur"<<endl;
			break;
		}
		case 5 : {
			cout<<" Division : Larkana"<<endl;
			myfile<<" Division : Larkana"<<endl;
			break;
		}
		case 6 : {
			cout<<" Division : Mirpur Khas"<<endl;
			myfile<<" Division : Mirpur Khas"<<endl;
			break;
		}
		case 7 : {
			cout<<" Division : Shaheed Benazirabad"<<endl;
			myfile<<" Division : Shaheed Benazirabad"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* Division : Incorrect Input."<<endl;}
		}
	}
	else if(n[0]==5){	// Divisions of Balochistan [BA]
		switch(n[1]){
		case 1 : {
			cout<<" Division : Kalat"<<endl;
			myfile<<" Division : Kalat"<<endl;
			break;
		}
		case 2 : {
			cout<<" Division : Makran"<<endl;
			myfile<<" Division : Makran"<<endl;
			break;
		}
		case 3 : {
			cout<<" Division : Naseerabad"<<endl;
			myfile<<" Division : Naseerabad"<<endl;
			break;
		}
		case 4 : {
			cout<<" Division : Quetta"<<endl;
			myfile<<" Division : Quetta"<<endl;
			break;
		}
		case 5 : {
			cout<<" Division : Sibi"<<endl;
			myfile<<" Division : Sibi"<<endl;
			break;
		}
		case 6 : {
			cout<<" Division : Zhob"<<endl;
			myfile<<" Division : Zhob"<<endl;
			break;
		}
		case 7 : {
			cout<<" Division : Rakhshan"<<endl;
			myfile<<" Division : Rakhshan"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* Division : Incorrect Input."<<endl;}
		}
	}
	else if(n[0]==6){	// Divisions of Federal Capital > Islamabad
		switch(n[1]){
			case 1 : {
				cout<<" Division : Islamabad Capital Territory [ICT]"<<endl;
				myfile<<" Islamabad Capital Territory [ICT]"<<endl;
				break;
			}
			default : {
				system("color cf");
				cout<<"\t*!* Division : Incorrect Input."<<endl;}
		}
	}
	else if(n[0]==7){	// Divisions of Gilgit-Baltistan [GB]
		switch(n[1]){
		case 1 : {
			cout<<" Division : Baltistan"<<endl;
			myfile<<" Division : Baltistan"<<endl;
			break;
		}
		case 2 : {
			cout<<" Division : Gilgit"<<endl;
			myfile<<" Division : Gilgit"<<endl;
			break;
		}
		case 3 : {
			cout<<" Division : Diamer"<<endl;
			myfile<<" Division : Diamer"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* Division : Incorrect Input."<<endl;}
		}
	}
	else if(n[0]==8){	// Divisions of Azad-Kashmir [AJK]
		switch(n[1]){
		case 1 : {
			cout<<" Division : Mirpur"<<endl;
			myfile<<"Division : Mirpur"<<endl;
			break;
		}
		case 2 : {
			cout<<" Division : Muzaffarabad"<<endl;
			myfile<<" Division : Muzaffarabad"<<endl;
			break;
		}
		case 3 : {
			cout<<" Division : Poonch"<<endl;
			myfile<<" Division : Poonch"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* Division : Incorrect Input."<<endl;}
		}
	}
	else{
		system("color cf");
		cout<<"\t*!* Division : Incorrect Input."<<endl;
		myfile<<"\t*!* Division : Incorrect Input."<<endl;
	}
}

void district(void){	
//	Code for District									******************	DISTRICT ****************** 
//	******** For n[0] == 1 districts of KPK
	if(n[0]==1){
		if(n[1]==1){
			switch(n[2]){ // Districts of Bannu
		case 1 : {
			cout<<" District : Bannu"<<endl;
			myfile<<" District : Bannu"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Lakki Marwat"<<endl;
			myfile<<" District : Lakki Marwat"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==2){
			switch(n[2]){ // Districts of Dera Ismail khan
		case 1 : {
			cout<<" District : Dera Ismail Khan"<<endl;
			myfile<<" District : Dera Ismail Khan"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Tank district"<<endl;
			myfile<<" District : Tank district"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==3){
			switch(n[2]){ // Districts of Hazara
		case 1 : {
			cout<<" District : Abbottabad"<<endl;
			myfile<<" District : Abbottabad"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Batagram"<<endl;
			myfile<<" District : Batagram"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Haripur"<<endl;
			myfile<<" District : Haripur"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Kolai-Palas"<<endl;
			myfile<<" District : Kolai-Palas"<<endl;
			break;
		}
		case 5 : {
			cout<<" District : Lower Kohistan"<<endl;
			myfile<<" District : Lower Kohistan"<<endl;
			break;
		}
		case 6 : {
			cout<<" District : Mansehra"<<endl;
			myfile<<" District : Mansehra"<<endl;
			break;
		}
		case 7 : {
			cout<<" District : Upper Kohistan"<<endl;
			myfile<<" District : Upper Kohistan"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==4){
			switch(n[2]){ // Districts of Kohat
		case 1 : {
			cout<<" District : Hangu"<<endl;
			myfile<<" District : Hangu"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Karak"<<endl;
			myfile<<" District : Karak"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Kohat"<<endl;
			myfile<<" District : Kohat"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==5){
			switch(n[2]){ // Districts of Malakand
		case 1 : {
			cout<<" District : Buner"<<endl;
			myfile<<" District : Buner"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Lower Chitral"<<endl;
			myfile<<" District : Lower Chitral"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Lower Dir"<<endl;
			myfile<<" District : Lower Dir"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Malakand"<<endl;
			myfile<<" District : Malakand"<<endl;
			break;
		}
		case 5 : {
			cout<<" District : Shangla"<<endl;
			myfile<<" District : Shangla"<<endl;
			break;
		}
		case 6 : {
			cout<<" District : Swat"<<endl;
			myfile<<" District : Swat"<<endl;
			break;
		}
		case 7 : {
			cout<<" District : Upper Chitral"<<endl;
			myfile<<" District : Upper Chitral"<<endl;
			break;
		}
		case 8 : {
			cout<<" District : Upper Dir"<<endl;
			myfile<<" District : Upper Dir"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==6){
			switch(n[2]){ // Districts of Mardan
		case 1 : {
			cout<<" District : Mardan"<<endl;
			myfile<<" District : Mardan"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Swabi"<<endl;
			myfile<<" District : Swabi"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==7){
			switch(n[2]){ // Districts of Peshawar
		case 1 : {
			cout<<" District : Charsadda"<<endl;
			myfile<<" District : Charsadda"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Kyber"<<endl;
			myfile<<" District : Kyber"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Nowshera"<<endl;
			myfile<<" District : Nowshera"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Peshawar"<<endl;
			myfile<<" District : Peshawar"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
	}
//	******** For n[0] == 2 Districts of FATA
		else if(n[0]==2){
		if(n[1]<=9){
			switch(n[2]){
		case 1 : {
			cout<<" District : Bajour"<<endl;
			myfile<<" District : Bajour"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Mohamand"<<endl;
			myfile<<" District : Mohamand"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Khyber"<<endl;
			myfile<<" District : Khyber"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Kurram"<<endl;
			myfile<<" District : Kurram"<<endl;
			break;
		}
		case 5 : {
			cout<<" District : North Waziristan"<<endl;
			myfile<<" District : North Waziristan"<<endl;
			break;
		}
		case 6 : {
			cout<<" District : South Waziristan"<<endl;
			myfile<<" District : South Waziristan"<<endl;
			break;
		}
		case 7 : {
			cout<<" District : Orakzi"<<endl;
			myfile<<" District : Orakzi"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
	}
//	******** For n[0] == 3 districts of Punjab
		else if(n[0]==3){
		if(n[1]==1){	// Province Punjab > Division n[1]=1  Bahawalpur
			switch(n[2]){
		case 1 : {
			cout<<" District : Bahawalnagar"<<endl;
			myfile<<" District : Bahawalnagar"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Bahawalpur"<<endl;
			myfile<<" District : Bahawalpur"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Rahim Yar Khan"<<endl;
			myfile<<" District : Rahim Yar Khan"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
			}	
		}
		if(n[1]==2){	// Province Punjab > Division n[1]=2  Dera Ghazi Khan
			switch(n[2]){	
		case 1 : {
			cout<<" District : Dera Ghazi Khan"<<endl;
			myfile<<" District : Dera Ghazi Khan"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Layyah"<<endl;
			myfile<<" District : Layyah"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Muzaffargarh"<<endl;
			myfile<<" District : Muzaffargarh"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Rajanpur"<<endl;
			myfile<<" District : Rajanpur"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
			}
		}
		if(n[1]==3){	// Province Punjab > Division n[1]=3  Faisalabad
			switch(n[2]){	
		case 1 : {
			cout<<" District : Faisalabad"<<endl;
			myfile<<" District : Faisalabad"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Jhang"<<endl;
			myfile<<" District : Jhang"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Toba Tek Singh"<<endl;
			myfile<<" District : Toba Tek Singh"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Chiniot"<<endl;
			myfile<<" District : Chiniot"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
			}
		}
		if(n[1]==4){	// Province Punjab > Division n[1]=4  Gujranwala 
			switch(n[2]){
		case 1 : {
			cout<<" District : Gujranwala"<<endl;
			myfile<<" District : Gujranwala"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Sialkot"<<endl;
			myfile<<" District : Sialkot"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Mandi Bahauddin"<<endl;
			myfile<<" District : Mandi Bahauddin"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Gujrat"<<endl;
			myfile<<" District : Gujrat"<<endl;
			break;
		}
		case 5 : {
			cout<<" District : Narowal"<<endl;
			myfile<<" District : Narowal"<<endl;
			break;
		}
		case 6 : {
			cout<<" District : Hafizabad"<<endl;
			myfile<<" District : Hafizabad"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
			}
		}
		if(n[1]==5){	// Province Punjab > Division n[1]=5  Lahore 
			switch(n[2]){
		case 1 : {
			cout<<" District : Lahore"<<endl;
			myfile<<" District : Lahore"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Sheikhupura"<<endl;
			myfile<<" District : Sheikhupura"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Qasur"<<endl;
			myfile<<" District : Qasur"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Nankana Sahib"<<endl;
			myfile<<" District : Nankana Sahib"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
			}
		}
		if(n[1]==6){ // Province Punjab >  Division n[1]=6  Multan
			switch(n[2]){		  
		case 1 : {
			cout<<" District : Multan"<<endl;
			myfile<<" District : Multan"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Khanewal"<<endl;
			myfile<<" District : Khanewal"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Vehari"<<endl;
			myfile<<" District : Vehari"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Lodhran"<<endl;
			myfile<<" District : Lodhran"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
			}
		}
		if(n[1]==7){ // Province Punjab > Division n[1]=7  Rawalpindi 
			switch(n[2]){
		case 1 : {
			cout<<" District : Rawalpindi"<<endl;
			myfile<<" District : Rawalpindi"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Attock"<<endl;
			myfile<<" District : Attock"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Chakwal"<<endl;
			myfile<<" District : Chakwal"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Jhelum"<<endl;
			myfile<<" District : Jhelum"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
			}
		}
		if(n[1]==8){	// Province Punjab > Division n[1]=8  Sahiwal
			switch(n[2]){	 
		case 1 : {
			cout<<" District : Sahiwal"<<endl;
			myfile<<" District : Sahiwal"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Okara"<<endl;
			myfile<<" District : Okara"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Pakpattan"<<endl;
			myfile<<" District : Pakpattan"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
			}
		}
		if(n[1]==9){	// Province Punjab > Division n[1]=9  Sargodha
			switch(n[2]){	 
		case 1 : {
			cout<<" District : Sargodha"<<endl;
			myfile<<" District : Sargodha"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Bhakkar"<<endl;
			myfile<<" District : Bhakkar"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Mianwali"<<endl;
			myfile<<" District : Mianwali"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Khusab"<<endl;
			myfile<<" District : Khusab"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
			}
		}
	}
//	******** For n[0] == 4 districts of Sindh
	else if(n[0]==4){
		if(n[1]==1){	// District 1 Banbhore
			switch(n[2]){
		case 1 : {
			cout<<" District : Badin"<<endl;
			myfile<<" District : Badin"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Sujawal"<<endl; 
			myfile<<" District : Sujawal"<<endl; 
			break;
		}
		case 3 : {
			cout<<" District : Thatta"<<endl;
			myfile<<" District : Thatta"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==2){	// District 2 Hyderabad
			switch(n[2]){
		case 1 : {
			cout<<" District : Dadu"<<endl;
			myfile<<" District : Dadu"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Hyderabad"<<endl; 
			myfile<<" District : Hyderabad"<<endl; 
			break;
		}
		case 3 : {
			cout<<" District : Jamshoro"<<endl;
			myfile<<" District : Jamshoro"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Matiari"<<endl;
			myfile<<" District : Matiari"<<endl;
			break;
		}
		case 5 : {
			cout<<" District : Tando Allahayar"<<endl;
			myfile<<" District : Tando Allahayar"<<endl;
			break;
		}
		case 6 : {
			cout<<" District : Tando Muhammad Khan"<<endl;
			myfile<<" District : Tando Muhammad Khan"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==3){	// District 3 Karachi
			switch(n[2]){
		case 1 : {
			cout<<" District : Karachi Central"<<endl;
			myfile<<" District : Karachi Central"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Karachi East"<<endl; 
			myfile<<" District : Karachi East"<<endl; 
			break;
		}
		case 3 : {
			cout<<" District : Karachi South"<<endl;
			myfile<<" District : Karachi South"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Karachi West"<<endl;
			myfile<<" District : Karachi West"<<endl;
			break;
		}
		case 5 : {
			cout<<" District : Korangi"<<endl;
			myfile<<" District : Korangi"<<endl;
			break;
		}
		case 6 : {
			cout<<" District : Malir"<<endl;
			myfile<<" District : Malir"<<endl;
			break;
		}
		case 7 : {
			cout<<" District : Kemari"<<endl;
			myfile<<" District : Kemari"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==4){	// District 4 Sukkur
			switch(n[2]){
		case 1 : {
			cout<<" District : Ghotki"<<endl;
			myfile<<" District : Ghotki"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Khairpur"<<endl; 
			myfile<<" District : Khairpur"<<endl; 
			break;
		}
		case 3 : {
			cout<<" District : Sukkur"<<endl;
			myfile<<" District : Sukkur"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==5){	// District 5 Larkana
			switch(n[2]){
		case 1 : {
			cout<<" District : Jacobabad"<<endl;
			myfile<<" District : Jacobabad"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Kashmore"<<endl; 
			myfile<<" District : Kashmore"<<endl; 
			break;
		}
		case 3 : {
			cout<<" District : Larkana"<<endl;
			myfile<<" District : Larkana"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Qamber Shahdadkot"<<endl;
			myfile<<" District : Qamber Shahdadkot"<<endl;
			break;
		}
		case 5 : {
			cout<<" District : Shikarpur"<<endl;
			myfile<<" District : Shikarpur"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==6){	// District 6 Mirpur Khas
			switch(n[2]){
		case 1 : {
			cout<<" District : Mirpur Khas"<<endl;
			myfile<<" District : Mirpur Khas"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Tharparkar"<<endl; 
			myfile<<" District : Tharparkar"<<endl; 
			break;
		}
		case 3 : {
			cout<<" District : Umerkot"<<endl;
			myfile<<" District : Umerkot"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==7){	// District 7 Shaheed Benazirabad
			switch(n[2]){
		case 1 : {
			cout<<" District : Naushahro Feroze"<<endl;
			myfile<<" District : Naushahro Feroze"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Shaheed Benazir Abad"<<endl; 
			myfile<<" District : Shaheed Benazir Abad"<<endl; 
			break;
		}
		case 3 : {
			cout<<" District : Sanghar"<<endl;
			myfile<<" District : Sanghar"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
	}
//	******** For n[0] == 5 districts of Balochistan
	else if(n[0]==5){
		if(n[1]==1){	// Districts of Kalat
			switch(n[2]){
		case 1 : {
			cout<<" District : Awaran"<<endl;
			myfile<<" District : Awaran"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Kalat"<<endl;
			myfile<<" District : Kalat"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Khuzdar"<<endl;
			myfile<<" District : Khuzdar"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Lasbela"<<endl;
			myfile<<" District : Lasbela"<<endl;
			break;
		}
		case 5 : {
			cout<<" District : Mastung"<<endl;
			myfile<<" District : Mastung"<<endl;
			break;
		}
		case 6 : {
			cout<<" District : Shaheed Sikandarabad"<<endl;
			myfile<<" District : Shaheed Sikandarabad"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}if(n[1]==2){	// Districts of Makran
			switch(n[2]){
		case 1 : {
			cout<<" District : Gwadar"<<endl;
			myfile<<" District : Gwadar"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Kech"<<endl;
			myfile<<" District : Kech"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Panjgur"<<endl;
			myfile<<" District : Panjgur"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==3){	// Districts of Naseerabad
			switch(n[2]){
		case 1 : {
			cout<<" District : Kachhi"<<endl;
			myfile<<" District : Kachhi"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Jaffarabad"<<endl;
			myfile<<" District : Jaffarabad"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Jhal Magsi"<<endl;
			myfile<<" District : Jhal Magsi"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Naseerabad"<<endl;
			myfile<<" District : Naseerabad"<<endl;
			break;
		}
		case 5 : {
			cout<<" District : Sohbatpur"<<endl;
			myfile<<" District : Sohbatpur"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==4){	// Districts of Quetta
			switch(n[2]){
		case 1 : {
			cout<<" District : Killa Abdullah"<<endl;
			myfile<<" District : Killa Abdullah"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Pishin"<<endl;
			myfile<<" District : Pishin"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Quetta"<<endl;
			myfile<<" District : Quetta"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==5){	// Districts of Sibi
			switch(n[2]){
		case 1 : {
			cout<<" District : Sibi"<<endl;
			myfile<<" District : Sibi"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Kohlu"<<endl;
			myfile<<" District : Kohlu"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Dera Bugti"<<endl;
			myfile<<" District : Dera Bugti"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Ziarat"<<endl;
			myfile<<" District : Ziarat"<<endl;
			break;
		}
		case 5 : {
			cout<<" District : Harnai"<<endl;
			myfile<<" District : Harnai"<<endl;
			break;
		}
		case 6 : {
			cout<<" District : Lehri"<<endl;
			myfile<<" District : Lehri"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==6){	// Districts of Zhob 
			switch(n[2]){
		case 1 : {
			cout<<" District : Barkhan"<<endl;
			myfile<<" District : Barkhan"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Killa Saifullah"<<endl;
			myfile<<" District : Killa Saifullah"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Loralai"<<endl;
			myfile<<" District : Loralai"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Musakhel"<<endl;
			myfile<<" District : Musakhel"<<endl;
			break;
		}
		case 5 : {
			cout<<" District : Sherani"<<endl;
			myfile<<" District : Sherani"<<endl;
			break;
		}
		case 6 : {
			cout<<" District : Zhob"<<endl;
			myfile<<" District : Zhob"<<endl;
			break;
		}
		case 7 : {
			cout<<" District : Duki"<<endl;
			myfile<<" District : Duki"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==7){	// Districts of Rakhshan
			switch(n[2]){
		case 1 : {
			myfile<<" District : Chagai"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Washuk"<<endl;
			myfile<<" District : Washuk"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Nushki"<<endl;
			myfile<<" District : Nushki"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Kharan"<<endl;
			myfile<<" District : Kharan"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
	}
//	******** For n[0] == 6 Districts of Islamabad
	else if(n[0]==6){
		if(n[1]<9){
			switch(n[2]){
		case 1 : {
			cout<<" Sectors in Islamabad"<<endl;
			myfile<<" Sectors in Islamabad"<<endl;
			break;
		}
		default : {
			cout<<"\t*!* Incorrect Input"<<endl;
		}	
		}
	}
}
//	******** For n[0] == 7 Districts of Gilgit-Baltistan [GB]
	else if(n[0]==7){
	if(n[1]==1){		// District 1 Baltistan
			switch(n[2]){
		case 1 : {
			cout<<" District : Ghanche"<<endl;
			myfile<<" District : Ghanche"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Shigar"<<endl;
			myfile<<" District : Shigar"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Kharmang"<<endl;
			myfile<<" District : Kharmang"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Skardu"<<endl;
			myfile<<" District : Skardu"<<endl;
			break;
		}
		case 5 : {
			cout<<" District : Roundu"<<endl;
			myfile<<" District : Roundu"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==2){		// District 2 Gilgit
			switch(n[2]){
		case 1 : {
			cout<<" District : Gilgit"<<endl;
			myfile<<" District : Gilgit"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Ghizer"<<endl;
			myfile<<" District : Ghizer"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Hunza"<<endl;
			myfile<<" District : Hunza"<<endl;
			break;
		}
		case 4 : {
			cout<<" District : Nagar"<<endl;
			myfile<<" District : Nagar"<<endl;
			break;
		}
		case 5 : {
			cout<<" District : Gupis-Yasin"<<endl;
			myfile<<" District : Gupis-Yasin"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
		}	
		}
		if(n[1]==3){		// District 3 Diamer
			switch(n[2]){
				case 1 : {
					cout<<" District : Diamer"<<endl;
					myfile<<" District : Diamer"<<endl;
					break;
				}
				case 2 : {
					cout<<" District : Astore"<<endl;
					myfile<<" District : Astore"<<endl;
					break;
				}
				case 3 : {
					cout<<" District : Darel"<<endl;
					myfile<<" District : Darel"<<endl;
					break;
				}
				case 4 : {
					cout<<" District : Tangir"<<endl;
					myfile<<" District : Tangir"<<endl;
					break;
				}
				default : {
					system("color cf");
					cout<<"\t*!* District : Incorrect Input"<<endl;}
			}	
		}
	}
	//	******** For n[0] == 8 Districts of Azad-Kashmir [AJK]
	else if(n[0]==8){
	if(n[1]==1){		// District 1 Mirpur
			switch(n[2]){
		case 1 : {
			cout<<" District : Mirpur"<<endl;
			myfile<<" District : Mirpur"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Kotli"<<endl;
			myfile<<" District : Kotli"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Bhimber"<<endl;
			myfile<<" District : Bhimber"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
			}	
		}
		if(n[1]==2){		// District 2 Muzaffarabad
			switch(n[2]){
		case 1 : {
			cout<<" District : Muzaffarabad"<<endl;
			myfile<<" District : Muzaffarabad"<<endl;
			break;
		}
		case 2 : {
			cout<<" District : Hattian"<<endl;
			myfile<<" District : Hattian"<<endl;
			break;
		}
		case 3 : {
			cout<<" District : Neelam Valley"<<endl;
			myfile<<" District : Neelam Valley"<<endl;
			break;
		}
		default : {
			system("color cf");
			cout<<"\t*!* District : Incorrect Input."<<endl;}
			}	
		}
		if(n[1]==3){		// District 3 Poonch
			switch(n[2]){
				case 1 : {
					cout<<" District : Poonch"<<endl;
					myfile<<" District : Poonch"<<endl;
					break;
				}
				case 2 : {
					cout<<" District : Haveli"<<endl;
					myfile<<" District : Haveli"<<endl;
					break;
				}
				case 3 : {
					cout<<" District : Bagh"<<endl;
					myfile<<" District : Bagh"<<endl;
					break;
				}
				case 4 : {
					cout<<" District : Sudhanoti"<<endl;
					myfile<<" District : Sudhanoti"<<endl;
					break;
				}
				default : {
					system("color cf");
					cout<<"\t*!* District : Incorrect Input."<<endl;}
			}	
		}
	}
	else{	
		system("color cf");
		cout<<" *!* District Not Exist!"<<endl;	
		myfile<<"\t*!* District Not Exist!"<<endl;	
	}		
}
void gender(void){
	//*	Code for Gender n[12]  *//
	if(n[12]>=0 && n[12]<10){
		for(int i=0 ; n[12]<10 ; i++){
			if(i==n[12]){
				if(i%2==0){
					cout<<" Gender : Female"<<endl;
					myfile<<" Gender : Female\n\n";
					break;
				}
				else{
					cout<<" Gender : Male"<<endl;
					myfile<<" Gender : Male\n\n";
					break;
				}
			}
		}
	}
	else{
		system("color cf");
		cout<<"\t *!* Gender : Incorrect Input."<<endl;
		myfile<<"\t *!* Gender : Incorrect Input."<<endl;
	}
}

void footer(void){
	cout<<"\n\n\a======================================================================================="<<endl;
	cout<<"\t[ White scrn ] = Correct Info\t,\t [ Red scrn ] = Incorrect Info"<<endl;
	cout<<"\a======================================================================================="<<endl;
	cout<<"\t\tPrepared By :   \n";
	cout<<"\t\t\t    Asher Fraz Anjum\t@asherfraz\n\t\t\t    Ameer Yousaf Ali\t@ameeryousufalibhatti \n\t\t\tMuhammad Hamza Khalid\t@HamzahKhalid"<<endl;
	cout<<"\n======================================================================================="<<endl;
	cout<<"================================== End of Program ====================================="<<endl;
	cout<<"==================================== Thanks You! ======================================"<<endl;
	cout<<"=======================================================================================\n\a"<<endl;
}
