#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
typedef struct date{
    int year;
    int month;
    int dat;
}datee;
typedef struct time{
    int sec;
    int min;
    int hour;
}timee;

void display(datee dd){
    printf("the date is %d / %d / %d \n ",dd.dat,dd.month,dd.year);
}
void display1(timee dk){
    printf("the time is %d / %d / %d \n ",dk.sec,dk.min,dk.hour);
}

int datetime(datee df, datee hf, timee tf , timee lf){
    if(df.year>hf.year || tf.hour < lf.hour){
        return 1;
    }
    if(df.year>hf.year || tf.hour > lf.hour){
        return 1;
    }
    if(df.year<hf.year || tf.hour < lf.hour){
        return -1;
    }
    if(df.year<hf.year || tf.hour > lf.hour){
        return 1;
    }
    if(df.month>hf.month || tf.min > lf.min){
        return -1;
    }
    if(df.month>hf.month || tf.min < lf.min){
        return 1;
    }
    if(df.month<hf.month || tf.min > lf.min){
        return -1;
    }
    
    if(df.month<hf.month || tf.min < lf.min){
        return 1;
    }
    if(df.dat>hf.dat || tf.sec > lf.sec){
        return -1;
    }
    if(df.dat>hf.dat || tf.sec < lf.sec){
        return 1;
    }
    if(df.dat<hf.dat || tf.sec > lf.sec){
        return -1;
    }
    if(df.dat<hf.dat || tf.sec < lf.sec){
        return 1;
    }
    return 0;
}
int main(){
datee d1 = { 24, 11, 30};
datee d2 = { 24, 11, 30};
timee t2 = { 10, 34, 03};
timee t1 = { 10, 33, 03};
display(d1);
display(d2);
display1(t1);
display1(t2);

int a = datetime(d1,d2,t1,t2);
printf("the dateand time  compare is %d",a);
return 0;
}
