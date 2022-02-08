// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCOPYONWRITEARRAYLIST_SLICE_H
#define JAVAUTILCONCURRENTCOPYONWRITEARRAYLIST_SLICE_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"

@interface JavaUtilConcurrentCopyOnWriteArrayList_Slice : NSObject {
    IOSObjectArray *expectedElements_;
    int from_;
    int to_;
}




-(id)initWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)checkElementIndexWithInt:(int)arg0 ;
-(void)checkPositionIndexWithInt:(int)arg0 ;
-(void)checkConcurrentModificationWithNSObjectArray:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif