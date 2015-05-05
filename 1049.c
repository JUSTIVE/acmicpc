#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void main(){
	int needs,amount,currentval;
	int i=0;
	int tempBundle, tempSingle;
	scanf("%d %d", &needs,&amount);
	for (i = 0; i < amount; i++)
	{
		scanf("%d %d", &tempBundle,&tempSingle);
		if (i == 0)
		{
			currentval = tempBundle;
		}
		else{
			if (tempBundle < currentval)
				currentval = tempBundle;
		}
		if (tempSingle*needs < currentval)
			currentval = tempSingle*needs;
		
	}
	printf("%d",currentval);
}