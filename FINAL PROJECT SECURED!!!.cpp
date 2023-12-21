#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
using namespace std;


int main() {
	
		int choice, score;
		char again, q1, q2, q3, q4, q5;
		
		do{
		
		//sana wala na pong ganto next time kong meron man sana individual, perdi ro uwat partner:)
		HANDLE col;
		col = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(col, 9);
		cout<<"    SUBMITTED BY:";
		cout<<"\n";
		cout<<" Janine N. Maquirang"; //independent da sir jaan ang mga barkada uwa ako gin partneran ;(
		cout<<"\n";
		cout<<"    SUBMITTED TO:";
		cout<<"\n";
		cout<<" Rumly James Dela Cruz";
		//sir gin rush ko gid daya dahil nadula ang unang code kunta taas man;((
		
		cout<<"\n _____________________________________________________";
		cout<<"\n|                                                     |";
		cout<<"\n|                  Choose a Topic:                    |";
		cout<<"\n|                                                     |";
		cout<<"\n|    Enter 1 for FUNDAMENTALS OF PROGRAMMING          |";
		cout<<"\n|    Enter 2 for INTRODUCTION TO COMPUTING            |";
		cout<<"\n|    Enter 3 for PRICIPLES OF COMPUTER SCIENCE        |";
		cout<<"\n|                   goodluck!!!                       |";
		cout<<"\n|_____________________________________________________|";
		
		cout<<"\n\n    Enter your category:";
		cin>>choice;
		
		cout<<"\n      Please wait";
	    for(int x=0; x < 6; x++){
	    	
	    	cout<<".";
	    	this_thread::sleep_for(chrono::milliseconds(500));
	    	
		}
		
		system("cls");
	    switch(choice){

	    	case 1: //FUNDAMENTALS OF PROGRAMMING TEST 1
	    	SetConsoleTextAttribute(col, 8);
	    		cout<<"\nWELCOME TO C++ QUIZ BEE!!";
	    		
	    		cout<<"\n____________________________________________";
	    		cout<<"\n";
	    		
	    		//NUMBER 1
	    		cout<<"\nCategory 1: Fundamentals of Programming";
	    		cout<<"\n";
				cout<<"\n1. What is the purpose of the cin object in C++?";
	    		cout<<"\n\tA. To perform arithmethic calculations. ";
	    		cout<<"\n\tB. To read input from the console.";
	    		cout<<"\n\tC. To declare integer variables.";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q1;
	    		
	    		if(q1 == 'b' || q1 == 'B' ){
	    			SetConsoleTextAttribute(col, 2);
	    			cout<<"\nCorrect Answer!\n";
					score++;
	    		
				}else{
					SetConsoleTextAttribute(col, 2);
					cout<<"\n   Wrong Answer!";
					cout<<"\nThe Correct Answer is: B. To read input from the console.\n";
				}
				
				//NUMBER 2
	    		SetConsoleTextAttribute(col, 8);
	    		cout<<"\n2.What is the purpose of the modulus operator (%) in C++?";
	    		cout<<"\n\tA. It calculates the square root";
	    		cout<<"\n\tB. It performs bitwise operations";
	    		cout<<"\n\tC. It returns the remainder";
	    		
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q2;
	    		
	    		if(q2 == 'c' || q2 == 'C' ){
	    			SetConsoleTextAttribute(col, 2);
	    			cout<<"\nCorrect Answer!\n";
					score++;
						
				}else{
					SetConsoleTextAttribute(col, 2);
					cout<<"\n   Wrong!";
					cout<<"\nThe Correct Answer is: C. It returns the remainder\n";
				}
				
				//NUMBER 3
	    		SetConsoleTextAttribute(col, 8);
	    		cout<<"\n3. In C++, which operator is used to compare two values for equality?";
	    		cout<<"\n\tA. ==";
	    		cout<<"\n\tB. <>";
	    		cout<<"\n\tC. |=";
	    		
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q3;
	    		
				if(q3 == 'a' || q3 == 'A'){
					SetConsoleTextAttribute(col, 2);
	    			cout<<"\nCorrect Answer!\n";
	    			score++;
	    			
				}else{
					SetConsoleTextAttribute(col, 2);
					cout<<"\n   Wrong!";
					cout<<"\nThe Correct Answer is:A. ==\n";
				}
				
				//NUMBER 4
				SetConsoleTextAttribute(col, 8);
				cout<<"\n4. Which of the following is used to define a single-line comment in C++?";
				cout<<"\n\tA. /*This is a comment*/";
				cout<<"\n\tB. # this is a comment";
				cout<<"\n\tC. //this is a comment";
				
				cout<<"\n\nEnter your answer:";
	    		cin>>q4;
	    		
				if(q4 == 'c' || q4 == 'C'){
					SetConsoleTextAttribute(col, 2);
	    			cout<<"\nCorrect Answer!\n";
	    			score++;
	    			
				}else{
					SetConsoleTextAttribute(col, 2);
					cout<<"\n   Wrong!";
					cout<<"\nThe Correct Answer is:C. //this is a comment\n";
				}
				
				//NUMBER 5
				SetConsoleTextAttribute(col, 8);
				cout<<"\n5. What is the purpose of the /n manipulator in c++?";
				cout<<"\n\tA. It flushes the input buffer.";
				cout<<"\n\tB. It cleans the screen.";
				cout<<"\n\tC. It insert a newline character.";
				
				cout<<"\n\nEnter your answer:";
	    		cin>>q5;
	    		
				if(q5 == 'c' || q5  == 'C'){
					SetConsoleTextAttribute(col, 2);
	    			cout<<"\nCorrect Answer!\n";
	    			score++;	
				}else{
					SetConsoleTextAttribute(col, 2);
					cout<<"\n   Wrong!";
					cout<<"\nThe Correct Answer is:C. It insert a newline character.\n";
				}
				
				cout<<"\n\n Your score is: "<<score;
			break;
				
			case 2: //INTRODUCTION TO COMPUTING TEST 2
			SetConsoleTextAttribute(col, 5);
				cout<<"\n";
				cout<<"Category 2: Introduction to Computing";
				cout<<"\n";
				
				//NUMBER 1
				cout<<"\n1. Is a large computer capable of great processing speeds and data storage. These are used by large companies such as banks, airlines and government.";
				cout<<"\n\tA. Digital Computer ";
				cout<<"\n\tB. Laptop";
				cout<<"\n\tC. Main Frame ";
				
				cout<<"\n\nEnter  your  answer:";
				cin>>q1;
	    		
				if(q1 == 'c' || q1 == 'C'){
					SetConsoleTextAttribute(col, 3);
	    			cout<<"\nCorrect Answer!\n";
 				   score++;
 				   
				}else{
					SetConsoleTextAttribute(col, 3);
					cout<<"\n   Wrong!";
					cout<<"\nThe Correct Answer is:C. Main Frame.\n";
				}
				
				//NUMBER 2
				SetConsoleTextAttribute(col, 5);
				cout<<"\n2. Is an optical disc storage media format that can be used for data storage including movies with high video and sound quality.";
				cout<<"\n\tA. IDE";
				cout<<"\n\tB. DVD";
				cout<<"\n\tC. USB";
				
				cout<<"\n\nEnter  your  answer:";
				cin>>q2;
	    		
				if(q2 == 'b' || q2 == 'B'){
					SetConsoleTextAttribute(col, 3);
	    			cout<<"\nCorrect Answer!\n";
  					score++;
  					
				}else{
					SetConsoleTextAttribute(col, 3);
					cout<<"\n   Wrong!";
					cout<<"\nThe Correct Answer is:B. DVD.\n";
				}
				
				//NUMBER 3
				SetConsoleTextAttribute(col, 5);
				cout<<"\n3. Is the storage medium for huge amount of data.";
				cout<<"\n\tA. HARD DISK";
				cout<<"\n\tB. ROM";
				cout<<"\n\tC. RAM";
				
				cout<<"\n\nEnter  your  answer:";
				cin>>q3;
	    		
				if(q3 == 'a' || q3 == 'A'){
					SetConsoleTextAttribute(col, 3);
	    			cout<<"\nCorrect Answer!\n";
    				score++;
    				
				}else{
					SetConsoleTextAttribute(col, 3);
					cout<<"\n   Wrong!";
					cout<<"\nThe Correct Answer is:A. HARD DISK.\n";
				}
				
				//NUMBER 4
				SetConsoleTextAttribute(col, 5);
				cout<<"\n4. An extremely fast computer that can perform hundreds of millions of instructions per second.";
				cout<<"\n\tA. Personal Computer ";
				cout<<"\n\tB. Super Computer ";
				cout<<"\n\tC. Digital Computer ";
				
				cout<<"\n\nEnter  your  answer:";
				cin>>q4;
	    		
				if(q4 == 'b' || q4 == 'B'){
					SetConsoleTextAttribute(col, 3);
	    			cout<<"\nCorrect Answer!\n";
    				score++;
    				
				}else{
					SetConsoleTextAttribute(col, 3);
					cout<<"\n   Wrong!";
					cout<<"\nThe Correct Answer is:B. Super Computer.\n";
				}
				
				//NUMBER 5
				SetConsoleTextAttribute(col, 5);
				cout<<"\n5. Is used to execute commands by pressing a button.";
				cout<<"\n\tA. Mechanical Mouse ";
				cout<<"\n\tB. Keyboard ";
				cout<<"\n\tC. Mouse";
				
				cout<<"\n\nEnter  your  answer:";
				cin>>q5;
	    		
				if(q5 == 'c' || q5 == 'C'){
					SetConsoleTextAttribute(col, 3);
	    			cout<<"\nCorrect Answer!\n";
    				score++;
    				
				}else{
					SetConsoleTextAttribute(col, 3);
					cout<<"\n   Wrong!";
					cout<<"\nThe Correct Answer is:C. Mouse.\n";
				}
				
				cout<<"\n\n Your score is: "<<score;
			break;
			
			case 3: //PRINCIPLES OF COMPUTER SCIENCE 1 TEST 3
			SetConsoleTextAttribute(col, 6);
				cout<<"\n";
				cout<<"Category 3: Principles of Computer Science 1";
				cout<<"\n";
				//NUMBER 1
				cout<<"\n1. Which of these values can be stored in a single bit?";
				cout<<"\n\tA. 2";
				cout<<"\n\tB. 0";
				cout<<"\n\tC.[0,1]";
				
				cout<<"\n\nEnter  your  answer:";
				cin>>q1;
	    		
				if(q1 == 'b' || q1 == 'B'){
					SetConsoleTextAttribute(col, 4);
	    			cout<<"\nCorrect Answer!\n";
    				score++;
    				
				}else{
					SetConsoleTextAttribute(col, 4);
					cout<<"\n   Wrong!";
					cout<<"\nThe Correct Answer is:B. 0.\n";
				}
				
				//NUMBER 2
				SetConsoleTextAttribute(col, 6);
				cout<<"\n2. How many bits are in 3 bytes?";
				cout<<"\n\tA. 24 bits";
				cout<<"\n\tB. 12 bits";
				cout<<"\n\tC. 36 bits";
				
				cout<<"\n\nEnter  your  answer:";
				cin>>q2;
	    		
				if(q2 == 'a' || q2 == 'A'){
					SetConsoleTextAttribute(col, 4);
	    			cout<<"\nCorrect Answer!\n";
    				score++;
    				
				}else{
					SetConsoleTextAttribute(col, 4);
					cout<<"\n   Wrong!";
					cout<<"\nThe Correct Answer is:A. 24 bits.\n";
				}
			
				//NUMBER 3
				SetConsoleTextAttribute(col, 6);
				cout<<"\n3. The smallest addressable unit of memory in most modem computers";
				cout<<"\n\tA. Megabyte";
				cout<<"\n\tB. Bits";
				cout<<"\n\tC. Byte";
				
				cout<<"\n\nEnter  your  answer:";
				cin>>q3;
	    		
				if(q3 == 'c' || q3 == 'C'){
					SetConsoleTextAttribute(col, 4);
	    			cout<<"\nCorrect Answer!\n";
    				score++;
    				
				}else{
					SetConsoleTextAttribute(col, 4);
					cout<<"\n   Wrong!";
					cout<<"\nThe Correct Answer is:C. Byte.\n";
				}
				
				//NUMBER 4
				SetConsoleTextAttribute(col, 6);
				cout<<"\n4. Short term for 'binary digit' and stores either 0 or 1.";
				cout<<"\n\tA. Megabyte";
				cout<<"\n\tB. Bit";
				cout<<"\n\tC. Byte";
				
				cout<<"\n\nEnter  your  answer:";
				cin>>q4;
	    		
				if(q4 == 'b' || q4 == 'B'){
					SetConsoleTextAttribute(col, 4);
	    			cout<<"\nCorrect Answer!\n";
    				score++;
    				
				}else{
					SetConsoleTextAttribute(col, 4);
					cout<<"\n   Wrong!";
					cout<<"\nThe Correct Answer is:B. Bit.\n";
				}
				
				//NUMBER 5
				SetConsoleTextAttribute(col, 6);
				cout<<"\n5. How many bits are in 2 bytes?";
				cout<<"\n\tA. 8 bits";
				cout<<"\n\tB. 16 bits";
				cout<<"\n\tC. 32 bits";
				
				cout<<"\n\nEnter  your  answer:";
				cin>>q5;
	    		
				if(q5 == 'b' || q5 == 'B'){
					SetConsoleTextAttribute(col, 4);
	    			cout<<"\nCorrect Answer!\n";
    				score++;
    				
				}else{
					SetConsoleTextAttribute(col, 4);
					cout<<"\n   Wrong!";
					cout<<"\nThe Correct Answer is:B. 16 bits.\n";
				}

				cout<<"\n\nYour score is:"<<score;
	    	break;
	    	
	    	default:	
	    		cout<<"\n Invalid Input!";
		}
		
				cout<<"\n\nEnter next Quiz? Y for YES / N for NO: ";
				cin>>again;
				system("cls");
	}
		//dayang part ro napa tears of joy ako sir kasi natapos ko uman ang code bago ro pasahan:)
		while(again == 'y' || again == 'Y');
		return 0;
		//finally natapos man ang sakit sa ueo nga code!! kunta di eon mauman sir<3
}
