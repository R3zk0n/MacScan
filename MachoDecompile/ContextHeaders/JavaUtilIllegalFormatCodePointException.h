// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILILLEGALFORMATCODEPOINTEXCEPTION_H
#define JAVAUTILILLEGALFORMATCODEPOINTEXCEPTION_H


#import <Foundation/Foundation.h>

#import "JavaUtilIllegalFormatException.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilIllegalFormatCodePointException : JavaUtilIllegalFormatException <JavaIoSerializable>

 {
    int c_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 ;
-(int)getCodePoint;
-(id)getMessage;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif