// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILFORMATTERCLOSEDEXCEPTION_H
#define JAVAUTILFORMATTERCLOSEDEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaLangIllegalStateException.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilFormatterClosedException : JavaLangIllegalStateException <JavaIoSerializable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif