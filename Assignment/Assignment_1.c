Q1:
#include <stdio.h>
  2 int main(){
  3        int n,itr;
  4        printf("\nEnter the n value: \n");
  5        scanf("%d",&n);
  6        for(itr=1;itr<n;itr++)
  7        {
  8            printf("%d, ",(itr*itr)-1);//printing the numbers
  9        }
 10        printf("%d",(itr*itr)-1);
 11        printf("\n\n");
 12       return 0;
 13 }
 14

Q3:
 #include <stdio.h>
  2 int main(){
  3       int n;
  4       printf("\nEnter the n value\n");
  5       scanf("%d",&n);
  6       for(int i = 0;i<n;i++){//for row
  7          for(int j=0;j<=i;j++){//for column print
  8             printf("* ");//prints the * with spaces
  9          }
 10          printf("\n");
 11       }
 12
 13       return  0;
 14 }
~

Q2
#include <stdio.h>
  2 int main(){
  3     int sum =0;
  4     for(int i =0; i<=6; i++){
  5         int n =i*i;//Squares the give value
  6         if(i%2==0){
  7           sum =+ n;
  8         }
  9         else{
 10           sum -= n;
 11         }
 12     }
 13     sum += 1;//prints the sum
 14     printf("\nThe sum of series is: %d\n", sum);
 15     return 0;
 16 }


Q5:
#include <stdio.h>
  2 int main(){
  3     int num=1;
  4     int n;
  5     printf("\nEnter the value:");
  6     scanf("%d",&n);
  7     for(int i =0;i<n;i++){//for the row
  8         for(int j =0;j<n;j++){//for column
  9             if(j<4)
 10                printf("%d*",num);//prints the *
 11             else
 12                printf("%d",num);//prints the numbers
 13             num++;
 14         }
 15         printf("\n");
 16     }
 17     return 0;
 18 }

Q2:
 #include <stdio.h>
  2 int main(){
  3     int n;
  4     int m=1;
  5     printf("\nEnter the n value: \n");
  6     scanf("%d",&n);
  7     for(int i =0;m<64;i++){
  8        printf("%d, ",m);
  9        m*=2;
 10
 11     }
 12     printf("%d.",m*=2);
 13     printf("\n\n");
 14     return 0;
 15
 16 }
