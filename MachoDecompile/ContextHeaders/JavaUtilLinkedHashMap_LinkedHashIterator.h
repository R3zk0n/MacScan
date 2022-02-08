// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILLINKEDHASHMAP_LINKEDHASHITERATOR_H
#define JAVAUTILLINKEDHASHMAP_LINKEDHASHITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilLinkedHashMap.h"
#import "JavaUtilLinkedHashMap_LinkedEntry.h"
#import "JavaUtilIterator-Protocol.h"

@interface JavaUtilLinkedHashMap_LinkedHashIterator : NSObject <JavaUtilIterator>

 {
    JavaUtilLinkedHashMap *this$0_;
    JavaUtilLinkedHashMap_LinkedEntry *next_;
    JavaUtilLinkedHashMap_LinkedEntry *lastReturned_;
    int expectedModCount_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)hasNext;
-(id)nextEntry;
-(void)remove;
-(id)initWithJavaUtilLinkedHashMap:(id)arg0 ;
-(void)dealloc;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif