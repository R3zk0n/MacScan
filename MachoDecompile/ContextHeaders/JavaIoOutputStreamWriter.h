// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOOUTPUTSTREAMWRITER_H
#define JAVAIOOUTPUTSTREAMWRITER_H



#import "JavaIoWriter.h"
#import "JavaIoOutputStream.h"
#import "JavaNioCharsetCharsetEncoder.h"
#import "JavaNioByteBuffer.h"

@interface JavaIoOutputStreamWriter : JavaIoWriter {
    JavaIoOutputStream *out_;
    JavaNioCharsetCharsetEncoder *encoder_;
    JavaNioByteBuffer *bytes_;
}




-(id)initWithJavaIoOutputStream:(id)arg0 ;
-(id)initWithJavaIoOutputStream:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithJavaIoOutputStream:(id)arg0 withJavaNioCharsetCharset:(id)arg1 ;
-(id)initWithJavaIoOutputStream:(id)arg0 withJavaNioCharsetCharsetEncoder:(id)arg1 ;
-(void)close;
-(void)flush;
-(void)flushBytesWithBoolean:(BOOL)arg0 ;
-(void)convertWithJavaNioCharBuffer:(id)arg0 ;
-(void)drainEncoder;
-(void)checkStatus;
-(id)getEncoding;
-(void)writeWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)writeWithInt:(int)arg0 ;
-(void)writeWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)checkError;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif