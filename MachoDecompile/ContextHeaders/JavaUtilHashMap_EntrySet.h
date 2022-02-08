// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILHASHMAP_ENTRYSET_H
#define JAVAUTILHASHMAP_ENTRYSET_H



#import "JavaUtilAbstractSet.h"
#import "JavaUtilHashMap.h"

@interface JavaUtilHashMap_EntrySet : JavaUtilAbstractSet {
    JavaUtilHashMap *this$0_;
}




-(id)iterator;
-(BOOL)containsWithId:(id)arg0 ;
-(BOOL)removeWithId:(id)arg0 ;
-(int)size;
-(BOOL)isEmpty;
-(void)clear;
-(id)initWithJavaUtilHashMap:(id)arg0 ;
-(void)__javaClone;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif