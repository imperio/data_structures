#include<iostream>

using namespace std;
const int size=10;


class Stack{
      public:
             Stack();
             bool ekle (int);
             bool getir (int&);
             void listele ();
             int say();
      private:
              int dizi[size]; //stack icin hafiza alani
              unsigned int Top; //en son bos alani gosteren indis
              };
              
Stack::Stack(){
               Top=0; }
bool Stack::ekle(int Item){
     //dolu mu?
     if(Top>=size) return false;
     dizi[Top]=Item;
     Top++;
     return true;}
     
bool Stack::getir(int &Item){
     //bos mu?
     if(Top<=0) return false;
     Top--;
     Item=dizi[Top];
     cout<<"son eleman"<<Item<<endl;
     return true;}
     
void Stack::listele(){
     for(int i=0;i<Top;i++)
     cout<<dizi[i]<<endl;}
     
int Stack::say(){
     return Top;}

int main(){
    Stack stack;
    int item,son,belirle,sayi;
    char ch;

    
    do{
         cout<<"menu icin M cikmak icin Q"<<endl;
    cin>>ch;
    if(ch=='M'|| ch=='m')
    {
                 
     cout<<"(e) ekle"<<endl
         <<"(g) getir"<<endl
         <<"(l) listele"<<endl
         <<"(y) say"<<endl
         <<"(p) programdan cik"<<endl;
     cin>>ch;
      switch(ch){
          case 'e': 
               cout<<"eklemek istediginiz sayiyi girin:"<<endl;
               cin >>item;
               stack.ekle(item);break;
          case 'g': 
               stack.getir(son);break;
          case 'l':
               stack.listele();break;
          case 'y':
               sayi=stack.say();
               cout<<"eleman sayisi"<<sayi<<endl;break;
          case 'p':
               return 0;
          default: cout<<"yanlis secim yaptiniz"<<endl;}}
          
          
               
    else if(ch=='Q' || ch=='q')
                 return 0;
    else cout<<"yanlis secim"<<endl;
    
    cout<<"devam etmek icin 0"<<endl;
               cin>>belirle;}
    while(belirle==0);
    
    system("pause");
    return 0;
}
//veriyapilari yigin sorusu-tugce.
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     
     
     
     
