#include <iostream>
#include "Vector3D.h"
#include "Object.h"
#include "Exception.h"
int main()
{
    cout << "number : " << Object::Count() << endl;
    Vector3D a1;
    cout << "number : " << Object::Count() << endl;
    Vector3D b1;
    cout << "number : " << Object::Count() << endl;
    Vector3D a2;
    cout << "number : " << Object::Count() << endl;
 
    try
    {
        Vector3D F(1, 1, 1);
    }
    catch (invalid_argument e)
    {
        cout << e.what() << endl;
    }
    catch (bad_exception e)
    {
        cout << e.what() << endl;
    }
    catch (Exception& e)
    {
        cout << e.what() << endl;
    }
    catch (const char* e)
    {
        cerr << e << endl;
    }
    Vector3D A;
    cout << "Vector" << endl;
    cin >> A;
    cout << A;
    cout << "A++" << endl; cout << A++ << endl;
    cout << "A--" << endl; cout << A-- << endl;
    cout << "++A" << endl; cout << ++A << endl;
    cout << "--A" << endl; cout << --A << endl;
    A.Distance();
    A.scalar();
    A.isEqual();
    A.isEqual2();
    return 0;
}