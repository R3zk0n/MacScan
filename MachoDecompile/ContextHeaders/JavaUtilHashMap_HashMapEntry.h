// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILHASHMAP_HASHMAPENTRY_H
#define JAVAUTILHASHMAP_HASHMAPENTRY_H


#import <Foundation/Foundation.h>

#import "JavaUtilHashMap_HashMapEntry.h"
#import "JavaUtilMap_Entry-Protocol.h"

@interface JavaUtilHashMap_HashMapEntry : NSObject <JavaUtilMap_Entry>

 {
    id *key_;
    id *value_;
    int hash__;
    JavaUtilHashMap_HashMapEntry *next_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithId:(id)arg0 withId:(id)arg1 withInt:(int)arg2 withJavaUtilHashMap_HashMapEntry:(id)arg3 ;
-(id)getKey;
-(id)getValue;
-(id)setValueWithId:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif