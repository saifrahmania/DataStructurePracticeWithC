#include <iostream>
#include <stack>
#include <queue>
#include <string>

int main() 
{
    while ( true )
    {
        std::string letters;
        std::cout << "Please enter a string (Enter - exit): ";
        std::getline( std::cin, letters );

        if ( letters.empty() ) break;

        std::stack<char> 
            s( std::stack<char>::container_type( letters.begin(), letters.end() ) );
        std::queue<char> 
            q( std::queue<char>::container_type( letters.begin(), letters.end() ) );

        while ( !s.empty() && s.top() == q.front() )
        {
            s.pop();
            q.pop();
        }

        if ( s.empty() ) std::cout << "The string is a palindrome" << std::endl;
        else std::cout << "The string is not a palindrome" << std::endl;
    }

    return 0;
}