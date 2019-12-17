#include<stdio.h>
#include<conio.h>
#include<ctype.h>

#define size 1
#define max_data 10

struct MyData
{
	int id;
	char name[100];
	int mark;
}mydata;

struct List {
	MyData a[100];
	int n;
};

void CreateFile() 
{
	FILE* data;
	char create;
	data = fopen("data.txt", "r+");
	if(data == NULL) 
	{
		printf("Press N to create new database");
		create = _getche();
		if(tolower(create) == 'n') 
		{
			printf("\nPlease wait for file to generate");
			data = fopen("data.txt", "w");
			printf("\nFile is successfully created in your directory");
		}
		else
		{
			printf("\nthanks for using our application. EXIT");
		}
	}
}

void InputValue(MyData &data) 
{
		printf("\n");
		printf("Input id: ");
		scanf("%d", &data.id);
		printf("Input name: ");
		scanf("%s", data.name);
		printf("Input mark: ");
		scanf("%d", &data.mark);
}

void AppendFile() 
{
	FILE* data;
	List l;
	data = fopen("data.csv", "a");
	printf("Input number of input: ");
	scanf("%d", &l.n);
	for (int i = 0; i < l.n; i++)
	{
		InputValue(mydata);
		if (fwrite(&mydata, sizeof(mydata), size, data) == size)
		{
			printf("sucess");
		}
		else
		{
			printf("fails");
		}
	}

	fclose(data);
}

void DisplayFile() 
{
	FILE* data;
	data = fopen("data.csv", "r+");
	while(fread(&mydata, sizeof(mydata),size,data) == size) 
	{
		printf("\nID : %d", mydata.id);
		printf("\nName : %s", mydata.name);
		printf("\nMark : %d", mydata.mark);
	}
}

void IncreaseSort(List l)
{
	FILE* data;
	data = fopen("data.txt", "a+");
	for (int i = 0; i < l.n - 1; i++) {
		for (int j = i + 1; j < l.n; j++) {
			if(l.a[i].mark > l.a[j].mark) 
			{
				int t = l.a[i].mark;
				l.a[i].mark = l.a[j].mark;
				l.a[j].mark = t;
			}
		}
	}
}

int main() 
{
	List l;
	//CreateFile();
    AppendFile();
	//IncreaseSort(l);
	DisplayFile();
	return 0;
}