// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILHASHMAP_HASHITERATOR_H
#define JAVAUTILHASHMAP_HASHITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilHashMap.h"
#import "JavaUtilHashMap_HashMapEntry.h"

@interface JavaUtilHashMap_HashIterator : NSObject {
    JavaUtilHashMap *this$0_;
    int nextIndex_;
    JavaUtilHashMap_HashMapEntry *nextEntry_;
    JavaUtilHashMap_HashMapEntry *lastEntryReturned_;
    int expectedModCount_;
}




-(id)initWithJavaUtilHashMap:(id)arg0 ;
-(BOOL)hasNext;
-(id)nextEntry;
-(void)remove;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif