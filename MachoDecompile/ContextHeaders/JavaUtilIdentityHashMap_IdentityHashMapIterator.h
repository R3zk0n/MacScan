// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILIDENTITYHASHMAP_IDENTITYHASHMAPITERATOR_H
#define JAVAUTILIDENTITYHASHMAP_IDENTITYHASHMAPITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilIdentityHashMap.h"
#import "JavaUtilIterator-Protocol.h"
#import "JavaUtilMapEntry_Type-Protocol.h"

@interface JavaUtilIdentityHashMap_IdentityHashMapIterator : NSObject <JavaUtilIterator>

 {
    JavaUtilIdentityHashMap *associatedMap_;
    int expectedModCount_;
    id<JavaUtilMapEntry_Type> *type_;
    BOOL canRemove_;
    int position_;
    int lastPosition_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilMapEntry_Type:(id)arg0 withJavaUtilIdentityHashMap:(id)arg1 ;
-(BOOL)hasNext;
-(void)checkConcurrentMod;
-(id)next;
-(void)remove;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif