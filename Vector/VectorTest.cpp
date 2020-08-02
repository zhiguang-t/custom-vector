#include "VectorTest.h"

VectorTest::VectorTest()
{
    cout << "---------------------------------------------------" << endl;
    cout << "Tests for Vector class" << endl;;
    cout << "---------------------------------------------------" << endl << endl;
}

VectorTest::~VectorTest()
{}

void VectorTest::Test1()
{
    cout << "Test 1 - Create vector class" << endl;
    Vector<int> v;
    cout << "Vector created" << endl << endl << endl;
}

void VectorTest::Test2()
{
    cout << "Test 2 - Get size of vector class" << endl;
    Vector<int> v;
    cout << "Size of vector: " << v.Size() <<endl << endl << endl;
}

void VectorTest::Test3()
{
    cout << "Test 3 - Insert element into vector" << endl;
    Vector<int> v;
    v.PushBack(3);
    cout << "Element inserted" <<endl << endl << endl;
}

void VectorTest::Test4()
{
    cout << "Test 4 - Check elements in vector" << endl;
    Vector<int> v;
    v.PushBack(3);
    v.PushBack(12);
    v.PrintArr();
    cout << "Elements obtained" <<endl << endl << endl;
}

void VectorTest::Test5()
{
    cout << "Test 5 - Check if vector is empty" << endl;
    Vector<int> v;
    cout << "Empty: " << v.Empty() << endl;
    v.PushBack(3);
    cout << "Element added" << endl << "Empty: " << v.Empty() << endl << endl << endl;
}

void VectorTest::Test6()
{
    cout << "Test 6 - Remove last element from vector" << endl;
    Vector<int> v;
    v.PushBack(3);
    v.PushBack(1);
    cout << "Elements in vector: " << endl;
    v.PrintArr();
    v.PopBack();
    cout << "\nLast element removed" << endl << endl;
    cout << "Elements in vector: " << endl;
    v.PrintArr();
    cout << endl << endl;
}

void VectorTest::Test7()
{
    cout << "Test 7 - Resizing vector" << endl;
    Vector<int> v;
    v.PushBack(3);
    cout << "Elements in vector: " << endl;
    v.PrintArr();
    cout << "Size of vector: " << v.Size() << endl;
    v.PushBack(1);
    cout << "\nAfter adding another element" << endl << endl;
    cout << "Elements in vector: " << endl;
    v.PrintArr();
    cout << "Size of vector: " << v.Size() << endl << endl;
}

void VectorTest::Test8()
{
    cout << "Test 8 - Getting content of vector at specified index" << endl;
    Vector<int> v;
    v.PushBack(3);
    v.PushBack(2);
    v.PushBack(5);
    cout << "Elements in vector: " << endl;
    v.PrintArr();
    cout << endl << "Content at index 2: " << v.GetIndex(2) << endl << endl << endl;
}

void VectorTest::Test9()
{
    cout << "Test 9 - Getting content of vector at unfilled index and out of bound index" << endl;
    Vector<int> v;
    v.PushBack(3);
    v.PushBack(2);
    v.PushBack(5);
    cout << "Elements in vector: " << endl;
    v.PrintArr();
    cout << endl;
    cout << "Size of vector: " << v.Size() << endl << endl;
    cout << "Content at index -1: " << v.GetIndex(-1) << endl;
    cout << "Content at index 3: " << v.GetIndex(3) << endl;
    cout << "Content at index 30: " << v.GetIndex(30) << endl << endl << endl;
}

void VectorTest::Test10()
{
    cout << "Test 10 - Resize vector in PopBack function" << endl;
    Vector<int> v;
    for(int i=0; i<20; i++)
    {
        v.PushBack(i);
    }
    cout << "Elements in vector: " << endl;
    v.PrintArr();
    cout << "Size of vector: " << v.Size() << endl << endl;

    for(int i=0; i<13; i++)
    {
        v.PopBack();
    }
    cout << "After removing 13 elements" << endl;
    cout << "Elements in vector: " << endl;
    v.PrintArr();
    cout << "Size of vector: " << v.Size() << endl << endl;
}
