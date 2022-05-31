#include "Iterator.h"

namespace  ZKN
{
    Iterator::Iterator(const Iterator& it) : m_reader(it.m_reader) {}

    bool Iterator::operator==(const Iterator& it) const {
        return m_reader == it.m_reader;
    }
    bool Iterator::operator!=(const Iterator& it) const {
        return m_reader != it.m_reader;
    }
    Iterator& Iterator::operator++() {
        m_reader++;
        return *this;
    }
    Reader& Iterator::operator*() const {
        return *m_reader;
    }
}
