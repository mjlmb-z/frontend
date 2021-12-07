#include<iostream.h>
usingnamespacestd;
classDeque
intarr[MAX];
intrear;
public:
{
rear = 0;
}
// Operations on Deque:
voidinsertrear(intkey);
voiddeleterear();
boolisEmpty();
intgetRear();
boolDeque::isFull()
return((front 0 && rear size-1)
}
// Checks whether Deque is empty or not.
{
}
// Inserts an element at front
{
if(isFull())
cout << 'Overflown'<< endl;
}
// If queue is initially empty
{
rear = 0;
elseif(front 0)
front = front-1;
// insert current element into Deque
}
// function to inset element at rear end
voidDeque ::insertrear(intkey)
if(isFull())
cout << ' Overflown '<< endl;
}
// If queue is initially empty
{
rear = 0;
elseif(rear size-1)
else
arr[rear] = key ;
voidDeque ::deletefront()
// check whether Deque is empty or not
{
return;
if(front rear)
front = -1;
}
// back to initial position
front = 0;
else// increment front by '1' to remove current
front = front+1;
voidDeque::deleterear()
if(isEmpty())
cout << ' Underflown'<< endl ;
}
// Deque has only one element
{
rear = -1;
elseif(rear 0)
else
}
// Returns front element of Deque
    {
        if(isEmpty())
        cout << ' Underflown'<< endl;
    }
}
    {
        if(isEmpty() rear < 0)
        cout << ' Underflown'<< endl;
    }
}
{
cout << 'Insert element at rear end : 5 n';
dq.insertrear(10);
cout << 'get rear element '<< ' '
cout << 'After delete rear element new rear'
dq.insertfront(15);
cout << 'get front element '<< ' '
<< 'front become '<< dq.getFront() << endl;
}