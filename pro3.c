void push(int value){
   if(top==maxsize-1)
     printf("stack is full\n");
   else
     stack[++top]=value;
}
