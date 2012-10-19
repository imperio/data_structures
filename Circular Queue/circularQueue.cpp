#include <iostream>
#include "circularQueue.h"
using namespace std;

circularQueue::circularQueue()
{
        qB=-1;
        qS=-1;
        number=0;                       
}
bool circularQueue::push (int newData){
     if(number>=array_max)
        return false;
     if(qB==-1) 
        qB++;
     if(qS==array_max-1)
        qS=0;
     else
        qS++;
     data[qS]=newData;
     number++;
     return true;
}
bool circularQueue::pop (int& cell){
     if(number==0)
        return 0;
     cell=data[qB];
     if(qB==array_max-1)
        qB=0;
     else
       qB++;
     number--;
     
     if(number<=0) qB=qS=-1;
     
     return true;
}
bool circularQueue::isEmpty(){
     if(number==0) return true;
     else
     return false;}
     
