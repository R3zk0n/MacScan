// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETPLAINSOCKETIMPL_PLAINSOCKETINPUTSTREAM_H
#define JAVANETPLAINSOCKETIMPL_PLAINSOCKETINPUTSTREAM_H



#import "JavaIoInputStream.h"
#import "JavaNetPlainSocketImpl.h"

@interface JavaNetPlainSocketImpl_PlainSocketInputStream : JavaIoInputStream {
    JavaNetPlainSocketImpl *socketImpl_;
}




-(id)initWithJavaNetPlainSocketImpl:(id)arg0 ;
-(int)available;
-(void)close;
-(int)read;
-(int)readWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif