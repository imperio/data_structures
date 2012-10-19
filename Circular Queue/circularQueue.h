#ifndef circularQueue_h
#define circularQueue_h
#define array_max 10

class circularQueue
{
      public:
             circularQueue();
             bool push (int newData);
             bool pop (int& cell);
             bool isEmpty();
      private:
              int data[array_max];
              int qB;
              int qS;
              int number;};
#endif
