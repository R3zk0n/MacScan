// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILILLEGALFORMATCONVERSIONEXCEPTION_H
#define JAVAUTILILLEGALFORMATCONVERSIONEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaUtilIllegalFormatException.h"
#import "IOSClass.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilIllegalFormatConversionException : JavaUtilIllegalFormatException <JavaIoSerializable>

 {
    unsigned short c_;
    IOSClass *arg_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithChar:(unsigned short)arg0 withIOSClass:(id)arg1 ;
-(id)getArgumentClass;
-(unsigned short)getConversion;
-(id)getMessage;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif