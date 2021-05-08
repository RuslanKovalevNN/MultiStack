
#include "Stack.h"
#include "MultiStack.h"



int main() 
{
	TMultiStack<int> MltStck(9, 3);
	MltStck.Push(-3, 0);
	MltStck.Push(2, 1);
	MltStck.Push(-1, 0);
	MltStck.Push(5, 0);
	MltStck.Push(6, 0);
	MltStck.Push(12, 2);
	cout << A;

	TMultiStack<int> MltStck1(9,3);
	cout<<MltStck1 == MltStck<<"\n";

	MltStck.Pop(0);
	cout << MltStck;

	cout << MltStck1 == MltStck << "\n";

	return 0;
}
