// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETSOCKETIMPL_H
#define JAVANETSOCKETIMPL_H


#import <Foundation/Foundation.h>

#import "JavaNetInetAddress.h"
#import "JavaIoFileDescriptor.h"
#import "JavaNetSocketOptions-Protocol.h"

@interface JavaNetSocketImpl : NSObject <JavaNetSocketOptions>

 {
    JavaNetInetAddress *address_;
    int port_;
    JavaIoFileDescriptor *fd_;
    int localport_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)acceptWithJavaNetSocketImpl:(id)arg0 ;
-(int)available;
-(void)bindWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)close;
-(void)connectWithNSString:(id)arg0 withInt:(int)arg1 ;
-(void)connectWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)createWithBoolean:(BOOL)arg0 ;
-(id)getFileDescriptor;
-(id)getFD$;
-(id)getInetAddress;
-(id)getInputStream;
-(int)getLocalPort;
-(id)getOutputStream;
-(int)getPort;
-(void)listenWithInt:(int)arg0 ;
-(void)shutdownInput;
-(void)shutdownOutput;
-(void)connectWithJavaNetSocketAddress:(id)arg0 withInt:(int)arg1 ;
-(BOOL)supportsUrgentData;
-(void)sendUrgentDataWithInt:(int)arg0 ;
-(void)setPerformancePreferencesWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)onBindWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)onConnectWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)onClose;
-(id)init;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif