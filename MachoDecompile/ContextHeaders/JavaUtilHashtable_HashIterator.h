// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILHASHTABLE_HASHITERATOR_H
#define JAVAUTILHASHTABLE_HASHITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilHashtable.h"
#import "JavaUtilHashtable_HashtableEntry.h"

@interface JavaUtilHashtable_HashIterator : NSObject {
    JavaUtilHashtable *this$0_;
    int nextIndex_;
    JavaUtilHashtable_HashtableEntry *nextEntry_;
    JavaUtilHashtable_HashtableEntry *lastEntryReturned_;
    int expectedModCount_;
}




-(id)initWithJavaUtilHashtable:(id)arg0 ;
-(BOOL)hasNext;
-(id)nextEntry;
-(id)nextEntryNotFailFast;
-(void)remove;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif