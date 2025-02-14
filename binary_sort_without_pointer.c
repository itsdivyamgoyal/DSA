#include<stdio.h>
int sort2(int arr[]){
    int l=sizeof(arr);
    printf("%d\n",l);
    printf("%d\n",arr);
    printf("%d\n",&arr[0]);

    return 0;
}
int main(){
    int i;
    // printf("Enter the size:");
    // scanf("%d",&i);
    int a1[]={4,6,98,7,9,8,9,7,5,6,4};
    // for (int j=0;j<i;j++){
    //     printf("Enter the %d element :",j+1);
    //     scanf("%d",&a1[j]);
    
    // }
   // printf("%d\n",sizeof(a1));
    //printf("%d\n",*(&a1 +1));
   printf("%d\n",&a1);
    sort2(a1);
    return 0;
}
// int main()
// {
 
//     int Arr[] = { 1, 2, 3, 4, 5, 6 };
//     // variable to store the size of Arr
//     int length = (&Arr + 1);
 
//     printf( "Number of elements in Arr[] is: %d", length);
//     return 0;
// }