// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOINPUTSTREAMREADER_H
#define JAVAIOINPUTSTREAMREADER_H



#import "JavaIoReader.h"
#import "JavaIoInputStream.h"
#import "JavaNioCharsetCharsetDecoder.h"
#import "JavaNioByteBuffer.h"

@interface JavaIoInputStreamReader : JavaIoReader {
    JavaIoInputStream *in_;
    BOOL endOfInput_;
    JavaNioCharsetCharsetDecoder *decoder_;
    JavaNioByteBuffer *bytes_;
}




-(id)initWithJavaIoInputStream:(id)arg0 ;
-(id)initWithJavaIoInputStream:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithJavaIoInputStream:(id)arg0 withJavaNioCharsetCharsetDecoder:(id)arg1 ;
-(id)initWithJavaIoInputStream:(id)arg0 withJavaNioCharsetCharset:(id)arg1 ;
-(void)close;
-(id)getEncoding;
-(int)read;
-(int)readWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)isOpen;
-(BOOL)ready;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif