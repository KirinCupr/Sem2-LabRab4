#ifndef SEM2_LABRAB3_ITERATOR_H
#define SEM2_LABRAB3_ITERATOR_H
#include "D:\Project_C++\Sem2_LabRab3\Reader\Reader.h"

namespace ZKN
{
    class Iterator {
        friend class MyVector;

    public:
        Iterator(const Iterator&);
        bool operator==(const Iterator&) const;
        bool operator!=(const Iterator&) const;
        Iterator& operator++();
        Reader& operator*() const;

    private:
        Reader* m_reader;
        Iterator(Reader* p) : m_reader(p) {};
    };
}


#endif //SEM2_LABRAB3_ITERATOR_H
