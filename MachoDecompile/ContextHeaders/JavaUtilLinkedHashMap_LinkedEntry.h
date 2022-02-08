// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILLINKEDHASHMAP_LINKEDENTRY_H
#define JAVAUTILLINKEDHASHMAP_LINKEDENTRY_H

@class HashMapEntry;


#import "JavaUtilLinkedHashMap_LinkedEntry.h"

@interface JavaUtilLinkedHashMap_LinkedEntry : HashMapEntry {
    JavaUtilLinkedHashMap_LinkedEntry *nxt_;
    JavaUtilLinkedHashMap_LinkedEntry *prv_;
}




-(id)init;
-(id)initWithId:(id)arg0 withId:(id)arg1 withInt:(int)arg2 withJavaUtilHashMap_HashMapEntry:(id)arg3 withJavaUtilLinkedHashMap_LinkedEntry:(id)arg4 withJavaUtilLinkedHashMap_LinkedEntry:(id)arg5 ;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif