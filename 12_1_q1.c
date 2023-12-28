/*
Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school
*/

#include<stdio.h>

	struct studata{
	int id;
	char name[10];
	int age;
	char cource[100];
	char city[50];
	int standerd;
	char school[100];	
	};
	
 main(){
	int i;
	
	  struct studata data[3];
	  
	  printf("Enter 3 Employe Details \n");
	 
	  for(i=0; i<3; i++){
		printf("Enter the name : ");
		scanf("%s",&data[i].name);
			   		
		printf("Enter the id : ");
		scanf("%d",&data[i].id);
		
		printf("Enter the age : ");
		scanf("%d",&data[i].age);
		
    	printf("enter the cource : ");
		scanf("%s",&data[i].cource);	   	
	
		printf("Enter the city name : ");
		scanf("%s",&data[i].city);	   	
		
		printf("Enter the standerd : ");
		scanf("%d",&data[i].standerd);	   	
		
		printf("Enter the school : ");
		scanf("%s",&data[i].school);	   	
		  
		printf("\n");
	}
		 		   		

    printf(" Details of all employes\n");
    
    for(i=0; i<3; i++){
        printf("Name : %s\n",data[i].name);

        printf("Id : %d\n",data[i].id);

        printf("Age : %d\n",data[i].age);
        
        printf("Cource: %s\n",data[i].cource);

        printf("City : %s\n",data[i].city);

        printf("Standerd : %d\n",data[i].standerd);
        
        printf("School : %s\n",data[i].school);
        printf("\n");
       }
}
