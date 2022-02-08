// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOPRINTWRITER_H
#define JAVAIOPRINTWRITER_H



#import "JavaIoWriter.h"

@interface JavaIoPrintWriter : JavaIoWriter {
    JavaIoWriter *out_;
    BOOL ioError_;
    BOOL autoFlush_;
}




-(id)initWithJavaIoOutputStream:(id)arg0 ;
-(id)initWithJavaIoOutputStream:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)initWithJavaIoWriter:(id)arg0 ;
-(id)initWithJavaIoWriter:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)initWithJavaIoFile:(id)arg0 ;
-(id)initWithJavaIoFile:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(BOOL)checkError;
-(void)clearError;
-(void)close;
-(void)flush;
-(id)formatWithNSString:(id)arg0 withNSObjectArray:(id)arg1 ;
-(id)formatWithJavaUtilLocale:(id)arg0 withNSString:(id)arg1 withNSObjectArray:(id)arg2 ;
-(id)printfWithNSString:(id)arg0 withNSObjectArray:(id)arg1 ;
-(id)printfWithJavaUtilLocale:(id)arg0 withNSString:(id)arg1 withNSObjectArray:(id)arg2 ;
-(void)printWithCharArray:(id)arg0 ;
-(void)printWithChar:(unsigned short)arg0 ;
-(void)printWithDouble:(CGFloat)arg0 ;
-(void)printWithFloat:(float)arg0 ;
-(void)printWithInt:(int)arg0 ;
-(void)printWithLong:(NSInteger)arg0 ;
-(void)printWithId:(id)arg0 ;
-(void)printWithNSString:(id)arg0 ;
-(void)printWithBoolean:(BOOL)arg0 ;
-(void)println;
-(void)printlnWithCharArray:(id)arg0 ;
-(void)printlnWithChar:(unsigned short)arg0 ;
-(void)printlnWithDouble:(CGFloat)arg0 ;
-(void)printlnWithFloat:(float)arg0 ;
-(void)printlnWithInt:(int)arg0 ;
-(void)printlnWithLong:(NSInteger)arg0 ;
-(void)printlnWithId:(id)arg0 ;
-(void)printlnWithNSString:(id)arg0 ;
-(void)printlnWithBoolean:(BOOL)arg0 ;
-(void)setError;
-(void)writeWithCharArray:(id)arg0 ;
-(void)writeWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)writeWithInt:(int)arg0 ;
-(void)doWriteWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)writeWithNSString:(id)arg0 ;
-(void)writeWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)appendWithChar:(unsigned short)arg0 ;
-(id)appendWithJavaLangCharSequence:(id)arg0 ;
-(id)appendWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif