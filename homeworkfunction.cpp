#include<iostream>
#include<time.h>
using namespace std;
int checkNum(int,int);
int main() 
{
    int num,gue=0;
    srand (time(NULL));
    int random=rand()%10+1;
    cout<<"###Welcome to guessing number game###\n";
    cout<<"Secret number has been chosen\n";
    do{
        cout<<"Guess the number (1 to 10): ";
        cin>>num;
        gue++;
        checkNum(random,num);
    }while(random!=num);

    cout<<"\nCongratulations!\n";
    cout<<"The secret number is "<<random<<"\n";
    cout<<"You made "<<gue<<" guesses\n";
    return (0);
}

int checkNum(int c,int n)
{
    if(c>n)
	{
        cout<<"The secret number is lower\n\n" ;
	}
    else if(c<n)
	{
        cout<<"The secret number is higher\n\n";
	}
    return (c,n);
}
