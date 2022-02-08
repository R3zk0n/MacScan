// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHARSETUNMAPPABLECHARACTEREXCEPTION_H
#define JAVANIOCHARSETUNMAPPABLECHARACTEREXCEPTION_H



#import "JavaNioCharsetCharacterCodingException.h"

@interface JavaNioCharsetUnmappableCharacterException : JavaNioCharsetCharacterCodingException {
    int inputLength_;
}




-(id)initWithInt:(int)arg0 ;
-(int)getInputLength;
-(id)getMessage;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif