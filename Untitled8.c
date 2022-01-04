#include <stdio.h>
#include <stdbool.h>
	
	bool prefectQ(int a);
	int main(){
		
		printf("%d",perfectQ(27));
	}
    bool perfectQ(int a){
    	int i, num=0, res =0;
    	for(i=a;i>1;i--){
	    	if(a%i==0){
	    		
	    		res=a/i;
	    		num=num+res;
	    	}
	    }
	    if (num==a){
    		return 1;
    	}
    	else 
		return 0;
    }
    