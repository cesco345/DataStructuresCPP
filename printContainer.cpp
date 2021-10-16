#include <list>
#include <iostream>

using namespace std;

template <typename Container>
void print( const Container & c, ostream & out = cout )
{
    if( c.empty( ) )
        out << "(empty)";
    else
    {
        auto itr = begin( c );
        out << "[ " << *itr++;   // Print first item

        while( itr != end( c ) )
            out << ", " << *itr++;
        out << " ]" << endl;
    }
}

int main( )
{
    list<int> lst;
    for( int i = 0; i < 35; ++i )
        lst.push_back( i );

    print( lst, cout );

    return 0;
}

