// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHARSETIOSCHARSETDECODER_H
#define JAVANIOCHARSETIOSCHARSETDECODER_H



#import "JavaNioCharsetCharsetDecoder.h"
#import "IOSByteArray.h"
#import "IOSCharArray.h"

@interface JavaNioCharsetIOSCharsetDecoder : JavaNioCharsetCharsetDecoder {
    IOSByteArray *inBuffer_;
    IOSCharArray *charBuffer_;
    int outIndex_;
}




-(id)initWithJavaNioCharsetCharset:(id)arg0 ;
-(id)decodeLoopWithJavaNioByteBuffer:(id)arg0 withJavaNioCharBuffer:(id)arg1 ;
-(id)decodeWithJavaNioByteBuffer:(id)arg0 ;
-(id)decodeImplWithJavaNioByteBuffer:(id)arg0 ;
-(int)available;
-(void)dealloc;
+(id)decodeWithByteArray:(id)arg0 withLong:(NSInteger)arg1 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif