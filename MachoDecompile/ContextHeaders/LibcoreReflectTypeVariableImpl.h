// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREREFLECTTYPEVARIABLEIMPL_H
#define LIBCOREREFLECTTYPEVARIABLEIMPL_H


#import <Foundation/Foundation.h>

#import "LibcoreReflectTypeVariableImpl.h"
#import "LibcoreReflectListOfTypes.h"
#import "JavaLangReflectTypeVariable-Protocol.h"
#import "JavaLangReflectGenericDeclaration-Protocol.h"
#import "JavaLangReflectGenericDeclaration-Protocol.h"

@interface LibcoreReflectTypeVariableImpl : NSObject <JavaLangReflectTypeVariable>

 {
    LibcoreReflectTypeVariableImpl *formalVar_;
    id<JavaLangReflectGenericDeclaration> *declOfVarUser_;
    NSString *name_;
    id<JavaLangReflectGenericDeclaration> *genericDeclaration_;
    LibcoreReflectListOfTypes *bounds_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithJavaLangReflectGenericDeclaration:(id)arg0 withNSString:(id)arg1 withLibcoreReflectListOfTypes:(id)arg2 ;
-(id)initWithJavaLangReflectGenericDeclaration:(id)arg0 withNSString:(id)arg1 ;
-(void)resolve;
-(id)getBounds;
-(id)getGenericDeclaration;
-(id)getName;
-(void)dealloc;
+(id)findFormalVarWithJavaLangReflectGenericDeclaration:(id)arg0 withNSString:(id)arg1 ;
+(id)nextLayerWithJavaLangReflectGenericDeclaration:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif