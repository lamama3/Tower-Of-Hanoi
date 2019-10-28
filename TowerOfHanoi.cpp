/*Tower Of Hanoi or TOH in short, is a game containing three pegs A, B, C and A contains disks of different diameters in such a way that larger disk is always below a smaller disk.
The objective is to move the disks from peg A to peg B, using peg C as auxiliary following following rules :-

1.Only one disk can be moved among the towers at any given time.
2.Only the “top” disk can be removed.
3.No large disk can sit over a small disk.
*/

/*Algorithm Of Tower Of Hanoi Puzzle

A = source peg, B = destination peg, C = auxiliary peg

1.If n = 1, move the single disk from A to B and stop.
2.Move the top n-1 disks from A to C(auxiliary peg).
3.Move the remaining nth disk from A to B.
4.Move the n-1 disk from C to B using A as auxiliary.
*/

//@author: Lama Mtit


#include<iostream>
using namespace std;


void TowerOfHanoi(int n,char Sour, char Aux,char Des) //n nu. of disks
{ 
	if(n==1)    //Base case
	{
		cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl; // move disk from source to dest <if only 1 disk>  
		return;
	}
	
	    // recursive case
	TowerOfHanoi (n-1 , Sour , Des , Aux); // Step 1: Move top n-1 disks from A to B, using C as auxiliary
	    
	cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;    // Step 2: move disk from source "A" to dest "C" 
	
	TowerOfHanoi (n-1,Aux,Sour,Des); // Step 3: Move n-1 disks from B to C, using A as auxiliary
}

//main program
int main()
{ 
	int n;
	
	cout<<"Enter nu. of disks:";	
	cin>>n;
	
	TowerOfHanoi (n,'A','B','C'); // A= source
	
	return 0;
}
