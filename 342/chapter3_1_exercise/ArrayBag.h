/** Header file for an array based implementation of the ADT bag.
 * @file ArrayBag.h */

#ifndef ARRAY_BAG_
#define ARRAY_BAG_

#include "BagInterface.h"

template<class ItemType>
class ArrayBag : public BagInterface<ItemType>{
private:
    static const int DEFAULT_CAPACITY = 6;  //small size for testing
    ItemType items[DEFAULT_CAPACITY];       //array of bag items
    int itemCount;                          //current count of bag items
    int maxItems;                           //max capacity of the bag

    //Returns either the index of the element in the array items that
    //contains the given target or -1, if the array does not contain
    //the target.
    int getIndexOf(const ItemType& target) const;

public:
    ArrayBag();
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const ItemType& newEntry);
    bool remove(const ItemType& anEntry);
    void clear();
    bool contains(const ItemType& anEntry) const;
    int getFrequencyOf(const ItemType& anEntry) const;
    std::vector<ItemType> toVector() const;    
}; //end ArrayBag

#include "ArrayBag.cpp"
#endif