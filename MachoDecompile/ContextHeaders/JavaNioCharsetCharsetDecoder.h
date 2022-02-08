// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHARSETCHARSETDECODER_H
#define JAVANIOCHARSETCHARSETDECODER_H


#import <Foundation/Foundation.h>

#import "JavaNioCharsetCharset.h"

@interface JavaNioCharsetCharsetDecoder : NSObject {
    float averageCharsPerByte_;
    float maxCharsPerByte_;
    JavaNioCharsetCharset *cs_;
    NSString *replacementChars_;
    int status_;
}




-(id)initWithJavaNioCharsetCharset:(id)arg0 withFloat:(float)arg1 withFloat:(float)arg2 ;
-(float)averageCharsPerByte;
-(id)charset;
-(id)decodeWithJavaNioByteBuffer:(id)arg0 ;
-(id)decodeWithJavaNioByteBuffer:(id)arg0 withJavaNioCharBuffer:(id)arg1 withBoolean:(BOOL)arg2 ;
-(id)decodeLoopWithJavaNioByteBuffer:(id)arg0 withJavaNioCharBuffer:(id)arg1 ;
-(id)detectedCharset;
-(id)flushWithJavaNioCharBuffer:(id)arg0 ;
-(BOOL)isAutoDetecting;
-(BOOL)isCharsetDetected;
-(float)maxCharsPerByte;
-(id)onMalformedInputWithJavaNioCharsetCodingErrorAction:(id)arg0 ;
-(id)onUnmappableCharacterWithJavaNioCharsetCodingErrorAction:(id)arg0 ;
-(id)replacement;
-(id)replaceWithWithNSString:(id)arg0 ;
-(id)reset;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif