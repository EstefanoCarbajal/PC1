#include <iostream>
#include "type.h"
#include "stack.h"
#include "linkedlist.h"
#include "queue.h"

using namespace std;

int main() {

 
  LinkedList<TX> mylist;
  Stack<TX> stack;Stack<TX> *pStack = new Stack<TX>;
  
 TX vector[6]={10,11,12,13,14,15};
  auto CAPICUA=1,NOCAPICUA=1,
        i=1,z=1;
 for(i=1;i<=6;i++){          
    if(i%2==0){
    }
    
  }
  //stack
   while(z<=6){

    if(z%2==1){
    for( auto z = 1 ; z < 6 ; z++ )
     stack.push(z+z);

     cout <<z<<  endl;
    }
    z++;
  }
  //queue
  cout<<" "<<endl;
  for(auto x=2; x<=6; x++)
  {   mylist.insert_at_tail(i++);
      cout<<endl;
      mylist.print(cout);
  }


} 