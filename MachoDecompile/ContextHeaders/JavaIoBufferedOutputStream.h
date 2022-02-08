// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOBUFFEREDOUTPUTSTREAM_H
#define JAVAIOBUFFEREDOUTPUTSTREAM_H



#import "JavaIoFilterOutputStream.h"
#import "IOSByteArray.h"

@interface JavaIoBufferedOutputStream : JavaIoFilterOutputStream {
    IOSByteArray *buf_;
    int count_;
}




-(id)initWithJavaIoOutputStream:(id)arg0 ;
-(id)initWithJavaIoOutputStream:(id)arg0 withInt:(int)arg1 ;
-(void)flush;
-(void)checkNotClosed;
-(void)writeWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)close;
-(void)writeWithInt:(int)arg0 ;
-(void)flushInternal;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif