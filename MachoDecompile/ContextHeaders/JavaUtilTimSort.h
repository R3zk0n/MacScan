// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILTIMSORT_H
#define JAVAUTILTIMSORT_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "IOSIntArray.h"
#import "JavaUtilComparator-Protocol.h"

@interface JavaUtilTimSort : NSObject {
    IOSObjectArray *a_;
    id<JavaUtilComparator> *c_;
    int minGallop_;
    IOSObjectArray *tmp_;
    int stackSize_;
    IOSIntArray *runBase_;
    IOSIntArray *runLen_;
}




-(id)initWithNSObjectArray:(id)arg0 withJavaUtilComparator:(id)arg1 ;
-(void)pushRunWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)mergeCollapse;
-(void)mergeForceCollapse;
-(void)mergeAtWithInt:(int)arg0 ;
-(void)mergeLoWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)mergeHiWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)ensureCapacityWithInt:(int)arg0 ;
-(void)dealloc;
+(void)sortWithNSObjectArray:(id)arg0 withJavaUtilComparator:(id)arg1 ;
+(void)sortWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withJavaUtilComparator:(id)arg3 ;
+(void)binarySortWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withJavaUtilComparator:(id)arg4 ;
+(int)countRunAndMakeAscendingWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withJavaUtilComparator:(id)arg3 ;
+(void)reverseRangeWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(int)minRunLengthWithInt:(int)arg0 ;
+(int)gallopLeftWithId:(id)arg0 withNSObjectArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withJavaUtilComparator:(id)arg5 ;
+(int)gallopRightWithId:(id)arg0 withNSObjectArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withJavaUtilComparator:(id)arg5 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif