// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILABSTRACTLIST_SUBABSTRACTLIST_H
#define JAVAUTILABSTRACTLIST_SUBABSTRACTLIST_H



#import "JavaUtilAbstractList.h"

@interface JavaUtilAbstractList_SubAbstractList : JavaUtilAbstractList {
    JavaUtilAbstractList *fullList_;
    int offset_;
    int size_;
}




-(id)initWithJavaUtilAbstractList:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)addWithInt:(int)arg0 withId:(id)arg1 ;
-(BOOL)addAllWithInt:(int)arg0 withJavaUtilCollection:(id)arg1 ;
-(BOOL)addAllWithJavaUtilCollection:(id)arg0 ;
-(id)getWithInt:(int)arg0 ;
-(id)iterator;
-(id)listIteratorWithInt:(int)arg0 ;
-(id)removeWithInt:(int)arg0 ;
-(void)removeRangeWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)setWithInt:(int)arg0 withId:(id)arg1 ;
-(int)size;
-(void)sizeChangedWithBoolean:(BOOL)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif