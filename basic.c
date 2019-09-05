#include<stdio.h>
int rear=-1,font=-1;

int main(){

    printf("WELCOME TO THE WORLD OF CIRCULAR QUEUE\n\n");

    printf("ENTER THE SIZE OF THE QUEUE\n\n");
    int size=0;

    scanf("%d", &size);

    int cq[size];

    printf("PRESS 1 TO INSERT\nPRESS 2 TO DELETE\n");

    int a=0;

    while(1){

    switch(a){
        case 1:
        printf("ENTER THE ELEMENT THAT YOU WANT TO INSERT");
        int x;
        scanf("%d", &x);
        insert_cqueue(cq, x);
        break;


        case 2:
        printf("YOU ARE GOING TO DELETE THE ELEMENT ACCORDING TO FIFO CONCEPT\n\n");
        delete_cqueue();
        break;
    }
    }
}


int insert_cqueue(int cq[], int x){

}