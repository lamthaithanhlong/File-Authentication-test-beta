//#include<stdio.h>
//#include<conio.h>
//#include<ctype.h>
//
//#define size 1
//
//struct MyData
//{
//	int id;
//	char name[100];
//}mydata;
//
//
//void CreateFile() 
//{
//	FILE* data;
//	char create;
//	data = fopen("data.txt", "r+");
//	if(data == NULL) 
//	{
//		printf("Press N to create new file");
//		create = _getche();
//		if(tolower(create) == 'n') 
//		{
//			data = fopen("data.txt", "wt");
//			printf("\nNew database is created. Please check your directory");
//		}
//		else 
//		{
//			printf("\n\tThanks for using application. Exit");
//		}
//	}
//}
//
//void AppendFile() 
//{
//	FILE* data;
//	data = fopen("data.txt", "a");
//	printf("\nInput id: ");
//	scanf("%d", &mydata.id);
//	printf("\nInput name: ");
//	scanf("%s", mydata.name);
//	if(fwrite(&mydata, sizeof(mydata), size, data) != size) 
//	{
//		printf("Error");
//	}
//	else 
//	{
//		printf("sucess");
//	}
//	fclose(data);
//}
//
//void DisplayFile() 
//{
//	FILE* data;
//	data = fopen("data.txt", "r+");
//	while(fread(&mydata,sizeof(mydata),size,data) == size) 
//	{
//		printf("\n");
//		printf("\nProblem id : %d", mydata.id);
//		printf("\nProblem name: %s", mydata.name);
//	}
//}
//
//
//int main() 
//{
//	CreateFile();
//	AppendFile();
//	DisplayFile();
//	return 0;
//}