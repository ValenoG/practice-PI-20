#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int i, maxLength=0, maxIndex, lineSize=5000, countOfLines=3;
	printf("������� ���������� �����: ");
	scanf("%d",&countOfLines);
	char str[countOfLines][lineSize];
	for(i=0;i<countOfLines;i++){
		printf("������� ������[%d]: ",i+1);
		scanf("%s",&str[i]);
	}
	printf("��������� ����� \n");
	for(i=0;i<countOfLines;i++){
		if(strlen(str[i])>maxLength){
			maxIndex = i;
			maxLength = strlen(str[i]);
		}
		printf("%d) %s\n",i+1,str[i]);
	}
	printf("�������� ������� ������ ��� ������� [%d]. ���������� �������� - [%d]",maxIndex+1,maxLength);
	return 1;
}
