#include <iostream>
#include <string>
#include <iomanip>
#include <ctime> //a library import for time

using namespace std; 

int main(){

        //for creating an account
		string f_name;			//first name of account holder 
		string m_name;			//middle name
		string l_name;			//last name
		string account_no;		//account number
		string account_typ;		//account type
		string pin;				//account password
		string address;
		string zip_code;
		string tel_num;
		string cel_num;
		string email;
		string sex;
		string nationality;
		int age;    // age
        
		int option;  //response for the main menu
		int input;  //response for the menu in existing accounts
        int response; //response for the wrong amount deposited in the machine
		int x; //for the response portion in creating a new account
		int y; //for the response portion in the help center option
		int z; //for the response portion in the exit option
        float deposit;			// for deposit 
	    float withdraw;			// for withdrawal
        float Interest, Principal, Rate, Time; //interest, principal interest formula, rate, and time respectively
        float comp_Rate; //rate in percent for interest computation 
        float comp_Time; //time per year for interest computation
		double bal_carl = 5678.99; //balances
		double bal_clariza = 2517.83;
		double bal_lib = 100000000000.00;
	    double bal_mau = 1123445345.13;
	    double bal_ysa = 34813183461834.12;
	    double bal_evi = 123145345.32;
    	double bal_mark = 99999999999999999.99;
        
			

do{
	cout<<"\n\t\t\tSANTO TOMAS (STC) BANK ";
		cout<<"\n\n\t 1. Create a new account";
		cout<<"\n\t 2. Existing account";
		cout<<"\n\t 3. Interest Calculator";
        cout<<"\n\t 4. Help Center";
		cout<<"\n\t 5. Exit";
		cout<<"\n\n\tSelect menu: ";
		cin>> option;
		
		cout<<"\n------------------------------------------------------------------------------------------------------------------------";

	switch (option){
		case 1: //Create a new account
			do{ 
			cout<<"\n\tPlease enter the following basic information about yourself: ";
			cout<<"\n\t\tAge: \t";
			cin>>age;
            cin.ignore();

            //!cin is a condition that is triggered when the data type of the input is not as intended in the initialization, e.g. when age is initialized as an integer and a letter is input
            while (!cin) {
        cout << "\n!! Invalid input, please enter a number. !!\n" ;
        cout<<"\n\t\tAge: \t\n";
        cin.clear();
        cin.ignore();
        cin >> age;
    }
			if (age<18)
			cout<<"\n\n\n\n\t\tSorry. You are not eligible to open a bank account through this program.";
		
			else
			{cout<<"\n\t\tFirst Name: \t\t\t\t";
			getline(cin, f_name);
			
			cout<<"\t\tMiddle Name: \t\t\t\t";
			getline(cin, m_name);
			
			cout<<"\t\tLast Name: \t\t\t\t";
			getline(cin, l_name);
			
			cout<<"\t\tPermanent Mailing Address: \t\t";
			getline(cin, address); 
			
			cout<<"\t\tArea Zip Code: \t\t\t\t";
			getline(cin, zip_code);
			
			cout<<"\t\tTelephone Number: \t\t\t";
			getline(cin, tel_num); 
			
			cout<<"\t\tCellphone Number: \t\t\t";
			getline(cin, cel_num); 
			
			cout<<"\t\tE-mail Address: \t\t\t";
			getline(cin, email); 
			
			cout<<"\t\tSex: \t\t\t\t\t";
			getline(cin, sex); 
			
			cout<<"\t\tNationality: \t\t\t\t";
			getline(cin, nationality); 
			
			cout<<"\t\tAccount Type: \t\t\t\t";
			getline(cin, account_typ); 
			
			cout<<"\n------------------------------------------------------------------------------------------------------------------------";
			
			cout<<"Please review the details below: "; //Para mareview lang nila ulit details nila 
			
			cout<<"\n\n\t\tFirst Name: \t\t\t\t"<<f_name;
			cout<<"\n\t\tMiddle Name: \t\t\t\t"<<m_name;
			cout<<"\n\t\tLast Name: \t\t\t\t"<<l_name;
			cout<<"\n\t\tPermanent Mailing Address: \t\t"<<address;
			cout<<"\n\t\tArea Zip Code: \t\t\t\t"<<zip_code;
			cout<<"\n\t\tTelephone Number: \t\t\t"<<tel_num;
			cout<<"\n\t\tCellphone Number: \t\t\t"<<cel_num;
			cout<<"\n\t\tE-mail Address: \t\t\t"<<email;
			cout<<"\n\t\tSex: \t\t\t\t\t"<<sex;
			cout<<"\n\t\tNationality: \t\t\t\t"<<nationality;
			cout<<"\n\t\tAccount Type: \t\t\t\t"<<account_typ;
			
			cout<<"\n\n\t\tAre these information all correct? \n\t\t1. Yes\n\t\t2. No";
			cout<<"\n\t\tInput answer: ";
			cin>>x;
			cin.ignore(); 
			
            while ((x!=1 && x!=2)||!cin){
                  cout << "\n!! Invalid input, please enter a valid input. !!\n" ;
        cout<<"\n\n\t\tAre these information all correct? \n\t\t1. Yes\n\t\t2. No";
			cout<<"\n\t\tInput answer: ";
        cin.clear();
        cin.ignore();
        cin >> x;
            } //this while loop was put first before the if statement because if the statement isnt true, then the while loop would not be executed. cannot put it in an else statement bc it would leave out x=2 entirely.

			if (x==1){
			cout<<"\n\t\t\tYou have successfully registered your account. \n\t\t\tPlease wait within 24 hours for an email confirmation. Thank you!";}

			}} while (x==2);
			break;
						
		case 2: //Existing account 
			cout<<"\n\tEnter the following: ";
			cout<<"\n\t\tAccount Number: \t"; //after nito account name na lalabas 
			cin>>account_no;
			cin.ignore();
			
//Carl Colinares
			if (account_no == "12345678")	
		{
            cout << "\n\tEnter 'X' to exit.";
			cout<<"\n\n\t\t\tCarl Joshua Colinares";
			cout<<"\n\t\t\tEnter PIN: \t";
			getline (cin, pin);
			
            while (pin !="1234" && pin!="x" && pin!="X") {
        cout << "\n\t!! Incorrect PIN. !!" ;
        cout << "\n\tEnter 'X' to exit.";
        cout<<"\n\n\t\t\tCarl Joshua Colinares";
		cout<<"\n\t\t\tEnter PIN: \t";
        getline (cin, pin);
        
        }
            
		if (pin == "1234")
			{
				cout<<"\n\t\tSelect transaction: ";
				cout<<"\n\t\t\t1. Deposit"; 
				cout<<"\n\t\t\t2. Withdraw";
				cout<<"\n\t\t\t3. Check Balance"; //check balance lang po meron
                cout<<"\n\t\t\t4. Generate Bank Statement";
				cout<<"\n\t\t\t5. Exit";
				cout<<"\n\n\t\t\tInput answer: "; 
				cin>>input;
				
				switch (input)
				{
					case 1:
                    {
                        cout << "\n\n\t\tDeposit amount: \t";
						cin >> deposit;

                    while(deposit<=0){
        cout << "\n!! Invalid input, please enter a valid amount. !!\n" ;
        cout<<"\n\n\t\tDeposit amount: \t";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> deposit;
                    }

						cout << "\n\n\t\tDo you want a receipt? \n\t\t\t1. Yes\n\t\t\t2. No";
						cout << "\n\n\t\t\tInput: ";
						cin >> input;
							if (input == 1)
							{
								cout << "\n\n\t\tPlease insert the amount in the machine.\t";
								cout << "\n\t\tType 1 to proceed.\t";
								cout << "\n\n\t\t\tInput: ";
								cin >> response;
									if (response == 1)
									{ // idea ko po dito is if mali yung pagkakalagay ng money sa machine.
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_carl + deposit) << endl;
										cout << "\n\n\t\tPlease take the receipt.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									} // feel free nalang pong tanggalin if redundant/unnecessary.
									else
										cout << "\n\t\tInvalid input. Please try again. Transaction Failed." << endl;
							}
							else
							{
								cout << "\n\n\t\tPlease insert the amount in the machine.\t";
								cout << "\n\t\tType 1 to proceed.\t";
								cout << "\n\n\t\t\tInput: ";
								cin >> response;
									if (response == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_carl + deposit) << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
										cout << "\n\t\tInvalid input. Please try again. Transaction Failed." << endl;
							}
					break;
                    }
						
					case 2: {
						cout << "\n\n\t\tWithdraw amount: \t";
						cin >> withdraw;
							if (withdraw < bal_carl)
							{
								cout << "\n\n\t\tDo you want a receipt? \n\t\t1. Yes\n\t\t2. No";
								cout << "\n\n\t\t\tInput: ";
								cin >> input;
									if (input == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_carl - withdraw) << endl;
										cout << "\n\n\t\tPlease take the money and the receipt.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_carl - withdraw) << endl;
										cout << "\n\n\t\tPlease take the money.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
							}
							else
								cout << "\n\n\t\tInsufficient Funds. Transaction Failed." << endl;
					break;
						}
						
					
					case 3: 
						cout<<"\n\t\t\tBalance: \t"<<fixed<<setprecision(2)<<bal_carl<<endl;
						break;
					case 4:{
                         // current date/time
   time_t now = time(0);
   
   // convert to string form
   char* dt = ctime(&now);

            cout<<"\n\n**Please enter full screen for the best experience.**\n\n";
            cout<<"\nAccount No.: "<<account_no; //Account Number
            cout<<"\nName: Carl Joshua Colinares\n"; //Name
            cout<< "Date and Time: "<< dt<<"\n"; //Date Today
            cout<<"Transactions\n";
            cout<<"----------------------------------\n";

         cout
        << left
        << setw(15)
        << "DATE"
        << left
        << setw(20)
        << "DESCRIPTION"
        << left
        << setw(15)
        << "CREDIT"
        << left
        << setw(15)
        << "DEBIT"
        << setw(15)
        << "BALANCE"
        <<endl;

        cout
        << left
        << setw(15)
        << "04/01/2023"
        << left
        << setw(20)
        << "Payment - UNIQLO"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "1,000.00"
        << setw(15)
        << "4,919.99"
        <<endl;

        cout
        << left
        << setw(15)
        << "04/05/2023"
        << left
        << setw(20)
        << "Cash In"
        << left
        << setw(15)
        << "659.00"
        << left
        << setw(15)
        << " "
        << setw(15)
        << "5,578.99"
        <<endl;

        cout
        << left
        << setw(15)
        << "04/09/2023"
        << left
        << setw(20)
        << "Transfer In"
        << left
        << setw(15)
        << "100.00"
        << left
        << setw(15)
        << " "
        << setw(15)
        << "5,678.99"
        <<endl;
        
        cout<<"\nNOTHING FOLLOWS--";
		break;
                    }

					case 5:
						cout<<"\n\t\t\tThank you for your transaction.";
						break;
					
					default:
						cout<<"\n\t\t\tInvalid input. Please try again.";
				}
				
			}
			else 
				cout<<"\n\t\t\tThank you for your transaction.";
		} 
		
//Clariza Mae Cabalquinto
		else if (account_no == "87654321")	
		{
            cout << "\n\tEnter 'X' to exit.";
			cout<<"\n\n\t\t\tClariza Mae Cabalquinto";
			cout<<"\n\t\t\tEnter PIN: \t";
			getline (cin, pin);
			
                        while (pin !="4321" && pin!="x" && pin!="X") {
                cout << "\n\t!! Incorrect PIN. !!" ;
        cout << "\n\tEnter 'X' to exit.";
        cout<<"\n\n\t\t\tClariza Mae Cabalquinto";
		cout<<"\n\t\t\tEnter PIN: \t";
        getline (cin, pin);
        }

			if (pin == "4321")
			{
				cout<<"\n\t\tSelect transaction: ";
				cout<<"\n\t\t\t1. Deposit"; 
				cout<<"\n\t\t\t2. Withdraw";
				cout<<"\n\t\t\t3. Check Balance";
                cout<<"\n\t\t\t4. Generate Bank Statement";
				cout<<"\n\t\t\t5. Exit";
				cout<<"\n\n\t\t\tInput answer: "; 
				cin>>input;
				
				switch (input)
				{
					case 1:{
                        cout << "\n\n\t\tDeposit amount: \t";
						cin >> deposit;

                    while(deposit<=0){
        cout << "\n!! Invalid input, please enter a valid amount. !!\n" ;
        cout<<"\n\n\t\tDeposit amount: \t";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> deposit;
                    }

						cout << "\n\n\t\tDo you want a receipt? \n\t\t\t1. Yes\n\t\t\t2. No";
						cout << "\n\n\t\t\tInput: ";
						cin >> input;
							if (input == 1)
							{
								cout << "\n\n\t\tPlease insert the amount in the machine.\t";
								cout << "\n\t\tType 1 to proceed.\t";
								cout << "\n\n\t\t\tInput: ";
								cin >> response;
									if (response == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_clariza + deposit) << endl;
										cout << "\n\n\t\tPlease take the receipt.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
										cout << "\n\t\tInvalid input. Please try again. Transaction Failed." << endl;
							}
							else
							{
								cout << "\n\n\t\tPlease insert the amount in the machine.\t";
								cout << "\n\t\tType 1 to proceed.\t";
								cout << "\n\n\t\t\tInput: ";
								cin >> response;
									if (response == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_clariza + deposit) << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
										cout << "\n\t\tInvalid input. Please try again. Transaction Failed." << endl;
							}
					break;
                    }
						
					case 2:{
                        	cout << "\n\n\t\tWithdraw amount: \t";
						cin >> withdraw;
							if (withdraw < bal_clariza)
							{
								cout << "\n\n\t\tDo you want a receipt? \n\t\t1. Yes\n\t\t2. No";
								cout << "\n\n\t\t\tInput: ";
								cin >> input;
									if (input == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_clariza - withdraw) << endl;
										cout << "\n\n\t\tPlease take the money and the receipt.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_clariza - withdraw) << endl;
										cout << "\n\n\t\tPlease take the money.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
							}
							else
								cout << "\n\n\t\tInsufficient Funds. Transaction Failed." << endl;
					break;
					
                    }
					
					case 3: 
						cout<<"\n\t\t\tBalance: \t"<<fixed<<setprecision(2)<<bal_clariza<<endl;
						break;
					
                    case 4:{
 // current date/time
   time_t now = time(0);
   
   // convert to string form
   char* dt = ctime(&now);

            cout<<"\n\n**Please enter full screen for the best experience.**\n\n";
            cout<<"\nAccount No.: "<<account_no; //Account Number
            cout<<"\nName: Clariza Mae Cabalquinto\n"; //Name
            cout<< "Date and Time: "<< dt<<"\n"; //Date Today
            cout<<"Transactions\n";
            cout<<"----------------------------------\n";

         cout
        << left
        << setw(15)
        << "DATE"
        << left
        << setw(20)
        << "DESCRIPTION"
        << left
        << setw(15)
        << "CREDIT"
        << left
        << setw(15)
        << "DEBIT"
        << setw(15)
        << "BALANCE"
        <<endl;

        cout
        << left
        << setw(15)
        << "03/24/2023"
        << left
        << setw(20)
        << "Payment - Shopping"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "298.45"
        << setw(15)
        << "2,915.83"
        <<endl;

        cout
        << left
        << setw(15)
        << "03/26/2023"
        << left
        << setw(20)
        << "Cash Out"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "150.00"
        << setw(15)
        << "2,765.83"
        <<endl;

        cout
        << left
        << setw(15)
        << "03/31/2023"
        << left
        << setw(20)
        << "Transfer In"
        << left
        << setw(15)
        << "1,000.00"
        << left
        << setw(15)
        << " "
        << setw(15)
        << "3,765.83"
        <<endl;

        cout
        << left
        << setw(15)
        << "04/01/2023"
        << left
        << setw(20)
        << "Cash Out"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "320.00"
        << setw(15)
        << "3,445.83"
        <<endl;

         cout
        << left
        << setw(15)
        << "04/01/2023"
        << left
        << setw(20)
        << "Cash In"
        << left
        << setw(15)
        << "100.00"
        << left
        << setw(15)
        << " "
        << setw(15)
        << "3,545.83"
        <<endl;

         cout
        << left
        << setw(15)
        << "04/04/2023"
        << left
        << setw(20)
        << "Payment - Food"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "268.00"
        << setw(15)
        << "3,277.83"
        <<endl;

         cout
        << left
        << setw(15)
        << "04/06/2023"
        << left
        << setw(20)
        << "Payment - Bills"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "760.00"
        << setw(15)
        << "2,517.83"
        <<endl;
        
        cout<<"\nNOTHING FOLLOWS--";
		break;
    }
                
					case 5:{
						cout<<"\n\t\t\tThank you for your transaction.";
						break;}
					
					default:
						cout<<"\n\t\t\tInvalid input. Please try again.";
				}
				
			}
			else 
				cout<<"\n\t\t\tThank you for your transaction.";
		} 

//Liberty Estrella
		else if (account_no =="76435267")	
		{
            cout << "\n\tEnter 'X' to exit.";
			cout<<"\n\n\t\t\tLiberty Estrella";
			cout<<"\n\t\t\tEnter PIN: \t";
			getline (cin, pin);
			
            while (pin !="0407" && pin!="x" && pin!="X") {
                cout << "\n\t!! Incorrect PIN. !!" ;
        cout << "\n\tEnter 'X' to exit.";
        cout<<"\n\n\t\t\tLiberty Estrella";
		cout<<"\n\t\t\tEnter PIN: \t";
        getline (cin, pin);
        }

        
			if (pin == "0407")
			{
				cout<<"\n\t\tSelect transaction: ";
				cout<<"\n\t\t\t1. Deposit"; 
				cout<<"\n\t\t\t2. Withdraw";
				cout<<"\n\t\t\t3. Check Balance"; //check balance lang po meron
                cout<<"\n\t\t\t4. Generate Bank Statement";
				cout<<"\n\t\t\t5. Exit";
				cout<<"\n\n\t\t\tInput answer: "; 
				cin>>input;
				
				switch (input)
				{
					case 1:{
                        cout << "\n\n\t\tDeposit amount: \t";
						cin >> deposit;

                         while(deposit<=0){
        cout << "\n!! Invalid input, please enter a valid amount. !!\n" ;
        cout<<"\n\n\t\tDeposit amount: \t";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> deposit;
                    }
						cout << "\n\n\t\tDo you want a receipt? \n\t\t\t1. Yes\n\t\t\t2. No";
						cout << "\n\n\t\t\tInput: ";
						cin >> input;
							if (input == 1)
							{
								cout << "\n\n\t\tPlease insert the amount in the machine.\t";
								cout << "\n\t\tType 1 to proceed.\t";
								cout << "\n\n\t\t\tInput: ";
								cin >> response;
									if (response == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_lib + deposit) << endl;
										cout << "\n\n\t\tPlease take the receipt.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
										cout << "\n\t\tInvalid input. Please try again. Transaction Failed." << endl;
							}
							else
							{
								cout << "\n\n\t\tPlease insert the amount in the machine.\t";
								cout << "\n\t\tType 1 to proceed.\t";
								cout << "\n\n\t\t\tInput: ";
								cin >> response;
									if (response == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_lib + deposit) << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
										cout << "\n\t\tInvalid input. Please try again. Transaction Failed." << endl;
							}
					break;
                    }
						
					case 2:{
                        cout << "\n\n\t\tWithdraw amount: \t";
						cin >> withdraw;
							if (withdraw < bal_lib)
							{
								cout << "\n\n\t\tDo you want a receipt? \n\t\t1. Yes\n\t\t2. No";
								cout << "\n\n\t\t\tInput: ";
								cin >> input;
									if (input == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_lib - withdraw) << endl;
										cout << "\n\n\t\tPlease take the money and the receipt.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_lib - withdraw) << endl;
										cout << "\n\n\t\tPlease take the money.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
							}
							else
								cout << "\n\n\t\tInsufficient Funds. Transaction Failed." << endl;
					break;
                    }
					
					case 3: 
						cout<<"\n\t\t\tBalance: \t"<<fixed<<setprecision(2)<<bal_lib<<endl;
						break;
					case 4:{
 // current date/time
   time_t now = time(0);
   
   // convert to string form
   char* dt = ctime(&now);

            cout<<"\n\n**Please enter full screen for the best experience.**\n\n";
            cout<<"\nAccount No.: "<<account_no; //Account Number
            cout<<"\nName: Liberty Estrella\n"; //Name
            cout<< "Date and Time: "<< dt<<"\n"; //Date Today
            cout<<"Transactions\n";
            cout<<"----------------------------------\n";

         cout
        << left
        << setw(15)
        << "DATE"
        << left
        << setw(20)
        << "DESCRIPTION"
        << left
        << setw(15)
        << "CREDIT"
        << left
        << setw(15)
        << "DEBIT"
        << setw(15)
        << "BALANCE"
        <<endl;

        cout
        << left
        << setw(15)
        << "03/15/2023"
        << left
        << setw(20)
        << "Payment - Toyota"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "10,000.00"
        << setw(15)
        << "99,999,915,329.62"
        <<endl;

        cout
        << left
        << setw(15)
        << "03/19/2023"
        << left
        << setw(20)
        << "Payment - Food"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "1,329.62"
        << setw(15)
        << "99,999,914,000.00"
        <<endl;

        cout
        << left
        << setw(15)
        << "03/27/2023"
        << left
        << setw(20)
        << "Cash In"
        << left
        << setw(15)
        << "100,000.00"
        << left
        << setw(15)
        << " "
        << setw(15)
        << "100,000,014,000.00"
        <<endl;

        cout
        << left
        << setw(15)
        << "03/30/2023"
        << left
        << setw(20)
        << "Payment - Toyota"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "10,000.00"
        << setw(15)
        << "100,000,004,000.00"
        <<endl;

         cout
        << left
        << setw(15)
        << "04/01/2023"
        << left
        << setw(20)
        << "Cash Out"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "2,500.00"
        << setw(15)
        << "100,000,001,500.00"
        <<endl;

         cout
        << left
        << setw(15)
        << "04/03/2023"
        << left
        << setw(20)
        << "Cash Out"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "1,000.00"
        << setw(15)
        << "100,000,000,500.00"
        <<endl;

         cout
        << left
        << setw(15)
        << "04/06/2023"
        << left
        << setw(20)
        << "Payment - Insurance"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "500.00"
        << setw(15)
        << "100,000,000,000.00"
        <<endl;
        
        cout<<"\nNOTHING FOLLOWS--";
		break;
    }
					case 5:
						cout<<"\n\t\t\tThank you for your transaction.";
						break;
					
					default:
						cout<<"\n\t\t\tInvalid input. Please try again.";
				}
				
			}
			else 
				cout<<"\n\t\t\tThank you for your transaction.";
		}
		
//Mauri Vince Franciso
		else if (account_no == "25637481")	
		{
            cout << "\n\tEnter 'X' to exit.";
			cout<<"\n\n\t\t\tMauri Vince Francisco";
			cout<<"\n\t\t\tEnter PIN: \t";
			getline (cin, pin);

            while (pin !="1111" && pin!="x" && pin!="X") {
                cout << "\n\t!! Incorrect PIN. !!" ;
        cout << "\n\tEnter 'X' to exit.";
        cout<<"\n\n\t\t\tMauri Vince Francisco";
		cout<<"\n\t\t\tEnter PIN: \t";
        getline (cin, pin);
        }
			
			if (pin == "1111")
			{
				cout<<"\n\t\tSelect transaction: ";
				cout<<"\n\t\t\t1. Deposit"; 
				cout<<"\n\t\t\t2. Withdraw";
				cout<<"\n\t\t\t3. Check Balance"; //check balance lang po meron
                cout<<"\n\t\t\t4. Generate Bank Statement";
				cout<<"\n\t\t\t5. Exit";
				cout<<"\n\n\t\t\tInput answer: "; 
				cin>>input;
				
				switch (input)
				{
					case 1:{
                        cout << "\n\n\t\tDeposit amount: \t";
						cin >> deposit;

                        while(deposit<=0){
        cout << "\n!! Invalid input, please enter a valid amount. !!\n" ;
        cout<<"\n\n\t\tDeposit amount: \t";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> deposit;
                    }
						cout << "\n\n\t\tDo you want a receipt? \n\t\t\t1. Yes\n\t\t\t2. No";
						cout << "\n\n\t\t\tInput: ";
						cin >> input;
							if (input == 1)
							{
								cout << "\n\n\t\tPlease insert the amount in the machine.\t";
								cout << "\n\t\tType 1 to proceed.\t";
								cout << "\n\n\t\t\tInput: ";
								cin >> response;
									if (response == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_mau + deposit) << endl;
										cout << "\n\n\t\tPlease take the receipt.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
										cout << "\n\t\tInvalid input. Please try again. Transaction Failed." << endl;
							}
							else
							{
								cout << "\n\n\t\tPlease insert the amount in the machine.\t";
								cout << "\n\t\tType 1 to proceed.\t";
								cout << "\n\n\t\t\tInput: ";
								cin >> response;
									if (response == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_mau + deposit) << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
										cout << "\n\t\tInvalid input. Please try again. Transaction Failed." << endl;
							}
					break;
                    }
						
					case 2: {
                        cout << "\n\n\t\tWithdraw amount: \t";
						cin >> withdraw;
							if (withdraw < bal_mau)
							{
								cout << "\n\n\t\tDo you want a receipt? \n\t\t1. Yes\n\t\t2. No";
								cout << "\n\n\t\t\tInput: ";
								cin >> input;
									if (input == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_mau - withdraw) << endl;
										cout << "\n\n\t\tPlease take the money and the receipt.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_mau - withdraw) << endl;
										cout << "\n\n\t\tPlease take the money.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
							}
							else
								cout << "\n\n\t\tInsufficient Funds. Transaction Failed." << endl;
					break;
                    }
					
					case 3: 
						cout<<"\n\t\t\tBalance: \t"<<fixed<<setprecision(2)<<bal_mau<<endl;
						break;
					

                    case 4:{
                        
                         // current date/time
   time_t now = time(0);
   
   // convert to string form
   char* dt = ctime(&now);

            cout<<"\n\n**Please enter full screen for the best experience.**\n\n";
            cout<<"\nAccount No.: "<<account_no; //Account Number
            cout<<"\nMauri Vince Francisco\n"; //Name
            cout<< "Date and Time: "<< dt<<"\n"; //Date Today
            cout<<"Transactions\n";
            cout<<"----------------------------------\n";

         cout
        << left
        << setw(15)
        << "DATE"
        << left
        << setw(20)
        << "DESCRIPTION"
        << left
        << setw(15)
        << "CREDIT"
        << left
        << setw(15)
        << "DEBIT"
        << setw(15)
        << "BALANCE"
        <<endl;

        cout
        << left
        << setw(15)
        << "03/29/2023"
        << left
        << setw(20)
        << "Cash In"
        << left
        << setw(15)
        << "75,000.00"
        << left
        << setw(15)
        << " "
        << setw(15)
        << "1,123,345,345.13"
        <<endl;

        cout
        << left
        << setw(15)
        << "04/03/2023"
        << left
        << setw(20)
        << "Cash In"
        << left
        << setw(15)
        << "50,000.00"
        << left
        << setw(15)
        << " "
        << setw(15)
        << "1,123,395,345.13"
        <<endl;

        cout
        << left
        << setw(15)
        << "04/08/2023"
        << left
        << setw(20)
        << "Cash In"
        << left
        << setw(15)
        << "50,000.00"
        << left
        << setw(15)
        << " "
        << setw(15)
        << "1,123,445,345.13"
        <<endl;
        
        cout<<"\nNOTHING FOLLOWS--";
		break;
                    }

					case 5:
						cout<<"\n\t\t\tThank you for your transaction.";
						break;
					
					default:
						cout<<"\n\t\t\tInvalid input. Please try again.";
				}
				
			}
			else 
				cout<<"\n\t\t\tThank you for your transaction.";
		}

//Alyssah Cynthia Reniva
		else if (account_no == "11111111")	
		{
            cout << "\n\tEnter 'X' to exit.";
			cout<<"\n\n\t\t\tAlyssah Cynthia Reniva";
			cout<<"\n\t\t\tEnter PIN: \t";
			getline (cin, pin);
			
            while (pin !="2222" && pin!="x" && pin!="X") {
                cout << "\n\t!! Incorrect PIN. !!" ;
        cout << "\n\tEnter 'X' to exit.";
        cout<<"\n\n\t\t\tAlyssah Cynthia Reniva";
		cout<<"\n\t\t\tEnter PIN: \t";
        getline (cin, pin);
        }
            
			if (pin == "2222")
			{
				cout<<"\n\t\tSelect transaction: ";
				cout<<"\n\t\t\t1. Deposit";
				cout<<"\n\t\t\t2. Withdraw";
				cout<<"\n\t\t\t3. Check Balance"; 
                cout<<"\n\t\t\t4. Generate Bank Statement";
				cout<<"\n\t\t\t5. Exit";
				cout<<"\n\n\t\t\tInput answer: "; 
				cin>>input;
				
				switch (input)
				{
					case 1:{
                        cout << "\n\n\t\tDeposit amount: \t";
						cin >> deposit;

                        while(deposit<=0){
        cout << "\n!! Invalid input, please enter a valid amount. !!\n" ;
        cout<<"\n\n\t\tDeposit amount: \t";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> deposit;
                    }
						cout << "\n\n\t\tDo you want a receipt? \n\t\t\t1. Yes\n\t\t\t2. No";
						cout << "\n\n\t\t\tInput: ";
						cin >> input;
							if (input == 1)
							{
								cout << "\n\n\t\tPlease insert the amount in the machine.\t";
								cout << "\n\t\tType 1 to proceed.\t";
								cout << "\n\n\t\t\tInput: ";
								cin >> response;
									if (response == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_ysa + deposit) << endl;
										cout << "\n\n\t\tPlease take the receipt.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
										cout << "\n\t\tInvalid Input. Transaction Failed." << endl;
							}
							else
							{
								cout << "\n\n\t\tPlease insert the amount in the machine.\t";
								cout << "\n\t\tType 1 to proceed.\t";
								cout << "\n\n\t\t\tInput: ";
								cin >> response;
									if (response == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_ysa + deposit) << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
										cout << "\n\t\tInvalid Input. Transaction Failed." << endl;
							}
					break;
                    }
						
					case 2:{
                        cout << "\n\n\t\tWithdraw amount: \t";
						cin >> withdraw;
							if (withdraw < bal_ysa)
							{
								cout << "\n\n\t\tDo you want a receipt? \n\t\t1. Yes\n\t\t2. No";
								cout << "\n\n\t\t\tInput: ";
								cin >> input;
									if (input == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_ysa - withdraw) << endl;
										cout << "\n\n\t\tPlease take the money and the receipt.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_ysa - withdraw) << endl;
										cout << "\n\n\t\tPlease take the money.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
							}
							else
								cout << "\n\n\t\tInsufficient Funds. Transaction Failed." << endl;
					break;
                    }
					
					case 3: 
						cout<<"\n\t\t\tBalance: \t"<<fixed<<setprecision(2)<<bal_ysa<<endl;
						break;
					
                    case 4:{
                       // current date/time
   time_t now = time(0);
   
   // convert to string form
   char* dt = ctime(&now);

            cout<<"\n\n**Please enter full screen for the best experience.**\n\n";
            cout<<"\nAccount No.: "<<account_no; //Account Number
            cout<<"\nName: Alyssah Cynthia Reniva\n"; //Name
            cout<< "Date and Time: "<< dt<<"\n"; //Date Today
            cout<<"Transactions\n";
            cout<<"----------------------------------\n";

         cout
        << left
        << setw(15)
        << "DATE"
        << left
        << setw(20)
        << "DESCRIPTION"
        << left
        << setw(15)
        << "CREDIT"
        << left
        << setw(15)
        << "DEBIT"
        << setw(15)
        << "BALANCE"
        <<endl;

        cout
        << left
        << setw(15)
        << "04/01/2023"
        << left
        << setw(20)
        << "Payment - SM"
        << left
        << setw(15)
        << ""
        << left
        << setw(15)
        << "2,742.56"
        << setw(15)
        << "34,813,184,189,676.46"
        <<endl;

        cout
        << left
        << setw(15)
        << "04/01/2023"
        << left
        << setw(20)
        << "Payment - IKEA"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "732,342.34"
        << setw(15)
        << "34,813,183,457,334.12"
        <<endl;

        cout
        << left
        << setw(15)
        << "04/01/2023"
        << left
        << setw(20)
        << "Payment - Gas"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "500.00"
        << setw(15)
        << "34,813,183,456,834.12"
        <<endl;

        cout
        << left
        << setw(15)
        << "04/02/2023"
        << left
        << setw(20)
        << "Cash In"
        << left
        << setw(15)
        << "5,000.00"
        << left
        << setw(15)
        << " "
        << setw(15)
        << "34,813,183,461,834.12"
        <<endl;
        
        cout<<"\nNOTHING FOLLOWS--";
		break; 
                    }                    

					case 5:
						cout<<"\n\t\t\tThank you for your transaction.";
						break;
					
					default:
						cout<<"\n\t\t\tInvalid input. Please try again.";
				}
				
			}
			else 
				cout<<"\n\t\t\tThank you for your transaction.";
		}

//Evitha Viola	
		else if (account_no == "88888888")	
		{
            cout << "\n\tEnter 'X' to exit.";
			cout<<"\n\n\t\t\tEvitha Viola";
			cout<<"\n\t\t\tEnter PIN: \t";
			getline (cin, pin);
			
            while (pin !="4444" && pin!="x" && pin!="X") {
                cout << "\n\t!! Incorrect PIN. !!" ;
        cout << "\n\tEnter 'X' to exit.";
        cout<<"\n\n\t\t\tEvitha Viola";
		cout<<"\n\t\t\tEnter PIN: \t";
        getline (cin, pin);
        }
            
			if (pin == "4444")
			{
				cout<<"\n\t\tSelect transaction: ";
				cout<<"\n\t\t\t1. Deposit";
				cout<<"\n\t\t\t2. Withdraw";
				cout<<"\n\t\t\t3. Check Balance"; 
                cout<<"\n\t\t\t4. Generate Bank Statement";
				cout<<"\n\t\t\t5. Exit";
				cout<<"\n\n\t\t\tInput answer: "; 
				cin>>input;
				
				switch (input)
				{
					case 1:{
                        cout << "\n\n\t\tDeposit amount: \t";
						cin >> deposit;

                        while(deposit<=0){
        cout << "\n!! Invalid input, please enter a valid amount. !!\n" ;
        cout<<"\n\n\t\tDeposit amount: \t";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> deposit;
                    }
						cout << "\n\n\t\tDo you want a receipt? \n\t\t\t1. Yes\n\t\t\t2. No";
						cout << "\n\n\t\t\tInput: ";
						cin >> input;
							if (input == 1)
							{
								cout << "\n\n\t\tPlease insert the amount in the machine.\t";
								cout << "\n\t\tType 1 to proceed.\t";
								cout << "\n\n\t\t\tInput: ";
								cin >> response;
									if (response == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_evi + deposit) << endl;
										cout << "\n\n\t\tPlease take the receipt.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
										cout << "\n\t\tInvalid Input. Transaction Failed." << endl;
							}
							else
							{
								cout << "\n\n\t\tPlease insert the amount in the machine.\t";
								cout << "\n\t\tType 1 to proceed.\t";
								cout << "\n\n\t\t\tInput: ";
								cin >> response;
									if (response == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_evi + deposit) << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
										cout << "\n\t\tInvalid Input. Transaction Failed." << endl;
							}
					break;
                    }
						
					case 2:{
                        cout << "\n\n\t\tWithdraw amount: \t";
						cin >> withdraw;
							if (withdraw < bal_evi)
							{
								cout << "\n\n\t\tDo you want a receipt? \n\t\t1. Yes\n\t\t2. No";
								cout << "\n\n\t\t\tInput: ";
								cin >> input;
									if (input == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_evi - withdraw) << endl;
										cout << "\n\n\t\tPlease take the money and the receipt.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_evi - withdraw) << endl;
										cout << "\n\n\t\tPlease take the money.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
							}
							else
								cout << "\n\n\t\tInsufficient Funds. Transaction Failed." << endl;
					break;
                    }
					
					case 3: 
						cout<<"\n\t\t\tBalance: \t"<<fixed<<setprecision(2)<<bal_evi<<endl;					break;

                    case 4:{
                         // current date/time
   time_t now = time(0);
   
   // convert to string form
   char* dt = ctime(&now);

            cout<<"\n\n**Please enter full screen for the best experience.**\n\n";
            cout<<"\nAccount No.: "<<account_no; //Account Number
            cout<<"\nName: Evitha Viola\n"; //Name
            cout<< "Date and Time: "<< dt<<"\n"; //Date Today
            cout<<"Transactions\n";
            cout<<"----------------------------------\n";

         cout
        << left
        << setw(15)
        << "DATE"
        << left
        << setw(20)
        << "DESCRIPTION"
        << left
        << setw(15)
        << "CREDIT"
        << left
        << setw(15)
        << "DEBIT"
        << setw(15)
        << "BALANCE"
        <<endl;

        cout
        << left
        << setw(15)
        << "04/01/2023"
        << left
        << setw(20)
        << "Allowance"
        << left
        << setw(15)
        << "500.00"
        << left
        << setw(15)
        << " "
        << setw(15)
        << "123,144,506.32"
        <<endl;

        cout
        << left
        << setw(15)
        << "04/01/2023"
        << left
        << setw(20)
        << "Transportation"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "16.00"
        << setw(15)
        << "123,145,006.32"
        <<endl;

        cout
        << left
        << setw(15)
        << "04/01/2023"
        << left
        << setw(20)
        << "Payment - Food"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "93.00"
        << setw(15)
        << "123,144,913.32"
        <<endl;

        cout
        << left
        << setw(15)
        << "04/02/2023"
        << left
        << setw(20)
        << "Transfer Out"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "168.00"
        << setw(15)
        << "123,144,745.32"
        <<endl;

         cout
        << left
        << setw(15)
        << "04/06/2023"
        << left
        << setw(20)
        << "Cash In"
        << left
        << setw(15)
        << "600.00"
        << left
        << setw(15)
        << " "
        << setw(15)
        << "123,145,345.32"
        <<endl;
        
        cout<<"\nNOTHING FOLLOWS--";
		break;
                    }

					case 5:
						cout<<"\n\t\t\tThank you for your transaction.";
						break;
					
					default:
						cout<<"\n\t\t\tInvalid input. Please try again.";
				}
				
			}
			else 
				cout<<"\n\t\t\tThank you for your transaction.";
		}
		
		else if (account_no == "99999999")	
		{
            cout << "\n\tEnter 'X' to exit.";
			cout<<"\n\n\t\t\tMark Lawrence Lupoy";
			cout<<"\n\t\t\tEnter PIN: \t";
			getline (cin, pin);
			
            while (pin !="9999" && pin!="x" && pin!="X") {
                cout << "\n\t!! Incorrect PIN. !!" ;
        cout << "\n\tEnter 'X' to exit.";
        cout<<"\n\n\t\t\tMark Lawrence Lupoy";
		cout<<"\n\t\t\tEnter PIN: \t";
        getline (cin, pin);
        }

			if (pin == "9999")
			{
				cout<<"\n\t\tSelect transaction: ";
				cout<<"\n\t\t\t1. Deposit";
				cout<<"\n\t\t\t2. Withdraw";
				cout<<"\n\t\t\t3. Check Balance"; 
                cout<<"\n\t\t\t4. Generate Bank Statement";
				cout<<"\n\t\t\t5. Exit";
				cout<<"\n\n\t\t\tInput answer: "; 
				cin>>input;
				
				switch (input)
				{
					case 1:{
                        cout << "\n\n\t\tDeposit amount: \t";
						cin >> deposit;

                        while(deposit<=0){
        cout << "\n!! Invalid input, please enter a valid amount. !!\n" ;
        cout<<"\n\n\t\tDeposit amount: \t";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> deposit;
                    }
						cout << "\n\n\t\tDo you want a receipt? \n\t\t\t1. Yes\n\t\t\t2. No";
						cout << "\n\n\t\t\tInput: ";
						cin >> input;
							if (input == 1)
							{
								cout << "\n\n\t\tPlease insert the amount in the machine.\t";
								cout << "\n\t\tType 1 to proceed.\t";
								cout << "\n\n\t\t\tInput: ";
								cin >> response;
									if (response == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_mark + deposit) << endl;
										cout << "\n\n\t\tPlease take the receipt.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
										cout << "\n\t\tInvalid Input. Transaction Failed." << endl;
							}
							else
							{
								cout << "\n\n\t\tPlease insert the amount in the machine.\t";
								cout << "\n\t\tType 1 to proceed.\t";
								cout << "\n\n\t\t\tInput: ";
								cin >> response;
									if (response == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_mark + deposit) << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
										cout << "\n\t\tInvalid Input. Transaction Failed." << endl;
							}
					break;
                    }
						
					case 2:{
                        cout << "\n\n\t\tWithdraw amount: \t";
						cin >> withdraw;
							if (withdraw < bal_mark)
							{
								cout << "\n\n\t\tDo you want a receipt? \n\t\t1. Yes\n\t\t2. No";
								cout << "\n\n\t\t\tInput: ";
								cin >> input;
									if (input == 1)
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_mark - withdraw) << endl;
										cout << "\n\n\t\tPlease take the money and the receipt.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
									else
									{
										cout << "\n\n\t\tNew Balance: \t" << fixed << setprecision(2) << (bal_mark - withdraw) << endl;
										cout << "\n\n\t\tPlease take the money.\t" << endl;
										cout << "\n\n\t\tThank you for your transaction." << endl;
									}
							}
							else
								cout << "\n\n\t\tInsufficient Funds. Transaction Failed." << endl;
					break;
                    }
					
					case 3: 
						cout<<"\n\t\t\tBalance: \t"<<fixed<<setprecision(2)<<bal_mark<<endl;
						break;
					
                    case 4:{
                        
 // current date/time
   time_t now = time(0);
   
   // convert to string form
   char* dt = ctime(&now);

            cout<<"\n\n**Please enter full screen for the best experience.**\n\n";
            cout<<"\nAccount No.: "<<account_no; //Account Number
            cout<<"\nName: Mark Lawrence Lupoy\n"; //Name
            cout<< "Date and Time: "<< dt<<"\n"; //Date Today
            cout<<"Transactions\n";
            cout<<"----------------------------------\n";

         cout
        << left
        << setw(15)
        << "DATE"
        << left
        << setw(20)
        << "DESCRIPTION"
        << left
        << setw(15)
        << "CREDIT"
        << left
        << setw(15)
        << "DEBIT"
        << setw(15)
        << "BALANCE"
        <<endl;

        cout
        << left
        << setw(15)
        << "03/02/2023"
        << left
        << setw(20)
        << "Payment - Water"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "2,342.52"
        << setw(15)
        << "99,999,999,999,811,201.34"
        <<endl;

        cout
        << left
        << setw(15)
        << "03/03/2023"
        << left
        << setw(20)
        << "Payment - Meralco"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "2,821.28"
        << setw(15)
        << "99,999,999,999,808,380.06"
        <<endl;

        cout
        << left
        << setw(15)
        << "03/05/2023"
        << left
        << setw(20)
        << "Cash In"
        << left
        << setw(15)
        << "100,000.00"
        << left
        << setw(15)
        << " "
        << setw(15)
        << "99,999,999,999,908,380.06"
        <<endl;

        cout
        << left
        << setw(15)
        << "03/15/2023"
        << left
        << setw(20)
        << "Cash Out"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "3,000.00"
        << setw(15)
        << "99,999,999,999,905,380.06"
        <<endl;

         cout
        << left
        << setw(15)
        << "04/01/2023"
        << left
        << setw(20)
        << "Cash In"
        << left
        << setw(15)
        << "100,000.00"
        << left
        << setw(15)
        << " "
        << setw(15)
        << "100,000,000,000,005,380.06"
        <<endl;

         cout
        << left
        << setw(15)
        << "04/01/2023"
        << left
        << setw(20)
        << "Payment - Water"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "2,012.87"
        << setw(15)
        << "100,000,000,000,003,367.19"
        <<endl;

         cout
        << left
        << setw(15)
        << "04/03/2023"
        << left
        << setw(20)
        << "Payment - Meralco"
        << left
        << setw(15)
        << " "
        << left
        << setw(15)
        << "3,367.19"
        << setw(15)
        << "100,000,000,000,000,000.00"
        <<endl;
        
        cout<<"\nNOTHING FOLLOWS--";
		break;
                    }

					case 5:
						cout<<"\n\t\t\tThank you for your transaction.";
						break;
					
					default:
						cout<<"\n\t\t\tInvalid input. Please try again.";
				}
				
			}
			else 
				cout<<"\n\t\t\tThank you for your transaction.";
		}
		
			else 
				cout<<"\n\t\tInvalid account."<<endl;	
			break;

        case 3: //Interest Computation
        {
        cout<<"\nInterest Calculator " <<endl;
        cout<<"\nPlease type in the following:" <<endl;
	
	cout<<"\n\tPrincipal Amount (peso): \t";
	cin>>Principal;

    while (!cin) {
        cout << "\n!! Invalid input, please enter a number. !!\n" ;
        cout<<"\n\tPrincipal Amount (in peso): \t";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> Principal;
    }

	cout<<"\n\tRate (percent): \t";
	cin>>Rate;

    while (!cin) {
        cout << "\n!! Invalid input, please enter a number. !!\n" ;
        cout<<"\n\tRate (percent): \t";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> Rate;
    }

	 cout<<"\n\tTime (months): \t";
	cin>>Time;

    while (!cin) {
        cout << "\n!! Invalid input, please enter a number. !!\n" ;
        cout<<"\n\tTime (months): \t";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> Time;
    }
	
	comp_Rate = Rate/100.0;
	comp_Time = Time/12.0;
	Interest = Principal * comp_Rate * comp_Time;

	
	cout<<"\nThe simple interest earned in " << Time << " months with an interest rate of " << Rate << " percent is " << Interest << " pesos." << endl;
	cout<<"\n\n\tThank you for your transaction." <<endl;
	
	return 0; 
        }

		case 4: //Help Center
            {
            cout<<"\n\tYou may contact the following: ";
			cout<<"\n\t\tLandline: \t1234-5678"	;
			cout<<"\n\t\tMobile Number: \t0912-345-6789";
			cout<<"\n\n\t\t1. Go Back";
			cout<<"\n\t\t2. Exit";
			cout<<"\n\n\t\tInput answer: ";
			cin>>y;


            while((y!=1 && y!=2) || !cin){
                cout<<"\n\n\t\t!! Invalid Input. !!";
                cout<<"\n\n\t\t1. Go Back";
	    		cout<<"\n\t\t2. Exit";
                cout<<"\n\t\tInput answer: ";
                 cin.clear();
                cin.ignore();
			    cin>>y;
                }

			if (y == 2 )
				cout<<"\n\t\tThank you for your transaction.";
            
			break;
            }
			
		case 5: //Exit Page 
		cout<<"\tDo you want to cancel this transaction?";
			cout<<"\n\t\t1. Yes";
			cout<<"\n\t\t2. No";
			cout<<"\n\t\tInput answer: ";
			cin>>z;
			
           while((z!=1 && z!=2) || !cin){
                cout<<"\n\n\t\t!! Invalid Input. !!";
                cout<<"\n\n\t\t1. Go Back";
	    		cout<<"\n\t\t2. Exit";
                cout<<"\n\t\tInput answer: ";
                 cin.clear();
                cin.ignore();
			    cin>>z;
                }
            
			if (z == 1)
				cout<<"\n\n\t\tThank you for your transaction.";
			break; 
			
		default:
			cout<<"The system cannot read the data."<<endl;
				
	}
	} while (z==2||y==1);
	return 0;

}
