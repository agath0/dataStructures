//Double Ended Queue
//In Queue
//-front is used for deletion
//-rear is used for insertion
//
//In Dequeue
//-front is used for both deletion and insertion
//-rear  is also used for both deletion and insertion
//
//Note 
//-we are not strictly followin FIFO in a dequeue
//-To delet using rear take out the value
//at rear and decrement rear
//-To delet using front move front one step(increment)
//and delete the value
//-To insert using front insert the value
//and decrement the front
//-To insert using rear increment rear and insert value
//-You can use array or linked list to implement dequeue
//
//There are Two types of dequeue
//
//-Input restricted dequeue
//	insert   delete
//front   no	   yes
//rear	  yes	   yes
//
//-Output restricted dequeue
//	insert   delete
//front   yes	   yes
//rear	  yes	   no
