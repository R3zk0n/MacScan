// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETINTERFACEADDRESS_H
#define JAVANETINTERFACEADDRESS_H


#import <Foundation/Foundation.h>

#import "JavaNetInetAddress.h"

@interface JavaNetInterfaceAddress : NSObject {
    JavaNetInetAddress *address_;
    JavaNetInetAddress *broadcastAddress_;
    short prefixLength_;
}




-(id)initWithJavaNetInet4Address:(id)arg0 withJavaNetInet4Address:(id)arg1 withJavaNetInet4Address:(id)arg2 ;
-(id)initWithJavaNetInet6Address:(id)arg0 withShort:(short)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)getAddress;
-(id)getBroadcast;
-(short)getNetworkPrefixLength;
-(void)dealloc;
+(short)countPrefixLengthWithJavaNetInet4Address:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif