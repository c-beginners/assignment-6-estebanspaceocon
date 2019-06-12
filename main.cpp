#include <iostream>
#include <stdlib.h>
#include <time.h>

int main(){
int x,y,input,correct=0,score=0;	//Implement a random function(with seed) for x

std::cout<<"Welcome!\nChoose a difficulty\n(1)Easy(y=3)\n(2)Medium(y=6)\n(3)Hard(y=9)\n(4)Expert(y=12)\n";
std::cin>>y;

srand(time(NULL));
x=rand()%10;
y*=3;

std::cout<<"Enter any number other than "<<x<<"\n";

while(true){
	std::cout<<"Enter your number: ";
	std::cin>>input;
	if(input==x){
		std::cout<<"Hey! you were not supposed to enter "<<input<<"\n";
		break;
		}
	else{
		correct++;
		std::cout<<"well done!\n";
		}
	if(correct==y){
	score++;
	correct=0;}
	}
std::cout<<"Your score: "<<score<<"\n";
return 0;
}
