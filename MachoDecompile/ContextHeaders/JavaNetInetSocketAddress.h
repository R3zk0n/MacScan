// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETINETSOCKETADDRESS_H
#define JAVANETINETSOCKETADDRESS_H


#import <Foundation/Foundation.h>

#import "JavaNetSocketAddress.h"
#import "JavaNetInetAddress.h"

@interface JavaNetInetSocketAddress : JavaNetSocketAddress {
    JavaNetInetAddress *addr_;
    NSString *hostname_;
    int port_;
}




-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(id)initWithNSString:(id)arg0 withInt:(int)arg1 ;
-(id)initWithNSString:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
-(int)getPort;
-(id)getAddress;
-(id)getHostName;
-(id)getHostString;
-(BOOL)isUnresolved;
-(id)description;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)dealloc;
+(id)createUnresolvedWithNSString:(id)arg0 withInt:(int)arg1 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif