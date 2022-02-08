// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOFILEOUTPUTSTREAM_H
#define JAVAIOFILEOUTPUTSTREAM_H



#import "JavaIoOutputStream.h"
#import "JavaIoFileDescriptor.h"
#import "JavaNioChannelsFileChannel.h"
#import "DalvikSystemCloseGuard.h"

@interface JavaIoFileOutputStream : JavaIoOutputStream {
    JavaIoFileDescriptor *fd_;
    BOOL shouldClose_;
    JavaNioChannelsFileChannel *channel_;
    int mode_;
    DalvikSystemCloseGuard *guard_;
}




-(id)initWithJavaIoFile:(id)arg0 ;
-(id)initWithJavaIoFile:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)initWithJavaIoFileDescriptor:(id)arg0 ;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)close;
-(void)dealloc;
-(id)getChannel;
-(id)getFD;
-(void)writeWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)writeWithInt:(int)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif