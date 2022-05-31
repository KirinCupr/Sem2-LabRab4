#ifndef SEM2_LABRAB3_MYVECTOR_H
#define SEM2_LABRAB3_MYVECTOR_H
#include "D:\Project_C++\Sem2_LabRab3\Reader\Reader.h"
#include "Iterator.h"
namespace ZKN
{
    class MyVector {
    public:
        typedef Iterator const_iterator;
        MyVector();
        const_iterator begin() const;
        const_iterator end() const;
        void AddMemory();
        void PushBack(const Reader&);
        void Remove(size_t);
        size_t Size();
        friend ostream& operator<<(ostream&, const MyVector&);
        Reader& operator[](int i);

    private:
        Reader* m_array{};
        size_t m_size{};
        size_t m_capacity{};
    };
}


#endif //SEM2_LABRAB3_MYVECTOR_H
