// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETPROXY_H
#define JAVANETPROXY_H


#import <Foundation/Foundation.h>

#import "JavaNetProxy_TypeEnum.h"
#import "JavaNetSocketAddress.h"

@interface JavaNetProxy : NSObject {
    JavaNetProxy_TypeEnum *type_;
    JavaNetSocketAddress *address_;
}




-(id)initWithJavaNetProxy_TypeEnum:(id)arg0 withJavaNetSocketAddress:(id)arg1 ;
-(id)init;
-(id)type;
-(id)address;
-(id)description;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)dealloc;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif