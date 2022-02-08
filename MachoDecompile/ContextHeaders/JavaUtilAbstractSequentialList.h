// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILABSTRACTSEQUENTIALLIST_H
#define JAVAUTILABSTRACTSEQUENTIALLIST_H



#import "JavaUtilAbstractList.h"

@interface JavaUtilAbstractSequentialList : JavaUtilAbstractList



-(id)init;
-(void)addWithInt:(int)arg0 withId:(id)arg1 ;
-(BOOL)addAllWithInt:(int)arg0 withJavaUtilCollection:(id)arg1 ;
-(id)getWithInt:(int)arg0 ;
-(id)iterator;
-(id)listIteratorWithInt:(int)arg0 ;
-(id)removeWithInt:(int)arg0 ;
-(id)setWithInt:(int)arg0 withId:(id)arg1 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif