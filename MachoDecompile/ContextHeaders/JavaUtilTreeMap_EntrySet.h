// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILTREEMAP_ENTRYSET_H
#define JAVAUTILTREEMAP_ENTRYSET_H



#import "JavaUtilAbstractSet.h"
#import "JavaUtilTreeMap.h"

@interface JavaUtilTreeMap_EntrySet : JavaUtilAbstractSet {
    JavaUtilTreeMap *this$0_;
}




-(int)size;
-(id)iterator;
-(BOOL)containsWithId:(id)arg0 ;
-(BOOL)removeWithId:(id)arg0 ;
-(void)clear;
-(id)initWithJavaUtilTreeMap:(id)arg0 ;
-(void)__javaClone;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif