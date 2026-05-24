//Operator precedence decides the order in which operators are evaluated.
// | Precedence     | Operators       |   
// | -------------- | --------------- | 
// | Highest        | `() [] -> .`    |   
// | Unary          | `++ -- ! ~`     |   
// | Multiplicative | `* / %`         |   
// | Additive       | `+ -`           |  
// | Relational     | `< <= > >=`     |   
// | Equality       | `== !=`         |   
// | Logical AND    | `&&`            |   
// | Logical OR     |  ||             |  
// | Assignment     | = += -= *= /=   |   
// | Lowest         |   ,             |   

#include<iostream>
using namespace std;
int main()
{
    cout<<"10 + 5 * 2 : "<<(10 + 5 * 2)<<endl;
    cout<<"20 / 5 + 3 : "<<(20 / 5 + 3) << endl;
    cout<<"10 - 4 + 2 : "<<(10 - 4 + 2) <<endl;
    cout<<"20 / 4 * 2 : "<<( 20 / 4 * 2)<<endl;
    cout<<"10 + 5 * 2 - 3 : "<<(10 + 5 * 2 - 3)<<endl;
    cout<<"10 > 5 && 3 < 2 || 4 > 1 : "<<(10 > 5 && 3 < 2 || 4 > 1)<<endl;
    cout<<"5 + 2 * 3 > 10 && 4 == 4 : "<<(5 + 2 * 3 > 10 && 4 == 4)<<endl;
    
}
