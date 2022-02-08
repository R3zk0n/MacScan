// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILDUPLICATEFORMATFLAGSEXCEPTION_H
#define JAVAUTILDUPLICATEFORMATFLAGSEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaUtilIllegalFormatException.h"

@interface JavaUtilDuplicateFormatFlagsException : JavaUtilIllegalFormatException {
    NSString *flags_;
}




-(id)initWithNSString:(id)arg0 ;
-(id)getFlags;
-(id)getMessage;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif