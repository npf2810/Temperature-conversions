#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
float temp(int fah);
float temp(int fah){
  float cel;
  cel=(5.0/9)*(fah-32);
  return cel;
}
main(){
int i;
for(i=LOWER;i<=UPPER;i=i+STEP)
    printf("%3d\t%6.2f\n",i,temp(i));
return 0;
}