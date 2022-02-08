// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETINET6ADDRESS_H
#define JAVANETINET6ADDRESS_H


#import <Foundation/Foundation.h>

#import "JavaNetInetAddress.h"

@interface JavaNetInet6Address : JavaNetInetAddress {
    BOOL scope_id_set_;
    int scope_id_;
    BOOL scope_ifname_set_;
    NSString *ifname_;
}




-(id)initWithByteArray:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 ;
-(BOOL)compareLocalTypeWithJavaNetInet6Address:(id)arg0 ;
-(BOOL)isAnyLocalAddress;
-(BOOL)isIPv4CompatibleAddress;
-(BOOL)isLinkLocalAddress;
-(BOOL)isLoopbackAddress;
-(BOOL)isMCGlobal;
-(BOOL)isMCLinkLocal;
-(BOOL)isMCNodeLocal;
-(BOOL)isMCOrgLocal;
-(BOOL)isMCSiteLocal;
-(BOOL)isMulticastAddress;
-(BOOL)isSiteLocalAddress;
-(int)getScopeId;
-(id)getScopedInterface;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(id)description;
-(void)dealloc;
+(id)getByAddressWithNSString:(id)arg0 withByteArray:(id)arg1 withInt:(int)arg2 ;
+(id)getByAddressWithNSString:(id)arg0 withByteArray:(id)arg1 withJavaNetNetworkInterface:(id)arg2 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif