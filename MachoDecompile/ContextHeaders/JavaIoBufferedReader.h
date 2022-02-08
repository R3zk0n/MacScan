// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOBUFFEREDREADER_H
#define JAVAIOBUFFEREDREADER_H



#import "JavaIoReader.h"
#import "IOSCharArray.h"

@interface JavaIoBufferedReader : JavaIoReader {
    JavaIoReader *in_;
    IOSCharArray *buf_;
    int pos_;
    int end_;
    int mark_;
    int markLimit_;
    BOOL lastWasCR_;
    BOOL markedLastWasCR_;
}




-(id)initWithJavaIoReader:(id)arg0 ;
-(id)initWithJavaIoReader:(id)arg0 withInt:(int)arg1 ;
-(void)close;
-(int)fillBuf;
-(BOOL)isClosed;
-(void)markWithInt:(int)arg0 ;
-(void)checkNotClosed;
-(BOOL)markSupported;
-(int)read;
-(int)readChar;
-(int)readWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)chompNewline;
-(void)maybeSwallowLF;
-(id)readLine;
-(BOOL)ready;
-(void)reset;
-(NSInteger)skipWithLong:(NSInteger)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif