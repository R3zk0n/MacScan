// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCOPYONWRITEARRAYLIST_COWSUBLIST_H
#define JAVAUTILCONCURRENTCOPYONWRITEARRAYLIST_COWSUBLIST_H



#import "JavaUtilAbstractList.h"
#import "JavaUtilConcurrentCopyOnWriteArrayList.h"

@interface JavaUtilConcurrentCopyOnWriteArrayList_CowSubList : JavaUtilAbstractList {
    JavaUtilConcurrentCopyOnWriteArrayList *this$0_;
    uint8_t slice_;
}




-(id)initWithJavaUtilConcurrentCopyOnWriteArrayList:(id)arg0 withNSObjectArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(int)size;
-(BOOL)isEmpty;
-(id)getWithInt:(int)arg0 ;
-(id)iterator;
-(id)listIterator;
-(id)listIteratorWithInt:(int)arg0 ;
-(int)indexOfWithId:(id)arg0 ;
-(int)lastIndexOfWithId:(id)arg0 ;
-(BOOL)containsWithId:(id)arg0 ;
-(BOOL)containsAllWithJavaUtilCollection:(id)arg0 ;
-(id)subListWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)removeWithInt:(int)arg0 ;
-(void)clear;
-(void)addWithInt:(int)arg0 withId:(id)arg1 ;
-(BOOL)addWithId:(id)arg0 ;
-(BOOL)addAllWithInt:(int)arg0 withJavaUtilCollection:(id)arg1 ;
-(BOOL)addAllWithJavaUtilCollection:(id)arg0 ;
-(id)setWithInt:(int)arg0 withId:(id)arg1 ;
-(BOOL)removeWithId:(id)arg0 ;
-(BOOL)removeAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)retainAllWithJavaUtilCollection:(id)arg0 ;
-(void)dealloc;
-(void)__javaClone;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif