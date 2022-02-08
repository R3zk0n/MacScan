// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef SERVICEDELEGATE_H
#define SERVICEDELEGATE_H


#import <Foundation/Foundation.h>

#import "CKContextXPCProtocolImpl.h"
#import "NSXPCListenerDelegate-Protocol.h"

@interface ServiceDelegate : NSObject <NSXPCListenerDelegate>

 {
    CKContextXPCProtocolImpl *_sharedXPCService;
    NSXPCInterface *_interface;
    NSMapTable *_connections;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithAssets:(id)arg0 ;
-(char)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
+(id)debugProcessIdentifierForConnection:(id)arg0 ;


@end


#endif