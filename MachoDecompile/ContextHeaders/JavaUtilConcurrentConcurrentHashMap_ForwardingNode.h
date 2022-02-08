// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCONCURRENTHASHMAP_FORWARDINGNODE_H
#define JAVAUTILCONCURRENTCONCURRENTHASHMAP_FORWARDINGNODE_H

@class Node;


#import "IOSObjectArray.h"

@interface JavaUtilConcurrentConcurrentHashMap_ForwardingNode : Node {
    IOSObjectArray *nextTable_;
}




-(id)initWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg0 ;
-(id)findWithInt:(int)arg0 withId:(id)arg1 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif