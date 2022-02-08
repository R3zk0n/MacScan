// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILHASHTABLE_VALUEENUMERATION_H
#define JAVAUTILHASHTABLE_VALUEENUMERATION_H

@class HashIterator;

#import <Foundation/Foundation.h>

#import "JavaUtilEnumeration-Protocol.h"

@interface JavaUtilHashtable_ValueEnumeration : HashIterator <JavaUtilEnumeration>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)hasMoreElements;
-(id)nextElement;
-(id)initWithJavaUtilHashtable:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif