// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPRIORITYQUEUE_H
#define ORGAPACHELUCENEUTILPRIORITYQUEUE_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"

@interface OrgApacheLuceneUtilPriorityQueue : NSObject {
    int size_;
    int maxSize_;
    IOSObjectArray *heap_;
}




-(id)initWithInt:(int)arg0 ;
-(id)initWithInt:(int)arg0 withBoolean:(BOOL)arg1 ;
-(id)getSentinelObject;
-(id)addWithId:(id)arg0 ;
-(id)insertWithOverflowWithId:(id)arg0 ;
-(id)top;
-(id)pop;
-(id)updateTop;
-(id)updateTopWithId:(id)arg0 ;
-(int)size;
-(void)clear;
-(BOOL)removeWithId:(id)arg0 ;
-(BOOL)upHeapWithInt:(int)arg0 ;
-(void)downHeapWithInt:(int)arg0 ;
-(id)getHeapArray;
-(void)dealloc;


@end


#endif