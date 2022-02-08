// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILFORMATFLAGSCONVERSIONMISMATCHEXCEPTION_H
#define JAVAUTILFORMATFLAGSCONVERSIONMISMATCHEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaUtilIllegalFormatException.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilFormatFlagsConversionMismatchException : JavaUtilIllegalFormatException <JavaIoSerializable>

 {
    NSString *f_;
    unsigned short c_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 withChar:(unsigned short)arg1 ;
-(id)getFlags;
-(unsigned short)getConversion;
-(id)getMessage;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif