// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILABSTRACTLIST_H
#define JAVAUTILABSTRACTLIST_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractCollection.h"
#import "JavaUtilList-Protocol.h"

@interface JavaUtilAbstractList : JavaUtilAbstractCollection <JavaUtilList>

 {
    int modCount_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)addWithInt:(int)arg0 withId:(id)arg1 ;
-(BOOL)addWithId:(id)arg0 ;
-(BOOL)addAllWithInt:(int)arg0 withJavaUtilCollection:(id)arg1 ;
-(void)clear;
-(BOOL)isEqual:(id)arg0 ;
-(id)getWithInt:(int)arg0 ;
-(int)indexOfWithId:(id)arg0 ;
-(id)iterator;
-(int)lastIndexOfWithId:(id)arg0 ;
-(id)listIterator;
-(id)listIteratorWithInt:(int)arg0 ;
-(id)removeWithInt:(int)arg0 ;
-(void)removeRangeWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)setWithInt:(int)arg0 withId:(id)arg1 ;
-(id)subListWithInt:(int)arg0 withInt:(int)arg1 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif