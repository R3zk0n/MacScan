// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILIDENTITYHASHMAP_IDENTITYHASHMAPENTRY_H
#define JAVAUTILIDENTITYHASHMAP_IDENTITYHASHMAPENTRY_H



#import "JavaUtilMapEntry.h"
#import "JavaUtilIdentityHashMap.h"

@interface JavaUtilIdentityHashMap_IdentityHashMapEntry : JavaUtilMapEntry {
    JavaUtilIdentityHashMap *map_;
}




-(id)initWithJavaUtilIdentityHashMap:(id)arg0 withId:(id)arg1 withId:(id)arg2 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)setValueWithId:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif