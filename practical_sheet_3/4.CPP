/*
Roll No : 124
Name : Singh Chandani Harendra

4. Give a meaningful example to overload the assignment operator.
	
*/

#include <iostream>
using namespace std;
 
class rectangle {
   private:
      int length;             
      int width;           
      
   public:
      rectangle() {
         length = 0;
         width = 0;
      }
      rectangle(int f, int i) {
         length = f;
         width = i;
      }
      void operator = (const rectangle &r ) { 
         length = r.length;
         width = r.width;
      }
      
      void display() {
         cout << "Length : " << length <<endl<<"Width : " <<  width << endl;
      }
};

int main() {
   rectangle r1(11, 10), r2(5, 11);

   cout << "First rectangle : "<<endl; 
   r1.display();
   cout << "Second rectangle :"<<endl; 
   r2.display();

   // use assignment operator
   r1 = r2;
   cout << "First rectangle :"<<endl; 
   r1.display();

   return 0;
}
