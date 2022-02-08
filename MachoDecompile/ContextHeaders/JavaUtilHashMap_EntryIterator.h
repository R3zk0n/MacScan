// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILHASHMAP_ENTRYITERATOR_H
#define JAVAUTILHASHMAP_ENTRYITERATOR_H

@class HashIterator;

#import <Foundation/Foundation.h>

#import "JavaUtilIterator-Protocol.h"

@interface JavaUtilHashMap_EntryIterator : HashIterator <JavaUtilIterator>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)next;
-(id)initWithJavaUtilHashMap:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif