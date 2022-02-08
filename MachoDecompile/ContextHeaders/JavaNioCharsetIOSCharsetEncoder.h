// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHARSETIOSCHARSETENCODER_H
#define JAVANIOCHARSETIOSCHARSETENCODER_H



#import "JavaNioCharsetCharsetEncoder.h"
#import "IOSCharArray.h"
#import "IOSByteArray.h"

@interface JavaNioCharsetIOSCharsetEncoder : JavaNioCharsetCharsetEncoder {
    IOSCharArray *inBuffer_;
    IOSByteArray *byteBuffer_;
    int outIndex_;
}




-(id)initWithJavaNioCharsetCharset:(id)arg0 withFloat:(float)arg1 ;
-(id)encodeWithJavaNioCharBuffer:(id)arg0 ;
-(id)encodeLoopWithJavaNioCharBuffer:(id)arg0 withJavaNioByteBuffer:(id)arg1 ;
-(id)encodeImplWithJavaNioCharBuffer:(id)arg0 ;
-(void)dealloc;
+(id)encodeWithCharArray:(id)arg0 withLong:(NSInteger)arg1 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif