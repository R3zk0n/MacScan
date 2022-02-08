// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILIDENTITYHASHMAP_KEYSET_H
#define JAVAUTILIDENTITYHASHMAP_KEYSET_H



#import "JavaUtilAbstractSet.h"
#import "JavaUtilIdentityHashMap.h"

@interface JavaUtilIdentityHashMap_KeySet : JavaUtilAbstractSet {
    JavaUtilIdentityHashMap *this$0_;
}




-(BOOL)containsWithId:(id)arg0 ;
-(int)size;
-(void)clear;
-(BOOL)removeWithId:(id)arg0 ;
-(id)iterator;
-(id)initWithJavaUtilIdentityHashMap:(id)arg0 ;
-(void)__javaClone;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif