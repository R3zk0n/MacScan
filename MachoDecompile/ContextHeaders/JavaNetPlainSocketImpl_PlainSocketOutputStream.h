// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETPLAINSOCKETIMPL_PLAINSOCKETOUTPUTSTREAM_H
#define JAVANETPLAINSOCKETIMPL_PLAINSOCKETOUTPUTSTREAM_H



#import "JavaIoOutputStream.h"
#import "JavaNetPlainSocketImpl.h"

@interface JavaNetPlainSocketImpl_PlainSocketOutputStream : JavaIoOutputStream {
    JavaNetPlainSocketImpl *socketImpl_;
}




-(id)initWithJavaNetPlainSocketImpl:(id)arg0 ;
-(void)close;
-(void)writeWithInt:(int)arg0 ;
-(void)writeWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif