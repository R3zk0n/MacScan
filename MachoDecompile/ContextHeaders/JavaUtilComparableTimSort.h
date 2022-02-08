// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOMPARABLETIMSORT_H
#define JAVAUTILCOMPARABLETIMSORT_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "IOSIntArray.h"

@interface JavaUtilComparableTimSort : NSObject {
    IOSObjectArray *a_;
    int minGallop_;
    IOSObjectArray *tmp_;
    int stackSize_;
    IOSIntArray *runBase_;
    IOSIntArray *runLen_;
}




-(id)initWithNSObjectArray:(id)arg0 ;
-(void)pushRunWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)mergeCollapse;
-(void)mergeForceCollapse;
-(void)mergeAtWithInt:(int)arg0 ;
-(void)mergeLoWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)mergeHiWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)ensureCapacityWithInt:(int)arg0 ;
-(void)dealloc;
+(void)sortWithNSObjectArray:(id)arg0 ;
+(void)sortWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(void)binarySortWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(int)countRunAndMakeAscendingWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(void)reverseRangeWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(int)minRunLengthWithInt:(int)arg0 ;
+(int)gallopLeftWithJavaLangComparable:(id)arg0 withNSObjectArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
+(int)gallopRightWithJavaLangComparable:(id)arg0 withNSObjectArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif