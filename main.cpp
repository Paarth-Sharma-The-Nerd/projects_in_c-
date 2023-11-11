#include <iostream>
using namespace std;

class prime_Factorization
{
    int numb;
    public:
    bool is_prime()
    {
        for(int i = 2; i <= numb; i++){
            if(numb % i != 0)
            {
                return true;
            }
            else if(numb % i == 0)
            {
                return false;
            }
        }
        return false;
    }
    void start_factorization()
    {

            if(is_prime() == true)
            {
                cout << numb << " is a prime number" << endl;
            }
            else if(is_prime() == false)
            {
                for(int i = 2; i <= numb; i++)
                {
                    while(numb % i == 0)
                    {
                        numb = numb / i;
                        cout << i << ' ';
                    }
                }
            }
    }
    void result(int get_value)
    {
        numb = get_value;
        is_prime();
        start_factorization();
    }
};

int main()
{
    prime_Factorization x;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    x.result(n);
    return 0;
}