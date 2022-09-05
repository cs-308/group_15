#include "functions.h"

int factorial(int n){
    if(n<0){
<<<<<<< HEAD
    	cout<<"Enter a positive number :";
=======
    	return -1;
>>>>>>> bug_fix
    }
    else if(n!=1){
	return(n * factorial(n-1));
    }
    else if(n==2){return 2;}
    else return 1;
}
