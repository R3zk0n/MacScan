// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOFILEINPUTSTREAM_H
#define JAVAIOFILEINPUTSTREAM_H



#import "JavaIoInputStream.h"
#import "JavaIoFileDescriptor.h"
#import "JavaNioChannelsFileChannel.h"
#import "DalvikSystemCloseGuard.h"

@interface JavaIoFileInputStream : JavaIoInputStream {
    JavaIoFileDescriptor *fd_;
    BOOL shouldClose_;
    JavaNioChannelsFileChannel *channel_;
    DalvikSystemCloseGuard *guard_;
}




-(id)initWithJavaIoFile:(id)arg0 ;
-(id)initWithJavaIoFileDescriptor:(id)arg0 ;
-(id)initWithNSString:(id)arg0 ;
-(int)available;
-(void)close;
-(void)dealloc;
-(id)getChannel;
-(id)getFD;
-(int)read;
-(int)readWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(NSInteger)skipWithLong:(NSInteger)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif