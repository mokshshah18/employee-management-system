#include <stdio.h>
#include <json-c

int employeeVals(employeeId){
	int employeeCount=sizeof(employeeId)/sizeof(employeeId[0]);
	for (int i = 0; i < employeeCount; i++) {     
        printf("%d ", employeeId[i]);     
    	}   
}

int main(){
	int* employeeId;
	employeeId = calloc(10, sizeof(int));
	//={1,2,3,4,5,6,7,8,9,10};
	int employeeCount=sizeof(employeeId)/sizeof(employeeId[0]);
	int option;
	printf("1: Look at all employees\n"); // should show employee, their department, their emails and months in company
	scanf("%d",&option);
	if(option==1){
		printf("Now showing all employee data:\n");
		for (int i = 0; i < employeeCount; i++) {     
        printf("%d ", employeeId[i]);     
    	}   
	}
	free(employeeId);
	return 0;
}