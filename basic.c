#include<stdio.h>
int rear = -1, front = -1;

int main(){

    printf("WELCOME TO THE WORLD OF CIRCULAR QUEUE\n\n");

    printf("ENTER THE SIZE OF THE QUEUE\n\n");
    int size=0;

    scanf("%d", &size);

    int cq[size];
    int a=0,ch=1;
    
    while(ch){

        printf("PRESS 1 TO INSERT\nPRESS 2 TO DELETE\n");

        scanf("%d", &a);

    switch (a){
        case 1:
        printf("ENTER THE ELEMENT THAT YOU WANT TO INSERT");

        int x;
        scanf("%d", &x);
        insert_cqueue(cq, x, size);
        break;


        case 2:
        //printf("YOU ARE GOING TO DELETE THE ELEMENT ACCORDING TO FIFO CONCEPT\n\n");
        delete_cqueue(cq, size);
        break;

        default:
        printf("WRONG CHOICE\n\n");
    }

    printf("TO STOP PRESS 0 ELSE PRESS 1\n");
    scanf("%d", &ch);
    }
}


int insert_cqueue(int cq[], int x, int size){


    if(front == (rear+1)%size){
        printf("QUEUE IS FULL\n SO TAKE A CHILL PILL !!\n");
    }

    else{

        if(front==-1||rear==-1){
            front = rear = 0;
            cq[front] = x; 
        }
        else{
                rear = (rear+1)%size;
                cq[rear] = x;
        }

    }

}


int delete_cqueue(int cq[], int size){


    if(front == -1){
        printf("CQ IS EPMTY\n");
    }
    else
    {
        
        if(front == rear){

            printf("DELETED ELEMENT IS %d\n", cq[front]);

            front = rear = -1;
        }
        else
        {
        printf("DELETED ELEMENT IS %d\n", cq[front]);

        front = (front+1)%size;
        }

    }
}