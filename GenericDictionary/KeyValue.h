//
// Created by Kimba on 4/4/2017.
//

#ifndef GENERICDICTIONARY_KEYVALUE_H
#define GENERICDICTIONARY_KEYVALUE_H

template <class K, class V>
class KeyValue
{

public:
    KeyValue()
    {

    };

    K getKey() const
    {
        return m_key;
    }

    V getValue() const
    {
        return m_value;
    }

    void setKey(const K key)
    {
        m_key = key;
    }

    void setValue(const V value)
    {
        m_value = value;
    }

private:
    K m_key;
    V m_value;

};


#endif //GENERICDICTIONARY_KEYVALUE_H
