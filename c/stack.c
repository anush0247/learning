#include<stdio.h>
#include<stdlib.h>

typedef struct nodeDef
{
  struct nodeDef *next;
  int data;
} node;


void push(node *stack, int data);
int pop(node *stack);

int main(char *argc, int argv)
{
  char ch;
  ch = getchar();
  printf("%d\n",ch);
  while(ch != '4'){
  
    scanf("%c", &ch);
    //ch = getchar();
    printf("%d",ch);
    //putchar(ch);
  }
  return 0; 
}
