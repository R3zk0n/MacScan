// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCONCURRENTHASHMAP_ENTRYITERATOR_H
#define JAVAUTILCONCURRENTCONCURRENTHASHMAP_ENTRYITERATOR_H

@class BaseIterator;

#import <Foundation/Foundation.h>

#import "JavaUtilIterator-Protocol.h"

@interface JavaUtilConcurrentConcurrentHashMap_EntryIterator : BaseIterator <JavaUtilIterator>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withJavaUtilConcurrentConcurrentHashMap:(id)arg4 ;
-(id)next;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif