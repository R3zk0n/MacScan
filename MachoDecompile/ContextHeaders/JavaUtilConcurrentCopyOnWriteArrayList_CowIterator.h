// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCOPYONWRITEARRAYLIST_COWITERATOR_H
#define JAVAUTILCONCURRENTCOPYONWRITEARRAYLIST_COWITERATOR_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "JavaUtilListIterator-Protocol.h"

@interface JavaUtilConcurrentCopyOnWriteArrayList_CowIterator : NSObject <JavaUtilListIterator>

 {
    IOSObjectArray *snapshot_;
    int from_;
    int to_;
    int index_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)addWithId:(id)arg0 ;
-(BOOL)hasNext;
-(BOOL)hasPrevious;
-(id)next;
-(int)nextIndex;
-(id)previous;
-(int)previousIndex;
-(void)remove;
-(void)setWithId:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif