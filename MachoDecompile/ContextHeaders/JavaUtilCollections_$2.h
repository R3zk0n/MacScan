// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_$2_H
#define JAVAUTILCOLLECTIONS_$2_H


#import <Foundation/Foundation.h>

#import "JavaUtilEnumeration-Protocol.h"

@interface JavaUtilCollections_$2 : NSObject <JavaUtilEnumeration>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)hasMoreElements;
-(id)nextElement;
-(id)init;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif