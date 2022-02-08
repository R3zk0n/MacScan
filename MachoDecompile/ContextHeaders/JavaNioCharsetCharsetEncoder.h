// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHARSETCHARSETENCODER_H
#define JAVANIOCHARSETCHARSETENCODER_H


#import <Foundation/Foundation.h>

#import "JavaNioCharsetCharset.h"
#import "IOSByteArray.h"
#import "JavaNioCharsetCodingErrorAction.h"
#import "JavaNioCharsetCharsetDecoder.h"

@interface JavaNioCharsetCharsetEncoder : NSObject {
    JavaNioCharsetCharset *cs_;
    float averageBytesPerChar_;
    float maxBytesPerChar_;
    IOSByteArray *replacementBytes_;
    int status_;
    BOOL finished_;
    JavaNioCharsetCodingErrorAction *malformedInputAction_;
    JavaNioCharsetCodingErrorAction *unmappableCharacterAction_;
    JavaNioCharsetCharsetDecoder *decoder_;
}




-(id)initWithJavaNioCharsetCharset:(id)arg0 withFloat:(float)arg1 withFloat:(float)arg2 ;
-(id)initWithJavaNioCharsetCharset:(id)arg0 withFloat:(float)arg1 withFloat:(float)arg2 withByteArray:(id)arg3 ;
-(float)averageBytesPerChar;
-(BOOL)canEncodeWithChar:(unsigned short)arg0 ;
-(BOOL)implCanEncodeWithJavaNioCharBuffer:(id)arg0 ;
-(BOOL)canEncodeWithJavaLangCharSequence:(id)arg0 ;
-(id)charset;
-(id)encodeWithJavaNioCharBuffer:(id)arg0 ;
-(id)encodeWithJavaNioCharBuffer:(id)arg0 withJavaNioByteBuffer:(id)arg1 withBoolean:(BOOL)arg2 ;
-(id)encodeLoopWithJavaNioCharBuffer:(id)arg0 withJavaNioByteBuffer:(id)arg1 ;
-(id)flushWithJavaNioByteBuffer:(id)arg0 ;
-(id)malformedInputAction;
-(float)maxBytesPerChar;
-(id)onMalformedInputWithJavaNioCharsetCodingErrorAction:(id)arg0 ;
-(id)onUnmappableCharacterWithJavaNioCharsetCodingErrorAction:(id)arg0 ;
-(id)replacement;
-(id)replaceWithWithByteArray:(id)arg0 ;
-(id)reset;
-(id)unmappableCharacterAction;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif