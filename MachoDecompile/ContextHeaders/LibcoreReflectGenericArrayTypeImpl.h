// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREREFLECTGENERICARRAYTYPEIMPL_H
#define LIBCOREREFLECTGENERICARRAYTYPEIMPL_H


#import <Foundation/Foundation.h>

#import "JavaLangReflectGenericArrayType-Protocol.h"
#import "JavaLangReflectType-Protocol.h"

@interface LibcoreReflectGenericArrayTypeImpl : NSObject <JavaLangReflectGenericArrayType>

 {
    id<JavaLangReflectType> *componentType_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaLangReflectType:(id)arg0 ;
-(id)getGenericComponentType;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif