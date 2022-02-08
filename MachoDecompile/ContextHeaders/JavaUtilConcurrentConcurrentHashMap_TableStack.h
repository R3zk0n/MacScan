// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCONCURRENTHASHMAP_TABLESTACK_H
#define JAVAUTILCONCURRENTCONCURRENTHASHMAP_TABLESTACK_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "JavaUtilConcurrentConcurrentHashMap_TableStack.h"

@interface JavaUtilConcurrentConcurrentHashMap_TableStack : NSObject {
    int length_;
    int index_;
    IOSObjectArray *tab_;
    JavaUtilConcurrentConcurrentHashMap_TableStack *next_;
}




-(id)init;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif