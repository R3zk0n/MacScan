// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILILLEGALFORMATWIDTHEXCEPTION_H
#define JAVAUTILILLEGALFORMATWIDTHEXCEPTION_H



#import "JavaUtilIllegalFormatException.h"

@interface JavaUtilIllegalFormatWidthException : JavaUtilIllegalFormatException {
    int w_;
}




-(id)initWithInt:(int)arg0 ;
-(int)getWidth;
-(id)getMessage;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif