#include <iostream>
using namespace std;


//header file for maxHeap
class MaxHeap
{
    int *arr;        // pointer to array of elements in heap
    int capacity;    // maximum possible size of min heap
    int size;        // Current number of elements in min heap
    
    int parent(int i);
    int left(int i);
    int right(int i);
    bool isLeaf(int i);
    void siftup(int i);
    void siftdown(int i);
public:
    class Overflow{};
    class Underflow{};
    MaxHeap(int capacity);
    int getSize();
    int getMax();
    void insert(int k);
    int extractMax();
    int removeAt(int i);
    void heapify(int *array, int len);
    void PrintArr();
};

//constructor 
MaxHeap::MaxHeap(int capacity)
{
  arr = new int[capacity]; // create an array with size capacity
  this->capacity = capacity;
  this->size = 0;    //initalise size to zero
  
}
int MaxHeap::getSize()
{
  return size;
}
int MaxHeap::parent(int child)
{
   if(child % 2 == 0)
       return (child /2) -1;
   else
       return (child/2);
}
int MaxHeap::left(int parent)
{
  return (2 * parent +1);
}
int MaxHeap::right(int parent)
{
  return (2 * parent +2);
}
void MaxHeap::siftup(int i)
{
  if(i == 0)
      return;     //only one element in the array
      
  int parent_index = parent(i);        // get the index of the parent 
  
  if(arr[parent_index] < arr[i])   
  {
       int temp = arr[parent_index];   //if value at parent index is less than inserted value
       arr[parent_index] = arr[i];     // swap the values
       arr[i] = temp;
       siftup(parent_index);    // loop untill it satisfies parent child max heap relationship
  }
}
void MaxHeap::insert(int k)
{
  arr[size] = k;   // insert the value into array
  siftup(size);
  size++;     //increment the size of the array
}
void MaxHeap::PrintArr(){
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int MaxHeap::getMax()
{
//   for(int i = 0;i<size;i++)
//   {
//      cout<<arr[i]<<" ";
//   }
//   cout<<endl;
  return arr[0];         // maximum value will be at index 0
}
bool MaxHeap::isLeaf(int i)
{
  if(i>=size)
      return true;
  return false;
}
void MaxHeap::siftdown(int i)
{
    int l = left(i);
    int r = right(i);
    
    if(isLeaf(l))
       return;
    
    int maxIndex = i;
    if(arr[l] > arr[i])
    {
      maxIndex = l;
    }
    
    if(!isLeaf(r) && (arr[r] > arr[maxIndex]))
    {
      maxIndex = r;
    }
    
    if(maxIndex != i)
    {
      int temp = arr[i];
      arr[i] = arr[maxIndex];
      arr[maxIndex] = temp;
      siftdown(maxIndex);
    }
}
int MaxHeap::extractMax()
{
   
  int max = arr[0];
  arr[0] = arr[size - 1];
 
  size--;
  
  siftdown(0);
  return max;
}
void MaxHeap::heapify(int *array, int len)
{
  size = len;
  arr = array;
  
  for(int i=size-1; i>=0; --i)
    {
        siftdown(i);
    }
}
int MaxHeap::removeAt(int k)
{
  int r = arr[k];
  
  arr[k] = arr[size -1];  // replace with rightmost leaf 
  size-- ;
  int p = parent(k);
  if(k == 0 || arr[k] < arr[p])
     siftdown(k);
  else
     siftup(k);
  return r;   
}

//this is the main function for maxHeap function
int main()
{
    MaxHeap h(11);
    h.insert(6);
    h.insert(71);
    h.insert(145);
    cout << "imprimir Arr" << endl;
    h.PrintArr();
    h.removeAt(2); // utiliza index 0
    cout << "imprimir Arr" << endl;
    h.PrintArr();
    h.insert(1);
    h.insert(2);
    h.insert(31);
    h.insert(65);
    cout << "imprimir Arr" << endl;
    h.PrintArr();
    cout << h.extractMax() << " "<<endl;
    h.insert(32);
    cout << "imprimir Arr" << endl;
    h.PrintArr();
    cout<<"=="<<endl;
    cout << "h.extract=" << h.extractMax() << " "<<endl;
    cout << "imprimir Arr" << endl;
    h.PrintArr();
    
    // h.increaseKey(3,11);
    // h.PrintArr();
    //cout << h.getMax() << endl;
    



    // int a[11] = {2,7,26,25,19,17,1,90,3,36};
    // MaxHeap h2(11);
    // h2.heapify(a, 11);
    // cout << h2.getMax() << " " << endl;
    // cout << h2.extractMax() << " "<<endl;
    // cout << h2.getMax() << " " << endl;



    return 0;
}