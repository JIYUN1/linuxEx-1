#include <stdio.h>
#include <string.h>
#define DEBUG 1
int main(void){
   int i;
   char strInput[51],charInpu2[51];
   int strSize=0;
   
   //1. ���ڿ��� �Է� �޴´�.(�ִ� 50����+NULL����)
   strSize= scanf("%s",&strInput);
   #ifdef DEBUG
   printf("%d %s \n",strSize,strInput);
   #endif
   //2. �Է¹��� ���ڿ��� �����ҹ������� Ȯ���Ѵ�.
   //   ���̿��� �Է��� �ް� �Ǹ� �޼����� ����ϰ� ����
   strSize = strlen(strInput);
   for(i=0;i<strSize;i++){
      if(!(strInput[i]>='a' && strInput[i]<='z')){
         printf("Error : strInput ���� ����.");
         return -1;
      }
   }
   #ifdef DEBUG
   printf("strInput is OK\n");
   #endif
   //3.�縰������� Ȯ���Ѵ�.
   #ifdef DEBUG
   if(strSize%2)
      printf("strSize is odd\n");
   else
      printf("strSize is even\n");
   #endif
   for(i=0;i<(strSize>>1);i++){
      if((strInput[i]==strInput[strSize-1-i])){
         printf("strInput is not palindrome \n");
         return -1;
      }
   }
   #ifdef DEBUG
   printf("strInput is palindrome \n");
  #endif
   
   return 0;
}


