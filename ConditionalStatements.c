#include<stdio.h>
main(){
	int m;
	printf("Enter the marks secured by the student : ");
	scanf("%d",&m);
	
	if(m==100 && m>=85){
		printf("Grade A");
	}
	else if (m<=84 &&  m>=70){
		printf("Grade B");
	}
	else if (m<=69 && m>=55){
		printf("Grade C");
	}
	else if (m<=54 && m>=40){
		printf("Grade D");
	}
	else{
		printf("Grade E");
	}

}
