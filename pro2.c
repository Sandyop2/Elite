int main(){
	for(;;)[
	printf("1.push\n2.pop\n3.display\n4.exit\n");
	int choiices,value;
	printf("enter your choice[1,2,3,4,5]:\n");
	scanf("%d,&choices);
	switch(choices){
	case 1:
	printf("enter the value to be added:\n");
	scanf("%d",&value);
	push(value);
	printf("the %d id added to stack",value);
	break;
	case 2:
	pop();
	printf("the last element is deleted\n");
	break;
	case 3;
	printf("the elements of stack are:\n");
	display();
	break;
	case 4;
	exit(0);
}
}
}

