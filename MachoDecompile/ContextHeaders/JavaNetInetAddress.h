// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETINETADDRESS_H
#define JAVANETINETADDRESS_H


#import <Foundation/Foundation.h>

#import "IOSByteArray.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaNetInetAddress : NSObject <JavaIoSerializable>

 {
    IOSByteArray *ipaddress_;
    NSString *hostName_;
    int family_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withByteArray:(id)arg1 withNSString:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)getAddress;
-(id)getHostAddress;
-(id)getHostName;
-(id)getCanonicalHostName;
-(BOOL)isAnyLocalAddress;
-(BOOL)isLinkLocalAddress;
-(BOOL)isLoopbackAddress;
-(BOOL)isMCGlobal;
-(BOOL)isMCLinkLocal;
-(BOOL)isMCNodeLocal;
-(BOOL)isMCOrgLocal;
-(BOOL)isMCSiteLocal;
-(BOOL)isMulticastAddress;
-(BOOL)isSiteLocalAddress;
-(BOOL)isReachableWithInt:(int)arg0 ;
-(BOOL)isReachableWithJavaNetNetworkInterface:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)isReachableWithJavaNetInetAddress:(id)arg0 withJavaNetInetAddress:(id)arg1 withInt:(int)arg2 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(id)readResolve;
-(int)getFamily;
-(void)dealloc;
+(id)bytesToInetAddressesWithByteArray2:(id)arg0 withNSString:(id)arg1 ;
+(id)getAllByNameWithNSString:(id)arg0 ;
+(id)getAllByNameImplWithNSString:(id)arg0 ;
+(id)makeInetAddressWithByteArray:(id)arg0 withNSString:(id)arg1 ;
+(id)disallowDeprecatedFormatsWithNSString:(id)arg0 withJavaNetInetAddress:(id)arg1 ;
+(id)parseNumericAddressNoThrowWithNSString:(id)arg0 ;
+(id)getByNameWithNSString:(id)arg0 ;
+(id)getLocalHost;
+(id)lookupHostByNameWithNSString:(id)arg0 ;
+(void)clearDnsCache;
+(id)getHostByAddrImplWithJavaNetInetAddress:(id)arg0 ;
+(BOOL)isNumericWithNSString:(id)arg0 ;
+(id)parseNumericAddressWithNSString:(id)arg0 ;
+(id)loopbackAddresses;
+(id)getLoopbackAddress;
+(id)getByAddressWithByteArray:(id)arg0 ;
+(id)getByAddressWithNSString:(id)arg0 withByteArray:(id)arg1 ;
+(id)getByAddressWithNSString:(id)arg0 withByteArray:(id)arg1 withInt:(int)arg2 ;
+(id)badAddressLengthWithByteArray:(id)arg0 ;
+(BOOL)isIPv4MappedAddressWithByteArray:(id)arg0 ;
+(id)ipv4MappedToIPv4WithByteArray:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif