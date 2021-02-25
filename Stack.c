#include<stdio.h>
int stack[100],n,top = -1;

void push(int num, int n){
    if(top == n-1){
        printf("\n Stack Overflow..\n");
        return ;
    }
    else{
        stack[++top] = num;
    }
}

int pop() {
    if(top<0){
        printf("\nStack Underflow..\n");
        return 0;
    }
    else{
        return stack[top--];
    }
}

void display() {
    printf("\nStack Values : ");
    for(int i = 0 ; i < n ; i++){
        printf("%d ",stack[i]);
    }
}
int main(){
    int flag = 1, choice, num;
    printf("Enter the SIZE of the array : ");
    scanf("%d",&n);

    while(flag) {

    printf("\nWhat You Want to Do.\n");
    printf("1: To PUSH into Stack\n");
    printf("2: To POP from Stack\n");
    printf("3: To DISPLAY Stack\n");
    printf("0: Exit\n");

        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            flag = 0;
            break;    
        case 1:
            printf("Enter Number : ");
            scanf("%d",&num);
            push(num,n);
            break;
        case 2:
            printf("\n%d\n", pop());
            stack[top + 1] = 0;
            break;
        case 3:
                display();
            break;
        default:
            printf("Invalid Choice.\n");
            break;
        }
        
    }
    return 0;
}