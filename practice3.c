// #include <stdio.h>
// #include <math.h>

// float square(int n){
//     float p = pow(n,2);
//     return p;
// }

// int main(){
//     float num;
//     printf("Enter number:");
//     scanf("%f", &num);

//     printf("the square of the number is: %.2f\n", square(num));
    
// }


// #include<stdio.h>

// int sum(int n){
//      if(n==1){
//     return n;
//      }
//     long int sumofNm1 = sum(n-1);
//     long int sumofN= sumofNm1+n;
//     return sumofN;
// }

// int main(){
//     long int num;
//     printf("Enter number for the sum:");
//     scanf("%ld", &num);

//     printf("The sum of the first N natural numbers is %ld", sum(num));
// }


//FACTORIAL---------------------------------------------------------

// #include<stdio.h>
// #include<math.h>
// int fact(int n){
   
//         if(n<0){
//             printf("Enter the valid Whole Number: \n");
//         }
//         else if(n==0){
//        return 1;
//     }

//     int factofnm1 = fact(n-1);
//     int factofn=factofnm1*n;
//     return factofn; 
// }

// int main(){
//     int n; 
//     printf("Enter the number:");
//     scanf("%d", &n);

//     printf("The factorial of given number is: %d", fact(n));
// }

#include<stdio.h>

int fibo(int n){

   if(n==0) {return 0;}
   if(n==1) {return 1;}
   int FofNm1=fibo(n-1); 
   int FofNm2=fibo(n-2);
   int FofN= fibo(n-1)+ fibo(n-2);
//    printf("%d", FofN);
   return FofN;
}

int main(){

    int n;
    printf("The Fibonacci of %d is %d\n", n, fibo(n));

    
return 0;  
}








