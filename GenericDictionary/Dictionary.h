//
// Created by Kimba on 4/4/2017.
//

#ifndef GENERICDICTIONARY_DICTIONARY_H
#define GENERICDICTIONARY_DICTIONARY_H

#include <vector>
#include <string>

#include "KeyValue.h"

template <class K, class V>
class Dictionary
{

public:
    Dictionary() : count(0), sizeOf(10)
    {
        diction = new KeyValue<K,V>*[10];
        for(int i = 0; i < 10; i++)
        {
            diction[i] = new KeyValue<K, V>;
        }
    }

    Dictionary(int size) : count(0), sizeOf(size)
    {
        diction = new KeyValue<K,V>*[size];
        for(int i = 0; i < size; i++)
        {
            diction[i] = new KeyValue<K, V>;
        }
    }

    ~Dictionary()
    {
        for (int i=0; i<count; i++)
        {
            delete diction[i];
            diction[i] = nullptr;
        }
        delete [] diction;
    }

   KeyValue<K, V>* add(K key, V value)
   {

       if(sizeOf > count)
       {
           diction[count]->setValue(value);
           diction[count]->setKey(key);
           count++;
       }
       else
       {
           for(int i = count; i < count + 10; i++)
           {
               diction[i] = new KeyValue<K, V>;
               sizeOf++;
           }

           diction[count]->setValue(value);
           diction[count]->setKey(key);
           count++;
       }
   }

    int getCount() const
    {
        return count;
    }

    KeyValue<K, V>* getByKey(K key) const
    {
        if(diction == NULL)
        {
            throw std::string ("ERROR: This pointer is empty.");
        }

        for(int i = 0; i < count; i++)
        {
           if(diction[i]->getKey() == key)
           {
               return diction[i];
           }
            else if (i == count - 1 && diction[i]->getKey() != key)
           {
               throw std::string ("ERROR: This key was invalid");
           }
        }
    }

    KeyValue<K, V>* getByIndex(int index) const
    {
        if(sizeOf < index || index < 0)
        {
            throw std::string ("ERROR: This index is out of range.");
        }
        return diction[index];
    }

    void removeByKey(K key)
    {
        for(int i = 0; i < count; i++)
        {
            if(diction[i]->getKey() == key)
            {
                for(int x = i + 1; x < count; x++)
                {
                    diction[x-1] = diction[x];
                }
                count--;
            }
        }
    }

    void removeByIndex(int index)
    {
            for (int x = index + 1; x <= count; x++) {
                diction[x - 1] = diction[x];
            }
            count--;
    }


private:
    KeyValue<K, V>** diction;
    int count;
    int sizeOf;
};



#endif //GENERICDICTIONARY_DICTIONARY_H


