#include <stdio.h>

int main(){
    int id,units;
    float bill,surchage;
    scanf("%d",&id);
    scanf("%d",&units);
    if(units<199){
        (bill=units*1.20);
    }else if(units>=200 && units<=400)
{
    (bill=(199*1.20)+(units-199)*1.50);
   }else if(units>=400 && units<=600){
    (bill=(199*1.20)+(200*1.50)+(units-399)*1.80);
   }else if(units>=600){
    (bill=(199*1.20)+200*1.50+200*1.80+(units-599)*2.00);
   }

   if(bill>400){
    surchage=bill*0.15;
    bill=(bill+surchage);
   }
   if(bill<100){
    bill=100;
   }
   printf("%d %.2f",id,bill);

    return 0;
}