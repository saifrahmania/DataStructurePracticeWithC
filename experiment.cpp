#include <bits/stdc++.h>
using namespace std;

 
int main()
{
    /**
     * first of aall
     * 
     **/

    return 0; 
}

/*
int hexadecimalToDecimal(string hexVal)
{
    int len = hexVal.size();
 
    // Initializing base value to 1, i.e 16^0
    int base = 1;
 
    int dec_val = 0;
 
    // Extracting characters as digits from last
    // character
    for (int i = len - 1; i >= 0; i--) {
        // if character lies in '0'-'9', converting
        // it to integral 0-9 by subtracting 48 from
        // ASCII value
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (int(hexVal[i]) - 48) * base;
 
            // incrementing base by power
            base = base * 16;
        }
 
        // if character lies in 'A'-'F' , converting
        // it to integral 10 - 15 by subtracting 55
        // from ASCII value
        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (int(hexVal[i]) - 55) * base;
 
            // incrementing base by power
            base = base * 16;
        }
    }
    return dec_val;
}


bool isPrime(int a)
{
    //find the prime number
    for (int i = 2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}
    {
    //find the factorial value using function
    int fact = 1;
    for(int i = 1;i<=a;i++)
    {
        fact *=i;
    }
    return fact;

}
    int n ;
    cin>>n;
    int sum = 0;
    int originaln = n;
    while (n>0)
    {
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
        n=n/10;
    }
    if (sum == originaln)
    {
        cout<<"this is an Armstrong number";
    }
    else 
    {
        cout<<"This is NOT and Armstrong number";
    }

    int n = 1235;
    int reverse = 0;
    while(n>0)
    {
        int lastdigit = n%10;
        reverse  = reverse *10 + lastdigit;
        n = n/10;
    }
    cout<<reverse;

    int n;
    cin>>n;
    for(int i =1; i<=n;i++)
    {
       for(int j  = 1; j<=i;j++)
       {
            if((i+j)%2==0)
            {
                cout<<1<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
       }
        cout<<endl;
    }
    
    int condition(int a)
{
    int p = 0;
    p =  (a>3)?p=1:p=2;
    return p;
}
int main()
{
    int a = 4;
    if(condition(a)==1)
    {
        cout<<"the value is bigger than 3"<<endl;
    }
    else
    {
        cout<<"The value is smaller than 3"<<endl;
    }
        
}
    int a ;
    cout<<"Enter the value"<<endl;
    cin>>a;
    if(a%2==0&&a%3==0)
    {
        cout<<"Divisible by both"<<endl;
    }
    else if(a%2==0&&a%3!=0)
    {
        cout<<"Divisible by 2"<<endl;
    }
    else if(a%2!=0&&a%3==0)
    {
        cout<<"Divisible by 3"<<endl;
    }

    else 
    {
        cout<<"Divisible by NONE"<<endl;
    }
    
    int savings ;
    cout<<"Input current Balance:  "<<endl;
    cin>>savings;
    if(savings<3000)
    {
        cout<<"you donnt have sufficient balance to date"<<endl;
    }
    else if(savings<5000)
    {
        cout<<"Neha would be perfect choice for you"<<endl;
    }
    else{
        cout<<"Tanisha would be fine"<<endl;
    }


    int n;
    int sum = 0;
    cout<<"Enter the value of n:15";
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        sum +=i;
    }

    cout<<sum;


    float a,b,result;
    char p;
    cout<<"Enter two number: "<<endl;
    cin>>a>>b;
    if(a==0||b==0)
    {
        cout<<"Zero is not allowed!!"<<endl;
        exit(1);
    }
    cout<<"Enter an operator"<<endl;
    cin>>p;
    switch (p)
    {
    case '+':
        result = a+b;
        break;
    
    case '-':
        result = a-b;
        break;
    case '*':
        result = a*b;
    case '/':
        result = a/b;
    default:
        cout<<"Invalid operator!!"<<endl;
        break;
    }
    cout<<"Your Result:  "<<result<<endl;
    

**/
/*int *multiply(int A[], int B[], int m, int n)
{
   int *prod = new int[m+n-1];

   // Initialize the product polynomial
   for (int i = 0; i<m+n-1; i++)
     prod[i] = 0;

   // Multiply two polynomials term by term

   // Take ever term of first polynomial
   for (int i=0; i<m; i++)
   {
     // Multiply the current term of first polynomial
     // with every term of second polynomial.
     for (int j=0; j<n; j++)
         prod[i+j] += A[i]*B[j];
   }

   return prod;
}

// A utility function to print a polynomial
void printPoly(int poly[], int n)
{
    for (int i=0; i<n; i++)
    {
       cout << poly[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != n-1)
       cout << " + ";
    }
}

// Driver program to test above functions
int main()
{
    // The following array represents polynomial 5 + 10x^2 + 6x^3
    int A[] = {5, 0, 10, 6};

    // The following array represents polynomial 1 + 2x + 4x^2
    int B[] = {1, 2, 4};
    int m = sizeof(A)/sizeof(A[0]);
    int n = sizeof(B)/sizeof(B[0]);

    cout << "First polynomial is ";
    printPoly(A, m);
    cout <<endl<< "Second polynomial is ";
    printPoly(B, n);

    int *prod = multiply(A, B, m, n);

    cout <<endl<< "Product polynomial is ";
    printPoly(prod, m+n-1);

    return 0;
}*/

/*int main()
{
    int sum  = 1;
    for (int i = 0;i<10; i++)
    {
        sum=sum+i;
        cout<<sum<<' ';
    }
}
*/
/*void permutations(string s, string ans){
    if(s.size() == 0) {
// when our string which needs to
//be rotated becomes empty then it means
//that our permutation is stored in ans
        cout << ans << "\n";
        return ;
    }
    for(int i = 0; i < s.size(); i++){
        permutations(s.substr(1), ans + s[0]);
        // we are adding the
        // first character in our ans
        // passing all elements from index 1 in our
        // rotate string for next function.
        rotate(s.begin(), s.begin()+1, s.end());
        //rotating such that our second element becomes first
    }
}


int main()
{
    std::string s = "abbcc/&*";
    std::string chars = "/&*";

    for (char c: chars) {
        s.erase(std::remove(s.begin(), s.end(), c), s.end());
    }
    s.erase(std::unique(s.begin(), s.end()), s.end());

    std::cout << s<<endl;
    permutations(s, "");

    return 0;
}*/