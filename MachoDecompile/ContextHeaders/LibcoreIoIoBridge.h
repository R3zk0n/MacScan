// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOIOBRIDGE_H
#define LIBCOREIOIOBRIDGE_H


#import <Foundation/Foundation.h>


@interface LibcoreIoIoBridge : NSObject



-(id)init;
+(int)availableWithJavaIoFileDescriptor:(id)arg0 ;
+(void)bindWithJavaIoFileDescriptor:(id)arg0 withJavaNetInetAddress:(id)arg1 withInt:(int)arg2 ;
+(void)connectWithJavaIoFileDescriptor:(id)arg0 withJavaNetInetAddress:(id)arg1 withInt:(int)arg2 ;
+(void)connectWithJavaIoFileDescriptor:(id)arg0 withJavaNetInetAddress:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(void)connectErrnoWithJavaIoFileDescriptor:(id)arg0 withJavaNetInetAddress:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(id)connectDetailWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLibcoreIoErrnoException:(id)arg3 ;
+(void)closeSocketWithJavaIoFileDescriptor:(id)arg0 ;
+(BOOL)isConnectedWithJavaIoFileDescriptor:(id)arg0 withJavaNetInetAddress:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
+(id)getSocketOptionWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 ;
+(id)getSocketOptionErrnoWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 ;
+(BOOL)booleanFromIntWithInt:(int)arg0 ;
+(int)booleanToIntWithBoolean:(BOOL)arg0 ;
+(void)setSocketOptionWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withId:(id)arg2 ;
+(void)setSocketOptionErrnoWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withId:(id)arg2 ;
+(int)getGroupSourceReqOpWithInt:(int)arg0 ;
+(id)openWithNSString:(id)arg0 withInt:(int)arg1 ;
+(BOOL)isDirectoryWithNSString:(id)arg0 ;
+(int)readWithJavaIoFileDescriptor:(id)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(void)writeWithJavaIoFileDescriptor:(id)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(int)sendtoWithJavaIoFileDescriptor:(id)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withJavaNetInetAddress:(id)arg5 withInt:(int)arg6 ;
+(int)sendtoWithJavaIoFileDescriptor:(id)arg0 withJavaNioByteBuffer:(id)arg1 withInt:(int)arg2 withJavaNetInetAddress:(id)arg3 withInt:(int)arg4 ;
+(int)maybeThrowAfterSendtoWithBoolean:(BOOL)arg0 withLibcoreIoErrnoException:(id)arg1 ;
+(int)recvfromWithBoolean:(BOOL)arg0 withJavaIoFileDescriptor:(id)arg1 withByteArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withJavaNetDatagramPacket:(id)arg6 withBoolean:(BOOL)arg7 ;
+(int)recvfromWithBoolean:(BOOL)arg0 withJavaIoFileDescriptor:(id)arg1 withJavaNioByteBuffer:(id)arg2 withInt:(int)arg3 withJavaNetDatagramPacket:(id)arg4 withBoolean:(BOOL)arg5 ;
+(int)postRecvfromWithBoolean:(BOOL)arg0 withJavaNetDatagramPacket:(id)arg1 withBoolean:(BOOL)arg2 withJavaNetInetSocketAddress:(id)arg3 withInt:(int)arg4 ;
+(int)maybeThrowAfterRecvfromWithBoolean:(BOOL)arg0 withBoolean:(BOOL)arg1 withLibcoreIoErrnoException:(id)arg2 ;
+(id)socketWithBoolean:(BOOL)arg0 ;
+(id)getSocketLocalAddressWithJavaIoFileDescriptor:(id)arg0 ;
+(int)getSocketLocalPortWithJavaIoFileDescriptor:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif