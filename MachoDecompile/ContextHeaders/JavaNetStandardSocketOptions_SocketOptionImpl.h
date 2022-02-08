// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETSTANDARDSOCKETOPTIONS_SOCKETOPTIONIMPL_H
#define JAVANETSTANDARDSOCKETOPTIONS_SOCKETOPTIONIMPL_H


#import <Foundation/Foundation.h>

#import "IOSClass.h"
#import "JavaNetSocketOption-Protocol.h"

@interface JavaNetStandardSocketOptions_SocketOptionImpl : NSObject <JavaNetSocketOption>

 {
    NSString *name_;
    int socketOption_;
    IOSClass *type_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 withIOSClass:(id)arg1 withInt:(int)arg2 ;
-(id)name;
-(id)type;
-(void)setValueWithJavaIoFileDescriptor:(id)arg0 withId:(id)arg1 ;
-(id)validateAndConvertValueBeforeSetWithJavaIoFileDescriptor:(id)arg0 withId:(id)arg1 ;
-(id)getValueWithJavaIoFileDescriptor:(id)arg0 ;
-(id)validateAndConvertValueAfterGetWithJavaIoFileDescriptor:(id)arg0 withId:(id)arg1 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif