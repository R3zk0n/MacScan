// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETDATAGRAMPACKET_H
#define JAVANETDATAGRAMPACKET_H


#import <Foundation/Foundation.h>

#import "IOSByteArray.h"
#import "JavaNetInetAddress.h"

@interface JavaNetDatagramPacket : NSObject {
    IOSByteArray *data_;
    int length_;
    int userSuppliedLength_;
    JavaNetInetAddress *address_;
    int port_;
    int offset_;
}




-(id)initWithByteArray:(id)arg0 withInt:(int)arg1 ;
-(id)initWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)initWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withJavaNetInetAddress:(id)arg3 withInt:(int)arg4 ;
-(id)initWithByteArray:(id)arg0 withInt:(int)arg1 withJavaNetInetAddress:(id)arg2 withInt:(int)arg3 ;
-(id)getAddress;
-(id)getData;
-(int)getLength;
-(int)getOffset;
-(int)getPort;
-(void)setAddressWithJavaNetInetAddress:(id)arg0 ;
-(void)setDataWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)setDataWithByteArray:(id)arg0 ;
-(void)setLengthWithInt:(int)arg0 ;
-(void)resetLengthForReceive;
-(void)setReceivedLengthWithInt:(int)arg0 ;
-(void)setPortWithInt:(int)arg0 ;
-(id)initWithByteArray:(id)arg0 withInt:(int)arg1 withJavaNetSocketAddress:(id)arg2 ;
-(id)initWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withJavaNetSocketAddress:(id)arg3 ;
-(id)getSocketAddress;
-(void)setSocketAddressWithJavaNetSocketAddress:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif