//Module 1 Assignment – Part A – Double Bonus


# include <stdio.h>

void BubbleSort(){
int size;


printf("Please Enter The Size of  Array \n");
scanf("%d" ,&size);
int Elements[size];

for (int i=0;i<=size-1;i++){
    printf("Enter Element %d :",i+1);
    scanf("%d" ,&Elements[i]);
} 
    printf("The Original Array \n");
    for(int i=0;i<=size-1;i++){
        printf("%d ",Elements[i],"\n");
    }
    
    int temp;
    for (int i=0;i<=size-1;i++ ){
        for (int j=0;j<size-i-1;j++){
            if (Elements[j]>Elements[j+1]){
                temp=Elements[j];
                Elements[j]=Elements[j+1];
                Elements[j+1]=temp;
            }
        }
    }
    printf("\n");
    printf("The Sorted Array \n");
        for(int i=0;i<=size-1;i++){
        printf("%d ",Elements[i]);
    }

}
int main(){

BubbleSort();

    return 0;

}

