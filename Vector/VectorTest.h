#ifndef VECTORTEST_H
#define VECTORTEST_H

#include <iostream>
#include "Vector.h"

using namespace std;

/**
 * @class VectorTest
 * @brief Unit testing for all functions in Vector class
 *
 *
 * @author Zhi Guang
 * @version 01
 * @date 19/02/2020 Zhi Guang, Started
 *
 * @bug The program has no bugs
 */

class VectorTest
{
    public:
        /**
         * @brief Default constructor
         */
        VectorTest();

        /**
         * @brief Default destructor
         */
        ~VectorTest();

        /**
         * @brief Test for creating Vector class
         *
         * @return void
         */
        void Test1();

        /**
         * @brief Test get size function
         *
         * @return void
         */
        void Test2();

        /**
         * @brief Test push back function
         *
         * @return void
         */
        void Test3();

        /**
         * @brief Printing elements in vector onto screen
         *
         * @return void
         */
        void Test4();

        /**
         * @brief Test empty method
         *
         * @return void
         */
        void Test5();

        /**
         * @brief Test pop back function
         *
         * @return void
         */
        void Test6();

        /**
         * @brief Test resizing of vector
         *
         * @return void
         */
        void Test7();

        /**
         * @brief Test get index function
         *
         * @return void
         */
        void Test8();

        /**
         * @brief Test getting contents of unfilled vector and out of bound
         *
         * @return void
         */
        void Test9();

        /**
         * @brief Test resizing of vector when using pop back function
         *
         * @return void
         */
        void Test10();

    protected:

    private:
};



#endif // VECTORTEST_H
