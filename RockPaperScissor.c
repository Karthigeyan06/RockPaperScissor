#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int a[]={1,2,3};
    int size = sizeof(a) / sizeof(a[0]);
    srand(time(NULL));
    int random_index = rand() % size;
    int key= a[random_index];

    

    printf("Enter your choice");
    printf(" 1--> Rock | 2--> Paper | 3--> Scissor \n");
    int op;
    scanf("%d", &op);


    if (op==1){
        char u[]="Rock";
        printf("Your Choice: %s \n",u);

    }

        else if (op==2)
        {
            char u[]="Paper";
            printf("Your Choice: %s \n",u);
        }
        else{
            char u[]= "Scissor";
            printf("Your Choice: %s \n",u);
        }

    if (key==1){
        char ch[]="Rock";
        printf("Computer Choice: %s \n",ch);

    }

        else if (key==2)
        {
            char ch[]="Paper";
            printf("Computer Choice: %s \n",ch);
        }
        else{
            char ch[]= "Scissor";
            printf("Computer Choice: %s \n",ch);
        }

    
    
    
    if (key==op){
        printf("It's A Tie !!! \n");
    }

            else if (key==1 && op==2){
                printf("Hurray ! You won !! \n");
            }

            else if (key == 1 && op==3){
                printf("Oops ! You lost !! \n");
            }

            else if ( key==2 && op==1){
                printf("Oops ! You lost !! \n");
            }

            else if (key==2 && op==3){
                printf("Hurray ! You won !! \n");
            }

            else if (key == 3 && op==2){
                printf("Oops ! You lost !! \n");
            }

            else {
                printf("Hurray ! You won !! \n");
            }


    

}