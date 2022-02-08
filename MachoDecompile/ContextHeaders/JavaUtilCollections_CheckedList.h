// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_CHECKEDLIST_H
#define JAVAUTILCOLLECTIONS_CHECKEDLIST_H

@class CheckedCollection;

#import <Foundation/Foundation.h>

#import "JavaUtilList-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface JavaUtilCollections_CheckedList : CheckedCollection <JavaUtilList>

 {
    id<JavaUtilList> *l_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilList:(id)arg0 withIOSClass:(id)arg1 ;
-(BOOL)addAllWithInt:(int)arg0 withJavaUtilCollection:(id)arg1 ;
-(id)getWithInt:(int)arg0 ;
-(id)setWithInt:(int)arg0 withId:(id)arg1 ;
-(void)addWithInt:(int)arg0 withId:(id)arg1 ;
-(id)removeWithInt:(int)arg0 ;
-(int)indexOfWithId:(id)arg0 ;
-(int)lastIndexOfWithId:(id)arg0 ;
-(id)listIterator;
-(id)listIteratorWithInt:(int)arg0 ;
-(id)subListWithInt:(int)arg0 withInt:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif