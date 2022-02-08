// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIONIOUTILS_H
#define JAVANIONIOUTILS_H


#import <Foundation/Foundation.h>


@interface JavaNioNioUtils : NSObject



-(id)init;
+(void)freeDirectBufferWithJavaNioByteBuffer:(id)arg0 ;
+(id)getFDWithJavaNioChannelsFileChannel:(id)arg0 ;
+(id)newFileChannelWithId:(id)arg0 withJavaIoFileDescriptor:(id)arg1 withInt:(int)arg2 ;
+(id)unsafeArrayWithJavaNioByteBuffer:(id)arg0 ;
+(int)unsafeArrayOffsetWithJavaNioByteBuffer:(id)arg0 ;
+(void)setSocketOptionWithJavaNioFileDescriptorChannel:(id)arg0 withJavaUtilSet:(id)arg1 withJavaNetSocketOption:(id)arg2 withId:(id)arg3 ;
+(id)getSocketOptionWithJavaNioFileDescriptorChannel:(id)arg0 withJavaUtilSet:(id)arg1 withJavaNetSocketOption:(id)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif