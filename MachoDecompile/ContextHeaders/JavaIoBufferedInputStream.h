// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOBUFFEREDINPUTSTREAM_H
#define JAVAIOBUFFEREDINPUTSTREAM_H



#import "JavaIoFilterInputStream.h"

@interface JavaIoBufferedInputStream : JavaIoFilterInputStream {
    uint8_t buf_;
    int count_;
    int marklimit_;
    int markpos_;
    int pos_;
}




-(id)initWithJavaIoInputStream:(id)arg0 ;
-(id)initWithJavaIoInputStream:(id)arg0 withInt:(int)arg1 ;
-(int)available;
-(id)streamClosed;
-(void)close;
-(int)fillbufWithJavaIoInputStream:(id)arg0 withByteArray:(id)arg1 ;
-(void)markWithInt:(int)arg0 ;
-(BOOL)markSupported;
-(int)read;
-(int)readWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)reset;
-(NSInteger)skipWithLong:(NSInteger)arg0 ;
-(void)dealloc;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif