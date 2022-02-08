// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOFILTEROUTPUTSTREAM_H
#define JAVAIOFILTEROUTPUTSTREAM_H



#import "JavaIoOutputStream.h"

@interface JavaIoFilterOutputStream : JavaIoOutputStream {
    JavaIoOutputStream *out_;
}




-(id)initWithJavaIoOutputStream:(id)arg0 ;
-(void)close;
-(void)flush;
-(void)writeWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)writeWithInt:(int)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif