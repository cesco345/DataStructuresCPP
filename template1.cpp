#include <iostream>
#include "template1.h"

int main( )
{
     vector<Square> v = { Square{ 3.0 }, Square{ 2.0 }, Square{ 2.5 } };

     cout << "Largest square: " << findMax( v ) << endl;

     return 0;
}

