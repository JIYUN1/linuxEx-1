#include<stdio.h>
#include<string.h>
#include<stdlib.h>



void main()
{
	void main()
{
	char a[51]={0,};
	char c[51]={0,};
	int i,b,j,e;

	while(1)
	{
		printf("���� �Է� : ");
		scanf("%s",a);

		b=strlen(a);


		for(i=0;i<b;i++)
			if(!('a'<=a[i] && a[i]<='z')){
				printf("�Է� ���ڿ� ����\n");e=1;break;}

			if(e==1) break;

			j=b-1;

			if(b%2==0)//¦��
			{
				for(i=0;i<b/2;i++)
				{

					if(!(a[i]==a[j]))
					{
						printf("�Ӹ���� �ƴ�\n");
						break;
					}

					else if(i== (b/2)-1)
						printf("�Ӹ����\n");

					j--;
				}
			}

			else if(b%2==1)//Ȧ��
			{
				for(i=0;i<b/2+1;i++)
				{

					if(!(a[i]==a[j]))
					{
						printf("�Ӹ���� �ƴ�\n");
						break;
					}

					else if(i== (b/2)-1)
						printf("�Ӹ����\n");

					j--;
				}
			}


			j=b-1;// reset
	}

}


}