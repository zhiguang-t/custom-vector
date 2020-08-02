#ifndef VECTOR_H
#define VECTOR_H

/**
 * @class Vector
 * @brief Create a dynamic array that can hold specified data type
 *
 *
 * @author Zhi Guang
 * @version 01
 * @date 17/02/2020 Zhi Guang, Started
 *
 * @author Zhi Guang
 * @version 02
 * @date 18/02/2020 Zhi Guang, Added Resize function
 *
 * @author Zhi Guang
 * @version 03
 * @date 19/02/2020 Zhi Guang, Added GetIndex function, added resize to PopBack
 *
 * @bug The program has no bugs
 */

template <class T>
class Vector
{
    public:
        /**
         * @brief Default constructor
         */
        Vector();

        /**
         * @brief Default destructor
         */
        virtual ~Vector();

        /**
         * @brief Return the capacity of the vector
         *
         * @return m_capacity - capacity of vector
         */
        int Size();

        /**
         * @brief Add an element to the back of the vector
         *
         * This function will add an element to the back of the vector.
         * If the vector is half full, the vector will double in size before adding the element.
         *
         * @param input - new element to add into the vector
         * @return void
         */
        void PushBack(const T &input);

        /**
         * @brief Delete last element from vector
         *
         * This function will delete the last element from vector.
         * If the number of elements is lesser than 1/6 of the vector capacity,
         * and the capacity/2 is more than the initial size of vector created during
         * initialisation, then reduce the size of the vector by half.
         *
         * @return void
         * @pre vector must have content
         */
        void PopBack();

        /**
         * @brief Print out contents in vector to screen
         *
         * @return void
         * @pre vector must have contents
         */
        void PrintArr() const;

        /**
         * @brief Returns true if vector is empty
         *
         * @return int - 1 if true, 0 if false
         */
        int Empty() const;

        /**
         * @brief Returns content of vector at index i
         *
         * This function returns the content in array at index i.
         * If i is an index lesser than m_currIdx, or if i is out
         * of bound, return 0.
         *
         * @param int i - index of vector
         * @return T - content in vector
         * @pre i must have content
         */
        T GetIndex(int i) const;

    protected:

    private:
        /// Capacity of vector
        int m_capacity;
        /// Pointer to vector
        T* m_arr;
        /// Current index the vector is filled to
        int m_currIdx;
        /// Initial size of vector
        const int m_initialSize = 3;

        /**
         * @brief Resize the vector
         *
         * This function will receive a new size, create an array of that size,
         * copy every element in existing array to the new array,
         * delete the old array, and point m_arr pointer to the new array
         *
         * @param newSize - new capacity of the vector
         * @return void
         */
        void Resize(int newSize);
};

// Implementation
// Creating a template class
template <class T>
Vector<T>::Vector()
{
    m_capacity = m_initialSize;
    m_currIdx = 0;
    m_arr = new T[m_capacity];
}

template <class T>
Vector<T>::~Vector()
{
    delete m_arr;
    m_arr = NULL;
}

template <class T>
int Vector<T>::Size()
{
    return m_capacity;
}

template <class T>
void Vector<T>::PushBack(const T &input)
{
    // If array is half full, double the size of the array
    if(m_capacity/2 <= m_currIdx)
    {
        Resize(m_capacity*2);
    }
    m_arr[m_currIdx] = input;
    m_currIdx++;
}

template <class T>
void Vector<T>::PopBack()
{
    if(m_currIdx > 0)
    {
        m_currIdx--;
        m_arr[m_currIdx] = (T)0;

        // If array is less then 1/6 full, reduce the size of array by half
        // If the new size is smaller than the initial size, do not resize
        if(m_currIdx < m_capacity/6 && m_capacity/2 > m_initialSize)
        {
            Resize(m_capacity/2);
        }
    }
}

template <class T>
void Vector<T>::PrintArr() const
{
    for(int i=0; i<m_currIdx; i++)
    {
        std::cout << m_arr[i] << " ";
    }
    std::cout << std::endl;
}

template <class T>
int Vector<T>::Empty() const
{
    if(m_currIdx == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

template <class T>
void Vector<T>::Resize(int newSize)
{
    T* newArr = new T[newSize];
    T* newArrPtr = newArr;
    T* currArrPtr = m_arr;

    for(int i=0; i<m_currIdx; i++)
    {
        *(newArrPtr) = *(currArrPtr);
        newArrPtr++;
        currArrPtr++;
    }

    m_capacity = newSize;
    delete m_arr;
    m_arr = newArr;
    newArr = nullptr;
}

template <class T>
T Vector<T>::GetIndex(int i) const
{
    if(i>=0 && i<m_currIdx)
    {
        return m_arr[i];
    }

    return (T)0;
}
#endif // VECTOR_H
