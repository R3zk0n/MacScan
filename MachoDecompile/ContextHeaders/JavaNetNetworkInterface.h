// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETNETWORKINTERFACE_H
#define JAVANETNETWORKINTERFACE_H


#import <Foundation/Foundation.h>

#import "JavaNetNetworkInterface.h"
#import "JavaUtilList-Protocol.h"
#import "JavaUtilList-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface JavaNetNetworkInterface : NSObject {
    NSString *name_;
    int interfaceIndex_;
    id<JavaUtilList> *interfaceAddresses_;
    id<JavaUtilList> *addresses_;
    id<JavaUtilList> *children_;
    JavaNetNetworkInterface *parent_;
}




-(id)initWithNSString:(id)arg0 withInt:(int)arg1 withJavaUtilList:(id)arg2 withJavaUtilList:(id)arg3 ;
-(int)getIndex;
-(id)getName;
-(id)getInetAddresses;
-(id)getDisplayName;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)getInterfaceAddresses;
-(id)getSubInterfaces;
-(id)getParent;
-(BOOL)isUp;
-(BOOL)isLoopback;
-(BOOL)isPointToPoint;
-(BOOL)supportsMulticast;
-(BOOL)hasFlagWithInt:(int)arg0 ;
-(id)getHardwareAddress;
-(int)getMTU;
-(BOOL)isVirtual;
-(void)dealloc;
+(id)forUnboundMulticastSocket;
+(id)getByNameWithNSString:(id)arg0 ;
+(id)rethrowAsSocketExceptionWithJavaLangException:(id)arg0 ;
+(id)getByInetAddressWithJavaNetInetAddress:(id)arg0 ;
+(id)getByIndexWithInt:(int)arg0 ;
+(id)getNetworkInterfaces;
+(id)getNetworkInterfacesList;
+(id)getInterfaceNames;
+(int)getInterfaceIndexWithNSString:(id)arg0 ;
+(id)makeSocketErrnoExceptionWithNSString:(id)arg0 withInt:(int)arg1 ;
+(void)collectIpv6AddressesWithNSString:(id)arg0 withInt:(int)arg1 withJavaUtilList:(id)arg2 withJavaUtilList:(id)arg3 ;
+(id)getIpv6AddressesWithNSString:(id)arg0 ;
+(int)ipv6NetmaskToPrefixLengthWithByteArray:(id)arg0 ;
+(void)collectIpv4AddressWithNSString:(id)arg0 withJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif