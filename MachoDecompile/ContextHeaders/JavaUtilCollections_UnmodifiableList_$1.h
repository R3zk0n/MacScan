// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_UNMODIFIABLELIST_$1_H
#define JAVAUTILCOLLECTIONS_UNMODIFIABLELIST_$1_H


#import <Foundation/Foundation.h>

#import "JavaUtilListIterator-Protocol.h"
#import "JavaUtilListIterator-Protocol.h"

@interface JavaUtilCollections_UnmodifiableList_$1 : NSObject <JavaUtilListIterator>

 {
    id<JavaUtilListIterator> *iterator_;
    int val$location_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)addWithId:(id)arg0 ;
-(BOOL)hasNext;
-(BOOL)hasPrevious;
-(id)next;
-(int)nextIndex;
-(id)previous;
-(int)previousIndex;
-(void)remove;
-(void)setWithId:(id)arg0 ;
-(id)initWithJavaUtilCollections_UnmodifiableList:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif