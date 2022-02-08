// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILILLEGALFORMATPRECISIONEXCEPTION_H
#define JAVAUTILILLEGALFORMATPRECISIONEXCEPTION_H



#import "JavaUtilIllegalFormatException.h"

@interface JavaUtilIllegalFormatPrecisionException : JavaUtilIllegalFormatException {
    int p_;
}




-(id)initWithInt:(int)arg0 ;
-(int)getPrecision;
-(id)getMessage;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif