// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREREFLECTPARAMETERIZEDTYPEIMPL_H
#define LIBCOREREFLECTPARAMETERIZEDTYPEIMPL_H


#import <Foundation/Foundation.h>

#import "LibcoreReflectListOfTypes.h"
#import "LibcoreReflectParameterizedTypeImpl.h"
#import "IOSClass.h"
#import "JavaLangClassLoader.h"
#import "JavaLangReflectParameterizedType-Protocol.h"
#import "JavaLangReflectType-Protocol.h"

@interface LibcoreReflectParameterizedTypeImpl : NSObject <JavaLangReflectParameterizedType>

 {
    LibcoreReflectListOfTypes *args_;
    LibcoreReflectParameterizedTypeImpl *ownerType0_;
    id<JavaLangReflectType> *ownerTypeRes_;
    IOSClass *rawType_;
    NSString *rawTypeName_;
    JavaLangClassLoader *loader_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithLibcoreReflectParameterizedTypeImpl:(id)arg0 withNSString:(id)arg1 withLibcoreReflectListOfTypes:(id)arg2 withJavaLangClassLoader:(id)arg3 ;
-(id)getActualTypeArguments;
-(id)getOwnerType;
-(id)getRawType;
-(id)getResolvedType;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif