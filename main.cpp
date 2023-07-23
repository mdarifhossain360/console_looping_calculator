#include <iostream>
#include <windows.h>
#include <unistd.h>
int add,sub,mul,Div;
char variable;
using namespace std;
void calculator (){
	do{
	    int num_1,num_2;
	    char var;
	    char oparation;
		cout<<"Enter your number : ";
		cin>>num_1;
		cout<<"(+ | - | * | / ) : ";
		cin>>oparation;
		cout<<"Enter your number : "<<endl<<endl;
		cin>>num_2;		
		if (oparation=='+'){
			add=num_1+num_2;
			cout<<"Answer : "<<add<<endl;
			cout<<"Do you want to continue : ";
		    cin>>variable;
		    if (variable=='Y'||variable=='y'){
			  calculator();
		    }
		    else if(variable=='n'||variable=='N'){
			  exit(0);
		   }
		}
		else if (oparation=='-'){
			sub=num_1-num_2;
			cout<<"Answer : "<<sub<<endl;
			cout<<"Do you want to continue : ";
		    cin>>variable;
		    if (variable=='Y'||variable=='y'){
			calculator();
		    }
		    else if(variable=='n'||variable=='N'){
			  exit(0);
		    }
	    }
		else if (oparation=='*'){
			mul=num_1*num_2;
			cout<<"Answer : "<<mul<<endl;
			cout<<"Do you want to continue : ";
		    cin>>variable;
		    if (variable=='Y'||variable=='y'){
			   calculator();
		    }
		    else if(variable=='n'||variable=='N') {
			  exit(0);
		    }
		}
		else if (oparation=='/'){
			Div=num_1/num_2;
			cout<<"Answer : "<<Div<<endl;
			cout<<"Do you want to continue : ";
		    cin>>variable;
		    if (variable=='Y'||variable=='y'){
			  calculator();
		    }
		    else if (variable=='n'||variable=='N') {
			  exit(0);
		    }
		}
		else {
			cout<<"Invalid input"<<endl;
		}
    }while(true);
}
int main()
{
	calculator();
    return 0;
}
