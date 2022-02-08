// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILHASHMAP_KEYSET_H
#define JAVAUTILHASHMAP_KEYSET_H



#import "JavaUtilAbstractSet.h"
#import "JavaUtilHashMap.h"

@interface JavaUtilHashMap_KeySet : JavaUtilAbstractSet {
    JavaUtilHashMap *this$0_;
}




-(id)iterator;
-(int)size;
-(BOOL)isEmpty;
-(BOOL)containsWithId:(id)arg0 ;
-(BOOL)removeWithId:(id)arg0 ;
-(void)clear;
-(id)initWithJavaUtilHashMap:(id)arg0 ;
-(void)__javaClone;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif