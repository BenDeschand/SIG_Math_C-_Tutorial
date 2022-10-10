#include "sig.h"

void prompt()
{
    cout << "Simple Calculator" << endl;
    cout << "Pick which arthimatic you want to do" << endl;
    cout << "1. add" << endl;
    cout << "2. subtratc" << endl;
    cout << "3. multiply" << endl;
    cout << "4. divide" << endl;
    cout << "5. mod" << endl;
    cout << "6. exit" << endl;
    cout << "Pick one (1, 2, 3,4 5, 6): ";
    cout << "SUBHI WAS HERE";
}

void firNum()
{
    cout << "Enter first number: ";
}

void secNum()
{
    cout << "Enter second number: ";
}

void answer(int result)
{
    cout << "Answer is " << result << endl;
}

int main()
{
    int input;
    int first;
    int second;
    bool run = true;
    int result;

    sig Math = sig("Calc");

    prompt();
    cin >> input;
    
    while(run)
    {
        print("Ron is here");
        switch(input)
        {
            case 1:
            firNum();
            cin >> first;
            secNum();
            cin >> second;
            result = Math.add(first, second);
            answer(result);
            break;

            case 2:
            firNum();
            cin >> first;
            secNum();
            cin >> second;
            result = Math.sub(first, second);
            answer(result);
            break;

            case 3:
            firNum();
            cin >> first;
            secNum();
            cin >> second;
            result = Math.mult(first, second);
            answer(result);
            break;

            case 4:
            firNum();
            cin >> first;
            secNum();
            cin >> second;
            result = Math.div(first, second);
            answer(result);
            break;

            case 5:
            firNum();
            cin >> first;
            secNum();
            cin >> second;
            result = Math.mod(first, second);
            answer(result);
            break;

            case 6: 
            exit(0);
            break;

            default:
            cout << "Not a proper input" << endl;
        }

        cout << endl;
        prompt();
        cin >> input;
    }

    return 0;
}
git config --global user.email "roncaraway102@gmail.com"
git config --global user.name "Bacoburn"