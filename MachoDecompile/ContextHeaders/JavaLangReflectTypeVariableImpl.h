// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGREFLECTTYPEVARIABLEIMPL_H
#define JAVALANGREFLECTTYPEVARIABLEIMPL_H


#import <Foundation/Foundation.h>

#import "JavaLangReflectTypeVariable-Protocol.h"

@interface JavaLangReflectTypeVariableImpl : NSObject <JavaLangReflectTypeVariable>

 {
    NSString *name_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithName:(id)arg0 ;
-(id)getBounds;
-(id)getGenericDeclaration;
-(id)getName;
-(void)dealloc;
+(id)typeVariableWithName:(id)arg0 ;


@end


#endif