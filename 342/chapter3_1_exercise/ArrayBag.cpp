/** Implementation file for the class ArrayBag.
 * @file ArrayBag.cpp
*/
#include "ArrayBag.h"
#include <vector>

template<class ItemType>
ArrayBag<ItemType>::ArrayBag(): itemCount(0), maxItems(DEFAULT_CAPACITY){

}//end default constructor.

template<class ItemType>
bool ArrayBag<ItemType>::add(const ItemType& newEntry){
    bool hasRoomToAdd = (itemCount < maxItems);
    if(hasRoomToAdd){
        items[itemCount] = newEntry;
        itemCount++;
    }//end if
    return hasRoomToAdd;
}//end add

template<class ItemType>
std::vector<ItemType> ArrayBag<ItemType>::toVector() const{
    std::vector<ItemType> bagContents;
    for(int i = 0; i < itemCount; i++){
        bagContents.push_back(items[i]);
    }
    return bagContents;
}

template<class ItemType>
int ArrayBag<ItemType>::getCurrentSize() const{
    return itemCount;
}

template<class ItemType>
bool ArrayBag<ItemType>::isEmpty() const{
    return itemCount == 0;
}