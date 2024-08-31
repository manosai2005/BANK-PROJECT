#include<stdio.h>
int ch,n1,dep,wtd;
float balance=0;
void menu(){
    printf("Menu:\n");
	printf("1.Deposit:\n");
	printf("2.Withdraw:\n");
	printf("3.Balance Enquiry:\n");
	printf("4.Exit\n");
}
void input(){
	printf("Enter your choice[1-4]:");
	scanf("%d",&ch);
	if(ch>=1 && ch<=2){
		printf("enter amount:");
		scanf("%d",&n1);
	}

}
void deposit(){
	dep=n1;
	balance+=dep;
	printf("Balance=%.2f\n",balance);
}
void withdraw(){
	wtd=n1;
	if(wtd<balance){
	balance-=wtd;
	printf("Balance=%.2f\n",balance);
	}else{
		printf("Insufficent balance :\n");
	}
}
void bal(){
	printf("Balance:%.2f\n",balance);
}
void bank(){
	switch(ch){
		case 1:deposit();break;
    	case 2:withdraw();break;
    	case 3:bal();break;
	    case 4:printf("exit\n");break;
	    default:printf("Invalid option\n");
	}
}
int main(){
	do{
		menu();
		input();
		bank();
	}while(ch!=4);
	return 0;
}





