// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILILLEGALFORMATFLAGSEXCEPTION_H
#define JAVAUTILILLEGALFORMATFLAGSEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaUtilIllegalFormatException.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilIllegalFormatFlagsException : JavaUtilIllegalFormatException <JavaIoSerializable>

 {
    NSString *flags_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 ;
-(id)getFlags;
-(id)getMessage;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif