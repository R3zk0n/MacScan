// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILWEAKHASHMAP_HASHITERATOR_H
#define JAVAUTILWEAKHASHMAP_HASHITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilWeakHashMap.h"
#import "JavaUtilWeakHashMap_Entry.h"
#import "JavaUtilIterator-Protocol.h"
#import "JavaUtilWeakHashMap_Entry_Type-Protocol.h"

@interface JavaUtilWeakHashMap_HashIterator : NSObject <JavaUtilIterator>

 {
    id<JavaUtilWeakHashMap_Entry_Type> *type_;
    JavaUtilWeakHashMap *this$0_;
    int position_;
    int expectedModCount_;
    JavaUtilWeakHashMap_Entry *currentEntry_;
    JavaUtilWeakHashMap_Entry *nextEntry_;
    id *nextKey_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilWeakHashMap:(id)arg0 withJavaUtilWeakHashMap_Entry_Type:(id)arg1 ;
-(BOOL)hasNext;
-(id)next;
-(void)remove;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif