#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int choice1;
	int choice2;
	int choice3;
	int choice4;
    int compchoice1;
    int last;
   

	cout <<"************************************** Welcome to NewGen Solutions *******************************************\n";
	cout <<"                         ------------------------  \n";
	cout <<"                       / |----------------------|  \n";
	cout <<"                      /  |                      |  \n";
	cout <<"                     /   |    c++  Project      |  \n";
	cout <<"                    |    |                      |  \n";
	cout <<"                    |    |                      |  \n";
	cout <<"                    |    |----------------------|  \n";
	cout <<"                    |     -----------------------  \n";
 	cout <<"                     \    \ \ \ \ \ \ \ \ \\ \ \ \  \n";
	cout <<"                      \    \ -------------------- \  \n";
	cout <<"                       \    \ \ \ \ \ \ \ \ \ \ \ \\  \n";
	cout <<"                        \---------------------------\                       \n";
	
    cout << "Are you looking to buy computer\n";
	cout << " Enter 1 for Yes | 2 for NO\n";
	cin >> choice1;
	
	if (choice1 == 1)
	{    
	    
		cout << "Are you looking to Computer for Gaming or for business use?\n";
		cout <<"Enter 1 for Gaming | 2 for Business use\n";
		cin >> choice2;
		if(choice2 == 2)
        {    
            string app1;
            string app2;
            string app3;
			cout <<"Enter any three application you would like to use for your business in this computer\n";
			
			cout <<"Enter First application\n";
			cin >> app1;
			
		    cout <<"Enter Second application\n"; 
		    cin >> app2;
		    
		    cout <<"Enter Second application\n";
		    cin >> app3;
		    
		    cout << "Aplication you entered are 1 - " << app1 << " 2 - " << app2 << " 3 - " << app3 << endl;
		    
			cout<<"Thank you!\n";
			cout <<"How much are you looking to spend\n";
			cout <<"Press 1 for under 1000 | 2 for 1000 to 2000 | 3 for over 2000\n";
			cin >> choice3;
			
			switch(choice3) 
			{
			    case 1 :
			    cout <<" We have quite a option in under $1000 range\n";
			    cout <<" option1 || option 2 || option 3 || option 4 || option 5 || option 6 || option 7 || option 8 || option 9 || option 10 \n";
			    cout << "Made your mind\n";
			    cin >> compchoice1;
			    break;
			    
			    case 2 :
			    cout <<" We have quite a option for $1000 to $2000 range\n";
			    cout <<" option 1 || option 2 || option 3 || option 4 || option 5 || option 6 || option 7 || option 8 || option 9 || option 10 \n";
			    cout << "Made your mind\n";
			    cin >> compchoice1;
			    break;
			    
			    case 3 :
			    cout <<" We have quite a option for $2000 and up range\n";
			    cout <<" option1 || option 2 || option 3 || option 4 || option 5 || option 6 || option 7 || option 8 || option 9 || option 10 \n";
			    cout << "Made your mind\n";
			    cin >> compchoice1;
			    break;
			    
			    default :
			    cout << " Looking to customize\n";
			    break;
			}
			cout <<" Press 1 to checkout | 2 to go back\n";
			cin >> choice4;
			
			while(choice4 == 2)
			{
			    	cout <<"How much are you looking to spend\n";
			cout <<"Press 1 for under 1000 | 2 for 1000 to 2000 | 3 for over 2000\n";
			cin >> choice3;
			
			 switch(choice3) 
			 {
			    case 1 :
			    cout <<" We have quite a option in under $1000 range\n";
			    cout <<" option1 || option 2 || option 3 || option 4 || option 5 || option 6 || option 7 || option 8 || option 9 || option 10 \n";
			    cout << "Made your mind\n";
			    cin >> compchoice1;
			    break;
			    
			    case 2 :
			    cout <<" We have quite a option for $1000 to $2000 range\n";
			    cout <<" option 1 || option 2 || option 3 || option 4 || option 5 || option 6 || option 7 || option 8 || option 9 || option 10 \n";
			    cout << "Made your mind\n";
			    cin >> compchoice1;
			    break;
			    
			    case 3 :
			    cout <<" We have quite a option for $2000 and up range\n";
			    cout <<" option1 || option 2 || option 3 || option 4 || option 5 || option 6 || option 7 || option 8 || option 9 || option 10 \n";
			    cout << "Made your mind\n";
			    cin >> compchoice1;
			    break;
			    
			    default :
			    cout << " Looking to customize\n";
			    break;
		     }
			cout <<" Press 1 to checkout | 2 to go back\n";
			cin >> choice4;
			}
			  cout <<"you have choosen " << compchoice1 << endl;
			  if (choice3 == 1)
			  { 
			      if(compchoice1 == 1)
			      { cout<<"Price is $800\n";}
			      else if(compchoice1 == 2)
			      { cout<<"Price is $700\n";}
			      else if(compchoice1 == 3)
			      { cout<<"Price is $750\n";}
			      else if(compchoice1 == 4)
			      { cout<<"Price is $600\n";}
			      else if(compchoice1 == 5)
			      { cout<<"Price is $780\n";}
			      else if(compchoice1 == 6)
			      { cout<<"Price is $900\n";}
			      else if(compchoice1 == 7)
			      { cout<<"Price is $850\n";}
			      else if(compchoice1 == 8)
			      { cout<<"Price is $999\n";}
			      else if(compchoice1 == 9)
			      { cout<<"Price is $950\n";}
			      else{cout <<"Price is $820\n";}
			  }
			  else if(choice3 == 2 )
			  {if(compchoice1 == 1)
			      { cout<<"Price is $1800\n";}
			      else if(compchoice1 == 2)
			      { cout<<"Price is $1700\n";}
			      else if(compchoice1 == 3)
			      { cout<<"Price is $1750\n";}
			      else if(compchoice1 == 4)
			      { cout<<"Price is $1600\n";}
			      else if(compchoice1 == 5)
			      { cout<<"Price is $1780\n";}
			      else if(compchoice1 == 6)
			      { cout<<"Price is $1900\n";}
			      else if(compchoice1 == 7)
			      { cout<<"Price is $1850\n";}
			      else if(compchoice1 == 8)
			      { cout<<"Price is $1999\n";}
			      else if(compchoice1 == 9)
			      { cout<<"Price is $1950\n";}
			      else{cout <<"Price is $1820\n";} }
			      else{
			          if(compchoice1 == 1)
			      { cout<<"Price is $2800\n";}
			      else if(compchoice1 == 2)
			      { cout<<"Price is $2700\n";}
			      else if(compchoice1 == 3)
			      { cout<<"Price is $2750\n";}
			      else if(compchoice1 == 4)
			      { cout<<"Price is $2600\n";}
			      else if(compchoice1 == 5)
			      { cout<<"Price is $2780\n";}
			      else if(compchoice1 == 6)
			      { cout<<"Price is $2900\n";}
			      else if(compchoice1 == 7)
			      { cout<<"Price is $2850\n";}
			      else if(compchoice1 == 8)
			      { cout<<"Price is $2999\n";}
			      else if(compchoice1 == 9)
			      { cout<<"Price is $2950\n";}
			      else{cout <<"Price is $2820\n";}
			          }
			  cout << "Thanks for shoping with us/n"; 
			}
				
		else
        {
			cout << "So what kind of gaming pc are you looking for\n";
			cout << "Do you want to be specific about company\n";
			cout << "1 for Dell/Alienware | 2 for HP | 3 for Apple | 4 for Lenovo | Have something different in mind, Type in\n";
			cin >> choice3;
			if (choice3 == 1)
			{ cout <<" option1 || option 2 || option 3 || option 4 || option 5 || option 6 || option 7 || option 8 || option 9 || option 10 \n";
			    cout <<"Made your mind\n";
			    cin >> compchoice1;
			}
			else if (choice3 == 2)
			{
			    cout <<" option1 || option 2 || option 3 || option 4 || option 5 || option 6 || option 7 || option 8 || option 9 || option 10 \n";
			    cout <<"Made your mind\n";
			    cin >> compchoice1;
			}
			else if (choice3 == 3)
			{
			    cout <<" option1 || option 2 || option 3 || option 4 || option 5 || option 6 || option 7 || option 8 || option 9 || option 10 \n";
			    cout <<"Made your mind\n";
			    cin >> compchoice1;
			}
			else if (choice3 == 4)
			{
			    cout <<" option1 || option 2 || option 3 || option 4 || option 5 || option 6 || option 7 || option 8 || option 9 || option 10 \n";
			    cout <<"Made your mind\n";
			    cin >> compchoice1;
			}