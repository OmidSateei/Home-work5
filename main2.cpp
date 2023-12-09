#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double salary, tax=0;
	cout<<"enter the salary";
	cin>> salary;
	
	if(salary<6000000){
		tax=0;
	} else if(salary>=6000000 && salary<8000000){
		tax=salary *0.05;
	} else if (salary>= 8000000 && salary<10000000){
tax= salary *0.1;
	} else if(salary >= 10000000 && salary < 14000000){
tax= salary* 0.15;
	} else if (salary>=14000000 && salary <18000000){
tax=salary*0.20;
	} else if (salary>= 18000000 && salary < 25000000){
tax= salary * 0.25;
	}else {
tax=*0.35;
	}
	double final salary= salart - tax;
	cout<<"final salary after tax deduction:"<<final salary<<end;
		return 0;
}