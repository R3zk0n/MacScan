// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCONCURRENTHASHMAP_TRAVERSER_H
#define JAVAUTILCONCURRENTCONCURRENTHASHMAP_TRAVERSER_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "JavaUtilConcurrentConcurrentHashMap_Node.h"
#import "JavaUtilConcurrentConcurrentHashMap_TableStack.h"

@interface JavaUtilConcurrentConcurrentHashMap_Traverser : NSObject {
    IOSObjectArray *tab_;
    JavaUtilConcurrentConcurrentHashMap_Node *next_;
    JavaUtilConcurrentConcurrentHashMap_TableStack *stack_;
    JavaUtilConcurrentConcurrentHashMap_TableStack *spare_;
    int index_;
    int baseIndex_;
    int baseLimit_;
    int baseSize_;
}




-(id)initWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)advance;
-(void)pushStateWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)recoverStateWithInt:(int)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif