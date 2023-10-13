#include <stdio.h>
#include <math.h>



double z(double x, double y){
     if ((pow(x,2) + pow(y,2))<2) {
                   return ((pow(1 - sin( pow(x,2) + pow(y,3) ),2)));
}
     else {
                   return sqrt(pow(x,2)*y + 8);

}

}


int main(){
       double xn=0.2, xk=1, yn=1, yk=3, hx=0.5, hy=1.2;
       double res;
       double sum=0, colvo=0;
for (double x = xn; x<xk; x += hx){
for (double y = yn; y<yk; y += hy){
    res = z(x, y);
    printf("x=%f y=%f z=%f\n", x, y, res);
if (res>=0.5){
sum+=res;
colvo+=1;
}
}
}
printf("srednee=%f\n", sum/colvo);



return 0;;
}
