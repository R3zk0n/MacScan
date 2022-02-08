// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILUNKNOWNFORMATCONVERSIONEXCEPTION_H
#define JAVAUTILUNKNOWNFORMATCONVERSIONEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaUtilIllegalFormatException.h"

@interface JavaUtilUnknownFormatConversionException : JavaUtilIllegalFormatException {
    NSString *s_;
}




-(id)initWithNSString:(id)arg0 ;
-(id)getConversion;
-(id)getMessage;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif