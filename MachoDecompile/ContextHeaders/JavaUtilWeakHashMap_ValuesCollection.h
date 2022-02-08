// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILWEAKHASHMAP_VALUESCOLLECTION_H
#define JAVAUTILWEAKHASHMAP_VALUESCOLLECTION_H



#import "JavaUtilAbstractCollection.h"
#import "JavaUtilWeakHashMap.h"

@interface JavaUtilWeakHashMap_ValuesCollection : JavaUtilAbstractCollection {
    JavaUtilWeakHashMap *this$0_;
}




-(int)size;
-(void)clear;
-(BOOL)containsWithId:(id)arg0 ;
-(id)iterator;
-(id)initWithJavaUtilWeakHashMap:(id)arg0 ;
-(void)__javaClone;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif