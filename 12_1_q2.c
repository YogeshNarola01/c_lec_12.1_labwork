/*
Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
- emp_id
- emp_name
- emp_age
- emp_role
- emp_city
- emp_experience
- emp_company_name
*/

#include<stdio.h>


	struct employes{

	int id;
	char name[10];
	int age;
	char role[100];
	char city[50];
	int experience;
	char companyname[50];	
	};
	
int main()
{
	int i,n;
	printf("Enter the number of employes : ");
	scanf("%d",&n);
	
	  struct employes data[n];
	  
	  printf("Enter %d Employe Details \n \n",n);
	 
	  for(i=0; i<n; i++){
		printf("Enter the name : ");
		scanf("%s",&data[i].name);
			   		
		printf("Enter the id : ");
		scanf("%d",&data[i].id);
		
    	printf("enter the position : ");
		scanf("%s",&data[i].role);	   	
	
		printf("Enter the city name : ");
		scanf("%s",&data[i].city);	   	
		
		printf("Enter the company name : ");
		scanf("%s",&data[i].companyname);	   	
		
		printf("Enter the expericence(years) : ");
		scanf("%d",&data[i].experience);	   	
	
		printf("Enter the age of employe : ");
		scanf("%d",&data[i].age);	  
		printf("\n");
	}
		 		   		

    printf(" Details of all employes\n");
    
    for(i=0; i<n; i++){
        printf("Name : %s\n",data[i].name);

        printf("Id : %d\n",data[i].id);

        printf("role : %s\n",data[i].role);

        printf("City : %s\n",data[i].city);

        printf("CompanyName: %s\n",data[i].companyname);

        printf("Experience : %d\n",data[i].experience);
        
        printf("age : %d\n",data[i].age);
       }
 
}
