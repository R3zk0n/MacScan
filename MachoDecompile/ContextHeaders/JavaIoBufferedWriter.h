// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOBUFFEREDWRITER_H
#define JAVAIOBUFFEREDWRITER_H



#import "JavaIoWriter.h"
#import "IOSCharArray.h"

@interface JavaIoBufferedWriter : JavaIoWriter {
    JavaIoWriter *out_;
    IOSCharArray *buf_;
    int pos_;
}




-(id)initWithJavaIoWriter:(id)arg0 ;
-(id)initWithJavaIoWriter:(id)arg0 withInt:(int)arg1 ;
-(void)close;
-(void)flush;
-(void)checkNotClosed;
-(void)flushInternal;
-(BOOL)isClosed;
-(void)newLine;
-(void)writeWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)writeWithInt:(int)arg0 ;
-(void)writeWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif