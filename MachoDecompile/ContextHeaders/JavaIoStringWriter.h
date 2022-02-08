// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOSTRINGWRITER_H
#define JAVAIOSTRINGWRITER_H



#import "JavaIoWriter.h"
#import "JavaLangStringBuffer.h"

@interface JavaIoStringWriter : JavaIoWriter {
    JavaLangStringBuffer *buf_;
}




-(id)init;
-(id)initWithInt:(int)arg0 ;
-(void)close;
-(void)flush;
-(id)getBuffer;
-(id)description;
-(void)writeWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)writeWithInt:(int)arg0 ;
-(void)writeWithNSString:(id)arg0 ;
-(void)writeWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)appendWithChar:(unsigned short)arg0 ;
-(id)appendWithJavaLangCharSequence:(id)arg0 ;
-(id)appendWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif