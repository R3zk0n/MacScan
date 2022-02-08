// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCONCURRENTHASHMAP_BASEITERATOR_H
#define JAVAUTILCONCURRENTCONCURRENTHASHMAP_BASEITERATOR_H

@class Traverser;


#import "JavaUtilConcurrentConcurrentHashMap.h"
#import "JavaUtilConcurrentConcurrentHashMap_Node.h"

@interface JavaUtilConcurrentConcurrentHashMap_BaseIterator : Traverser {
    JavaUtilConcurrentConcurrentHashMap *map_;
    JavaUtilConcurrentConcurrentHashMap_Node *lastReturned_;
}




-(id)initWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withJavaUtilConcurrentConcurrentHashMap:(id)arg4 ;
-(BOOL)hasNext;
-(BOOL)hasMoreElements;
-(void)remove;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif