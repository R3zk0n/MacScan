// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef IOSPROTOCOLCLASS_H
#define IOSPROTOCOLCLASS_H

@class Protocol;


#import "IOSClass.h"

@interface IOSProtocolClass : IOSClass {
    Protocol *protocol_;
    uint8_t interfaces_;
}




-(id)initWithProtocol:(id)arg0 ;
-(BOOL)isInstance:(id)arg0 ;
-(id)description;
-(id)getName;
-(id)getSimpleName;
-(id)objcName;
-(Class)objcClass;
-(int)getModifiers;
-(BOOL)isAssignableFrom:(id)arg0 ;
-(BOOL)isInterface;
-(void)collectMethods:(id)arg0 publicOnly:(BOOL)arg1 ;
-(id)findMethodWithTranslatedName:(id)arg0 checkSupertypes:(BOOL)arg1 ;
-(id)getInterfacesInternal;
-(void)dealloc;
-(id)objcProtocol;


@end


#endif