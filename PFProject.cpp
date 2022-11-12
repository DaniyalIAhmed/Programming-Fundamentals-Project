#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
//void gotoxy(short a, short b); //function declaration
void gotoxy(short a, short b) //Custom gotoxy() function
{
    COORD coordinates; //Data type of co-ordinates
    coordinates.X = a; //Assign value to X- Co-ordinate
    coordinates.Y = b; //Assign value to Y Co-ordinate
 
SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 
}
void signup(){
	char email[100];int pin;
	gotoxy(20,5);
	printf("Enter your email: ");
	scanf("%s", &email[100]);
	gotoxy(20,7);
	printf("Success! Enter your pin: ");
	scanf("%d", &pin);
	gotoxy(20,8);printf("Recorded!");
	system("cls");
	
}
void login(){
	char email[100];int pin;
	gotoxy(20,5);
	printf("Enter your email: ");
	scanf("%s", &email[100]);
	gotoxy(20,7);
	printf("Success! Enter your pin: ");
	scanf("%d", &pin);
	gotoxy(20,8);printf("Recorded!");
	system("cls");
}
void close(void)
{
    printf("\nPROJECT BY Daniyal(22k-4601), Ahmed Abdullah(22k-4449) and Anas Ahmed(22k-4356)\n");
    }
void list(void){
	printf("\n1.Desi Food\n2.Sea Food\n3.Chinese Food\n4.B.B.Q\n");//Call this function for taste list..
}
main(){
	int ans, i, j, k,ag, an1, ag1, lans,laag;
	char email[100];
	ag:
	gotoxy(30,4);
	printf("Welcome to FIGZZ\n");
	gotoxy(20,8);
	sleep(1);system("color B");printf("Select from below:");
	gotoxy(20,9);printf("1.Sign up");gotoxy(20,10);printf("2.Login\n");
	gotoxy(20,11);
	scanf("%d", &an1);
	system("cls");
	if(an1==1)signup();
	else if(an1==2)login();
	else {
	printf("Wrong choice! Select again ");
	sleep(1);
	system("cls");
	goto ag;
    }
	ag1:
	printf("We offer these:\n1.Dine In\n2.Take Away\n3.Delivery\n");
	scanf("%d", &ans);
	system("CLS");
	if(ans==1){printf("You have selected Dine-IN");sleep(1);system("CLS");printf("Redirecting.");sleep(1);system("CLS");printf("Redirecting..");sleep(1);system("CLS");printf("Redirecting...");sleep(1);system("CLS");}
	else if (ans==2){printf("You have selected Take Away");sleep(1);system("CLS");printf("Redirecting.");sleep(1);system("CLS");printf("Redirecting..");sleep(1);system("CLS");printf("Redirecting...");sleep(1);system("CLS");}
	else if (ans==3){printf("You have selected Delivery");sleep(1);system("CLS");printf("Redirecting.");sleep(1);system("CLS");printf("Redirecting..");sleep(1);system("CLS");printf("Redirecting...");sleep(1);system("CLS");}
    else{printf("We have no such option. Please choose another one.");sleep(1);system("CLS");goto ag;}
	switch(ans){
    	case 1://Dine-In code
    	    printf("Welcome to our Dine-In Section. We have tons of restaurants available for your perfect taste. ");
    	    printf("Now we want you to select the taste for your perfect Evening from our wide range:\n");
    	    laag:
			list();
    	    scanf("%d", &lans);
    	    if(lans==1){
			}
			else if(lans ==2){
				
			}
			else if(lans==3){
			}
			else if(lans==4){
			}
			else {
				printf("That choice doesn't exists! Please select a valid choice:\n");
				sleep(1);
				system("cls");
				goto laag; 
			}
    		break;
    	case 2://Takeaway code
		    break;
		case 3://Delivery code
		    break;
		default://Wrong choice
		    break;		
	}
	close();
}
